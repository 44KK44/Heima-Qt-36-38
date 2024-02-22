#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    //QPainter painter(this);

    QPainter painter;
    painter.begin(this);

    //绘图操作
    //画背景图
    //painter.drawPixmap(0, 0, width(), height(), QPixmap("../image/123.jpg"));
    //painter.drawPixmap(rect(), QPixmap("../image/123.jpg"));

    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::DotLine);

    painter.setPen(pen);

    QBrush brush;
    brush.setColor(Qt::blue);
    brush.setStyle(Qt::Dense1Pattern);
    painter.setBrush(brush);

    //画直线
    painter.drawLine(QPoint(200, 0), QPoint(200, 200));
    painter.drawLine(QPoint(200, 200), QPoint(400, 200));
    painter.drawLine(QPoint(400, 200), QPoint(400, 400));
    painter.drawLine(QPoint(400, 400), QPoint(600, 400));
    painter.drawLine(QPoint(600, 400), QPoint(600, 600));

    //画矩形
    painter.drawRect(QRect(50, 50, 100, 100));

    //画圆
    painter.drawEllipse(QPoint(300, 300), 100, 50);

    //画笑脸
    painter.drawChord(QRect(250, 250, 300, 300), 30 * 16, 120 * 16);

    //画扇形
    painter.drawPie(QRect(200, 200, 100, 100), 30 * 16, 120 * 16);

    //画圆弧
    painter.drawArc(QRect(400, 400, 100, 100), 30 * 16, 120 * 16);

    //画文字
    painter.drawText(QPoint(0, 300), "good");



    painter.end();
}
