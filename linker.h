#ifndef LINKER_H
#define LINKER_H


#include <QObject>

class Linker : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int height READ getMyHeight WRITE setMyHeight NOTIFY heightChanged)
public:
    explicit Linker(QObject *parent = 0);



    int getMyHeight() const;
    void setMyHeight(int value);

signals:

    void heightChanged(int h);
public slots:


private:

    int myHeight;
};

#endif // LINKER_H
