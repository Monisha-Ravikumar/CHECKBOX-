#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QCheckBox>
#include<QMessageBox>
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


void MainWindow::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this,"Title","Yes user likes apples.");
}
else
{
        QMessageBox::information(this,"Title","No user do not likes apples.");
}
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        if(ui->checkBox->isChecked()){
            QMessageBox::information(this,"Title","Yes user likes apples.");
    }
    else
    {
            QMessageBox::information(this,"Title","No user do not likes apples.");
    }
    }
}
