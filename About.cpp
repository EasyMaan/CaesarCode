#include "About.h"
#include "ui_About.h"

About::About(QWidget *parent) : QDialog(parent), ui(new Ui::About)
{
    ui->setupUi(this);

    //Указывает, должен ли QLabel автоматически открывать ссылки
    ui->linkLabel->setOpenExternalLinks(true);

    //Укахывает фиксированные размеры окна
    this->setFixedSize(456, 269);

}

About::~About()
{
    delete ui;
}

//Слот обработки клика по кнопке "Закрыть"
void About::on_closeButton_clicked()
{
    this->close();
}
