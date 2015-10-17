#include "acekit.h"

#include <QWebFrame>

AceKit::AceKit(QWidget *parent)
  : QWidget(parent)
{
  Q_INIT_RESOURCE(acekit);
  wv = new QWebView(parent);
  frame = wv->page()->mainFrame();
  auto u = QUrl("qrc:/static/ace.html");
  wv->load(u);

  wv->page()->settings()->setAttribute(QWebSettings::DeveloperExtrasEnabled, true);
  attachObject();
  connect( frame, &QWebFrame::javaScriptWindowObjectCleared, this, &AceKit::attachObject);
}


QString AceKit::getContent() {
    QVariant ret = frame->evaluateJavaScript ("window.qacekit_editor.getValue();");
    return ret.toString();
}

/*
editor.getSession().on('change', function(e) {
    // e.type, etc
});
*/

void AceKit::setContent(QString content) {
   qDebug() << "AceKit::setContent()" << content;
   transfer_content = content;
   frame->evaluateJavaScript ("window.qacekit_editor.setValue(AceKit.transfer_content);");
}

void AceKit::attachObject()
{
  qDebug() << "AceKit::attachObject";
  frame->addToJavaScriptWindowObject( QString("AceKit"), this );
}

void AceKit::setTheme(QString theme)
{
    transfer_content = theme;
    frame->evaluateJavaScript ("window.qacekit_editor.setTheme(AceKit.transfer_content);");
}

void AceKit::setMode(QString mode)
{
    transfer_content = mode;
    frame->evaluateJavaScript("window.qacekit_editor.getSession().setMode(AceKit.transfer_content);");
}
