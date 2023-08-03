#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnOn, SIGNAL(clicked()), this, SLOT(on_btnOn()));
    connect(ui->btnOff, SIGNAL(clicked()), this, SLOT(on_btnOff()));
    connect(ui->chkBlinkBlue, SIGNAL(clicked()), this, SLOT(on_chkBlinkBlueClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnOn()
{
    qDebug() << "btnOn Clicked";
    system("./py_led_on.py");
}

void MainWindow::on_btnOff()
{
    qDebug() << "btnOff Clicked";
    system("./py_led_off.py");
}

void MainWindow::on_chkBlinkBlueClicked()
{
    qDebug() << "---------------------------------------------";
    qDebug() << "Checkbox blink blue clicked";
    if (ui->chkBlinkBlue->isChecked())
    {
        qDebug() << "State: True";
//        isCheckBoxBlinkBlue = true;
        isCheckBoxBlinkBlue = !isCheckBoxBlinkBlue;
    }
    if (!ui->chkBlinkBlue->isChecked())
    {
        qDebug() << "State: False";
        isCheckBoxBlinkBlue = !isCheckBoxBlinkBlue;
    }
    qDebug() << "---------------------------------------------";
}
