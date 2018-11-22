#include "mydialog.h"
#include "ui_mydialog.h"
#include <QDialog>
#include <QTextEdit>

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    QTextEdit *dialogBox;
    dialogBox = new QTextEdit;
    dialogBox->setPlainText(tr("Hello World!"));
    ui->setupUi(this);

}

MyDialog::~MyDialog()
{
    delete ui;
}
