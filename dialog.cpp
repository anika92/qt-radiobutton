#include "dialog.h"
#include "ui_dialog.h"
#include <QtCore>
#include <QtGui>
#include <QRadioButton>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->radioButton1->isChecked())
    {
        QMessageBox::information(this,"89.1",ui->radioButton1->text());
    }
    else
    {
         QMessageBox::information(this,"98.2",ui->radioButton2->text());
    }
}
