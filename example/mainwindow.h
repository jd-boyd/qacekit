#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

public slots:

  void file_open();
  void file_new();
  void file_close();
  void file_save();
  void file_quit();

  void editor_change();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
