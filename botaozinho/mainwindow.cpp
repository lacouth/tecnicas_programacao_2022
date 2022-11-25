#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_botao_clicked()
{
    QString texto;
    texto = ui->entrada_dados->text();
    ui->saida_dados->setText(texto);
    ui->entrada_dados->clear();
}

