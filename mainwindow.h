#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnPlusA_clicked();
    void on_btnMinusA_clicked();
    void on_btnPlusB_clicked();
    void on_btnMinusB_clicked();
    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
    int scoreA = 0;
    int scoreB = 0;

    void updateUi();
};

#endif // MAINWINDOW_H
