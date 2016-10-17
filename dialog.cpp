#include "dialog.h"
#include "ui_dialog.h"

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

void Dialog::decorate()
{
    int i =2;
    while (i > 1)
    {
        ui->yaw_checkBox->setChecked(false);
        ui->roll_checkBox->setChecked(false);
        ui->pitch_checkBox->setChecked(false);
        ui->depth_checkBox->setChecked(false);
        sl(1, 0, 0, 1);
        temperature(i);
        horizon(i);
        motor(i+1,i,i*2,i/2,500-i*8,i,i,i);
        depth(100-i);
    }
}

void Dialog::depth(int16_t depth)
{
    QString formatedString = QString("%1").arg(depth);
    ui->depth_label->setText(formatedString);
    ui->DepthSlider->setValue(depth);
}

void Dialog::horizon(int16_t horizon)
{
    QString formatedString = QString("%1").arg(horizon);
    ui->horizon_label->setText(formatedString);
}

void Dialog::temperature(int16_t temperature)
{
    QString formatedString = QString("%1").arg(temperature);
    ui->temperature_label->setText(formatedString);
}

void Dialog::sl(bool yaw_sl, bool roll_sl, bool pitch_sl, bool depth_sl)
{
    if (yaw_sl == 1)
            ui->yaw_checkBox->setChecked(true);
    if (roll_sl == 1)
            ui->roll_checkBox->setChecked(true);
    if (pitch_sl == 1)
            ui->pitch_checkBox->setChecked(true);
    if (depth_sl == 1)
            ui->depth_checkBox->setChecked(true);
}

void Dialog::motor(int16_t VF, int16_t VR, int16_t VB, int16_t VL,int16_t HRF, int16_t HRB, int16_t HLB, int16_t HLF)
{
    QString formatedVF = QString("%1").arg(VF);
    QString formatedVR = QString("%1").arg(VR);
    QString formatedVB = QString("%1").arg(VB);
    QString formatedVL = QString("%1").arg(VL);
    QString formatedHRF = QString("%1").arg(HRF);
    QString formatedHRB = QString("%1").arg(HRB);
    QString formatedHLB = QString("%1").arg(HLB);
    QString formatedHLF = QString("%1").arg(HLF);
    ui->VF->setText(formatedVF);
    ui->VR->setText(formatedVR);
    ui->VB->setText(formatedVB);
    ui->VL->setText(formatedVL);
    ui->VF_VR->setText(formatedHRF);
    ui->VR_VB->setText(formatedHRB);
    ui->VB_VL->setText(formatedHLB);
    ui->VL_VF->setText(formatedHLF);
}