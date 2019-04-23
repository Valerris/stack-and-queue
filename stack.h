#ifndef STACK_H
#define STACK_H
#include <QString>
class Stack
{
private:
    QString mas[10];
    int top;
public:
    Stack();
    void Push(QString item);
    void Pop();
    QString Show();
    int Cnt();
};
#endif // STACK_H
