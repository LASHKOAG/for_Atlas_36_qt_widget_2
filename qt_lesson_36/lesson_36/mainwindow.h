#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow   
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void on_btnOn();
    void on_btnOff();
    void on_chkBlinkBlueClicked();

private:
    Ui::MainWindow *ui;
    bool isCheckBoxBlinkBlue{false};
};

#endif // MAINWINDOW_H
