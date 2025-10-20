#ifndef DRAWINGCANVAS_H
#define DRAWINGCANVAS_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QPainter>
#include <QMouseEvent>
#include <iostream>
#include <iomanip>
#include <QPixmap>
#include "CustomMatrix.h"

using namespace std;
using Array3x3 = std::array<std::array<bool, 3>, 3>;


class DrawingCanvas : public QWidget
{
    Q_OBJECT
private:
    const int WINDOW_WIDTH=600;
    const int WINDOW_HEIGHT=400;

public:
    explicit DrawingCanvas(QWidget *parent = nullptr);

    void clearPoints();
    void paintLines();
    void segmentDetection();

protected:
    void paintEvent(QPaintEvent *event) override;

    void mousePressEvent(QMouseEvent *event) override;

private:
    QVector<QPoint> m_points;

    bool isPaintLinesClicked = false;
};
#endif 
