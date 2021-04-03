#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
  QMessageBox::information(this,"sushmitha 212218203031","this is an information");
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
   reply = QMessageBox::question(this,"sushmitha","do you like coffee",QMessageBox::Yes | QMessageBox::No );
   if (reply == QMessageBox::Yes)
   {
       QMessageBox::information(this,"sushmitha","i like coffee");
   }
   else {
       QMessageBox::information(this,"sushmitha","i don't like coffee");
   }



}

void Dialog::on_pushButton_3_clicked()
{
  QMessageBox::StandardButton reply;
       reply =  QMessageBox::question(this,"custom","this is a custom message",QMessageBox::YesToAll  |QMessageBox::Yes  |QMessageBox::No  |QMessageBox::NoToAll);
       switch (reply) {
       case QMessageBox::Yes:
          qDebug() <<"Message is displayed";
           break;
       case QMessageBox::YesToAll:
           QMessageBox::warning(this,"yes to all","display the message with Yes to all");
           break;
       case QMessageBox::No:
           qDebug() <<"nothing is displayed";
           break;
       default:
           QMessageBox::warning(this,"No to all","display the message with No to all");
           break;

       }
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"warning","this is a warning message");
}
