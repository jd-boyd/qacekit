#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->webView->page()->settings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inspect()
{
qDebug() << "INSP";
ui->webView->pageAction(QWebPage::InspectElement)->trigger();
}
