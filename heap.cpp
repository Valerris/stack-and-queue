#include "heap.h"
#include <QString>
Heap::Heap()
{
    beg = 0;
    top = 0;
}
void Heap::Push(QString item)
{
    mash[top++] = item;
}
void Heap::Pop()
{
    for(int i = 0; i < top - 1 && i < 10; i++)
        mash[i] = mash[i + 1];
    beg = 0; top--;
}
QString Heap::Show()
{
    QString arrStr;
    for(int i = 0; i < top; i++)
    {
         arrStr += mash[i] + " ";
    }
    return arrStr;
}
int Heap::Top()
{
    return top;
}
int Heap::Beg()
{
    return beg;
}
