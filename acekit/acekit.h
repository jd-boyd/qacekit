#ifndef ACEKIT_H
#define ACEKIT_H

#include <QWebView>
#include <QWidget>

namespace Ui {
  class AceKit;
}

class AceKit : public QWidget
{
    Q_OBJECT

    Q_PROPERTY(QString transfer_content MEMBER transfer_content);
    QString transfer_content;

    void attachObject();
    QWebView* wv;
    QWebFrame* frame;

public:

    AceKit(QWidget *parent = 0);

    QString getContent();
    void setContent(QString content);
    void setTheme(QString theme);
    void setMode(QString mode);

signals:
    void on_change();
};

#endif
