#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->pushButton->setText(tr("返回主菜单"));
}

Dialog::~Dialog()
{
    delete ui;
}
