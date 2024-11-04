#include "ctrlbar.h"
#include "ui_ctrlbar.h"

CtrlBar::CtrlBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CtrlBar)
{
    ui->setupUi(this);
    ui->play_or_pause_btn->setIcon(QIcon(":/icon/play.png"));

    ui->stop_btn->setIcon(QIcon(":/icon/stop.png"));
}

CtrlBar::~CtrlBar()
{
    delete ui;
}

void CtrlBar::on_play_or_pause_btn_clicked()
{

}
