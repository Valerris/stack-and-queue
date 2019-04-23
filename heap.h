#ifndef HEAP_H
#define HEAP_H
#include <QString>
class Heap
{
private:
    QString mash[10];
    int beg;
    int top;
public:
    Heap();
    void Push(QString item);
    void Pop();
    QString Show();
    int Top();
    int Beg();
};
#endif // HEAP_H
