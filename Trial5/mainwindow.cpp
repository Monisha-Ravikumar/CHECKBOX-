#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"BRIYANI is checked"<<endl;
    }
    else
    {
        stream<<"BRIYANI is not checked"<<endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"FRIED RICE is checked"<<endl;
    }
    else
    {
        stream<<"FRIED RICE is not checked"<<endl;
    }

}

void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"NOODLES is checked"<<endl;
    }
    else
    {
        stream<<"NOODLES is not checked"<<endl;
    }
}
