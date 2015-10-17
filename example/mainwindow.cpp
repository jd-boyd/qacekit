
#include <QFileDialog>
#include "mainwindow.h"
#include "acekit.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  connect(ui->webView, &AceKit::on_change, this, &MainWindow::editor_change);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::file_open() {
  QString fileName = QFileDialog::getOpenFileName(
      this, tr("Open File"), "/", tr("Image Files (*.png *.jpg *.bmp)"));
}

void MainWindow::file_new() {
  qDebug() << "file_new()";
  ui->webView->setContent("New File;");
}

void MainWindow::file_close() {
  qDebug() << "file_close()";
  ui->webView->setTheme("ace/theme/monokai");
  ui->webView->setMode("ace/mode/javascript");
}

void MainWindow::file_save() {
  qDebug() << "file_save()";
  qDebug() << "Content:" << ui->webView->getContent();
}

void MainWindow::file_quit() {
  qDebug() << "file_quit()";
  QApplication::quit();
}

void MainWindow::editor_change() { qDebug() << "Editor change"; }
