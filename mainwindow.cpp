#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <stack.h>
#include <heap.h>
#include <QRegExp>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

Stack S;
void MainWindow::on_addButton_clicked()
{
    int c = S.Cnt();
    if(c >= 10)
        QMessageBox::warning(this, "Предупреждение", "Стек полон");
    else
    {
        QString item = ui->lineEdit->text();
        QRegExp e("\\s+$");
        if(item == "" || e.exactMatch(item))
            QMessageBox::warning(this, "Предупреждение", "Вы ничего не ввели");
        else
        {
            S.Push(item);
            ui->statusBar->showMessage("Элемент добавлен");
        }
    }
}
void MainWindow::on_delButton_clicked()
{
    int c = S.Cnt();
    if(c == 0)
        QMessageBox::warning(this, "Предупреждение", "Стек пуст");
    else
    {
        S.Pop();
        ui->statusBar->showMessage("Элемент был удален");
    }
}
void MainWindow::on_showButton_clicked()
{
    ui->labelShowStack->setText(S.Show());
    ui->statusBar->showMessage("Вывод стека");
}

Heap H;
void MainWindow::on_addButton_2_clicked()
{
    int c = H.Top();
    if(c >= 10)
        QMessageBox::warning(this, "Предупреждение", "Очередь полна");
    else
    {
        QString item = ui->lineEdit_2->text();
        QRegExp e("\\s+$");
        if(item == "" || e.exactMatch(item))
            QMessageBox::warning(this, "Предупреждение", "Вы ничего не ввели");
        else
        {
            H.Push(item);
            ui->statusBar->showMessage("Элемент добавлен");
        }
    }
}
void MainWindow::on_delButton_2_clicked()
{
    int t = H.Top();
    int b = H.Beg();
    if(t == b)
        QMessageBox::warning(this, "Предупреждение", "Очередь пуста");
    else
    {
        H.Pop();
        ui->statusBar->showMessage("Элемент был удален");
    }
}
void MainWindow::on_showButton_2_clicked()
{
    ui->labelShowHeap->setText(H.Show());
    ui->statusBar->showMessage("Вывод очереди");
}
