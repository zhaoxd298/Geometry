#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QDialog>
#include <QTextEdit>
#include <QHBoxLayout>

class Geometry : public QDialog
{
    Q_OBJECT

public:
    Geometry(QWidget *parent = 0);
    ~Geometry();

    void update_text();
private:
    QTextEdit *textEdit;
    QHBoxLayout *main_layout;
protected:
    void moveEvent(QMoveEvent *);
    void resizeEvent(QResizeEvent *);
};

#endif // GEOMETRY_H
