#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

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
    double xa = ui->lineEdit->text().toDouble();
    double ya = ui->lineEdit_2->text().toDouble();
    double xb = ui->lineEdit_3->text().toDouble();
    double yb = ui->lineEdit_4->text().toDouble();
    double r = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    ui->label_8->setText(QString::number(r,'g',15));
}
