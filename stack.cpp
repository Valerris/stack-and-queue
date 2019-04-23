#include <stack.h>
#include <QString>
Stack::Stack()
{
    top = 0;
}
void Stack::Push(QString item)
{
    mas[top++] = item;
}
void Stack::Pop()
{
    --top;
}
QString Stack::Show()
{
    QString arrayStr;
    for(int i = 0; i < top; i++)
    {
         arrayStr += mas[i] + " ";
    }
    return arrayStr;
}
int Stack::Cnt()
{
    return top;
}
