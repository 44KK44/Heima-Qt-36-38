#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    //重写绘图事件,虚函数
    //绘图时间内部自动调用，窗口需要重绘的时候（状态改变）
    void paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
