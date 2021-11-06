#include "maincalc.h"
#include "ui_maincalc.h"
#include "string.h"
#include "math.h"
#include <stdlib.h>
#include <string>
#include <iostream>

static QString G = "";
static QString F = "";
static float S = NULL;
static int index = 0;
MainCalc::MainCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainCalc)
{

    ui->setupUi(this);
}

MainCalc::~MainCalc()
{
    delete ui;
}

void MainCalc::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainCalc::on_pushButton_clicked()
{
    G = G+"1";
    F = F+"1";
    ui->label_Btw->setText(F);
    // ui->label->setText(G);
}

void MainCalc::on_pushButton_2_clicked()
{
    G = G+"2";
    F = F+"2";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_3_clicked()
{
    G = G+"3";
    F = F+"3";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_4_clicked()
{
    G = G+"4";
    F = F+"4";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_5_clicked()
{
    G = G+"5";
    F = F+"5";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_6_clicked()
{
    G = G+"6";
    F = F+"6";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_7_clicked()
{
    G = G+"7";
    F = F+"7";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_8_clicked()
{
    G = G+"8";
    F = F+"8";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_9_clicked()
{
    G = G+"9";
    F = F+"9";
    ui->label_Btw->setText(F);
}

void MainCalc::on_pushButton_0_clicked()
{
    G = G+"0";
    F = F+"0";
    ui->label_Btw->setText(F);
}


void MainCalc::on_pushButton_Plus_clicked()
{

    S = S + G.toFloat();
    F = QString::number(S)+"+";
    QString M = QString::number(S);
    ui->label->setText(M);
    ui->label_Btw->setText(F);
    G="";
    index = 1;
}

void MainCalc::on_pushButton_Minus_clicked()
{
    if(S==NULL)
    {
        S=G.toFloat();
    }
    else
    {
    S =S - G.toFloat();
    }
    F = QString::number(S) +"-";
    QString M = QString::number(S);
    ui->label->setText(M);
    ui->label_Btw->setText(F);
    G="";
    index = 2;
}

void MainCalc::on_pushButton_Multiply_clicked()
{
    if (G=="")
    {
        S = S;
    }
    else if (S==0)
    {
        S = G.toFloat();
    }
    else
    {
        S= S * G.toFloat();
    }
    F = QString::number(S) +"*";
    QString M = QString::number(S);
    ui->label->setText(M);
    ui->label_Btw->setText(F);
    G="";
    index = 3;

}

void MainCalc::on_pushButton_Divide_clicked()
{
    if (G=="0")
    {
        S=0;
    }
    else if (G=="")
    {
        S = S;
    }
    else if (S==0)
    {
        S = G.toFloat();
    }
    else
    {
        S= S / G.toFloat();
    }
    F = QString::number(S) +"/";
    QString M = QString::number(S);
    ui->label->setText(M);
    ui->label_Btw->setText(F);
    G="";
    index = 4;
}

void MainCalc::on_pushButton_Equal_clicked()
{
    if (index == 1)
    {
        ::S = S + G.toFloat();
        F="";
        G="";
    }
    else if (index == 2)
    {
        S = S - G.toFloat();
        F="";
        G="";
    }
    else if (index == 0)
    {
        S=G.toFloat();
        F="";
        G="";
    }
    else if (index == 3)
    {
        S=S * G.toFloat();
        F="";
        G="";

    }
    else if (index == 4)
    {
        S=S / G.toFloat();
        F="";
        G="";

    }
    QString Result = QString::number(S);
    ui->label->setText(Result);
    ui->label_Btw->setText("");


}

void MainCalc::on_pushButton_Clear_clicked()
{
    F="";
    G="";
    S=0;
    ui->label->setText("0");
    ui->label_Btw->setText("");

}

void MainCalc::on_pushButton_BackSpace_clicked()
{
    int size = G.size();
    int size1 = F.size();
    QString G1 = G;
    G1.remove(0,size-1);
    QString F1 = F;
    F1.remove(0,size1-1);


    if ((F1!="+")&&(F1!="-")&&(F1!="*")&&(F1!="/"))
    {
        if (!size==0)
            G.remove(size-1,1);
        if (!size1==0)
            F.remove(size1-1,1);
    }
ui->label_Btw->setText(F);
}
