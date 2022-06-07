#include "mainwindow.h"
#include "myitem.h"
#include "myitem2.h"
#include "ui_mainwindow.h"

#include <QGraphicsLineItem>

#define ITEM_COUNT 1000 // item数量，单位k

// 模式1：正常情况，一条线一个Item
// 模式2：所有线条在一个Item中渲染
#define MODEL 1

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->graphicsView->setResizeAnchor(QGraphicsView::AnchorUnderMouse);
    ui->graphicsView->scale(1.0 / 3, 1.0 / 3);
    QGraphicsScene *scene = new QGraphicsScene(this);
#if (MODEL == 1)
    for (int i = 0; i < ITEM_COUNT; i++) {
        for (int j = 0; j < 1000; j++) {
            QGraphicsItem *item = new MyItem(QPointF(i * 4, j * 4));
            scene->addItem(item);
        }
    }
#elif (MODEL == 2)
    MyItem2 *item = new MyItem2;
    for (int i = 0; i < ITEM_COUNT; i++) {
        for (int j = 0; j < 1000; j++) {
            item->addPoint(QPointF(i * 4, j * 4));
        }
    }
    scene->addItem(item);
#endif
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

