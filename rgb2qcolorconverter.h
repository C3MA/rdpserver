#ifndef RGB2QCOLORCONVERTER_H
#define RGB2QCOLORCONVERTER_H

#include <QObject>

class RGB2QColorConverter : public QObject
{
    Q_OBJECT
public:
    explicit RGB2QColorConverter(QObject *parent = 0);

public slots:
    void newFrame(u_int8_t* ,int , int);

};

#endif // RGB2QCOLORCONVERTER_H