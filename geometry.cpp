#include "geometry.h"


Geometry::Geometry(QWidget *parent)
    : QDialog(parent)
{
    textEdit = new QTextEdit();
    main_layout = new QHBoxLayout(this);

    main_layout->addWidget(textEdit);
    setMinimumWidth(330);
    setMinimumHeight(160);
    textEdit->setReadOnly(true);
    update_text();
}

Geometry::~Geometry()
{

}

void Geometry::update_text()
{
    QString str1;
    QString tmpstr;

    str1 += "x():\t\t";
    str1 += tmpstr.setNum(x()) + "\n";

    str1 += "y():\t\t";
    str1 += tmpstr.setNum(y()) + "\n";

    QString frameStr;                 	//获得frameGeometry()函数的结果并显示
    QString tempStr1,tempStr2,tempStr3,tempStr4;
    frameStr = tempStr1.setNum(frameGeometry().x())+","+tempStr2.setNum(frameGeometry().y())+","+tempStr3.setNum(frameGeometry().width())+","+tempStr4.setNum(frameGeometry().height());
    str1 += "frameGeometry():\t";
    str1 += frameStr + "\n";

    QString positionStr;            	//获得pos()函数的结果并显示
    QString tempStr11,tempStr12;
    positionStr =tempStr11.setNum(pos().x())+","+tempStr12.setNum(pos().y());
    str1 += "pos():\t\t";
    str1 += positionStr + "\n";

    QString geoStr;               		//获得geometry()函数的结果并显示
    QString tempStr21,tempStr22,tempStr23,tempStr24;
    geoStr =tempStr21.setNum(geometry().x())+","+tempStr22.setNum(geometry().y())+","+tempStr23.setNum(geometry().width())+","+tempStr24.setNum(geometry().height());
    str1 += "geometry():\t\t";
    str1 += geoStr + "\n";

    QString wStr,hStr;                  //获得width()、height()函数的结果并显示
    str1 += "width():\t\t";
    str1 += wStr.setNum(width()) + "\n";
    str1 += "height():\t\t";
    str1 += hStr.setNum(height()) + "\n";

    QString rectStr;                    //获得rect()函数的结果并显示
    QString tempStr31,tempStr32,tempStr33,tempStr34;
    rectStr =tempStr31.setNum(rect().x())+","+tempStr32.setNum(rect().y())+","+tempStr33.setNum(/*rect().width()*/width())+","+tempStr34.setNum(height()/*rect().height()*/);
    str1 += "rect():\t\t";
    str1 += rectStr + "\n";

    QString sizeStr;                 	//获得size()函数的结果并显示
    QString tempStr41,tempStr42;
    sizeStr =tempStr41.setNum(size().width())+","+tempStr42.setNum(size().height());
    str1 += "size():\t\t";
    str1 += sizeStr;

    textEdit->setText(str1);

}

void Geometry:: moveEvent(QMoveEvent *)
{
    update_text();
}

void Geometry::resizeEvent(QResizeEvent *)
{
    update_text();
}

