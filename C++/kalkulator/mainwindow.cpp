#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QMessageBox>
#include <QScrollBar>
#define PI 3.14159265

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QString obecna_liczba="0";
QString pierwsza_liczba="";
QString obecny_operator="";
QString wynik="";
QString liczba_na_wyswietlaczu="";
QString pamiec_M="";
bool po_rownasie = false;
QString historia="";



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_jeden_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="1";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_dwa_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="2";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}



void MainWindow::on_trzy_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="3";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_cztery_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="4";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_piec_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="5";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_szesc_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="6";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_siedem_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="7";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_osiem_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="8";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_dziewiec_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="";
    }
    obecna_liczba+="9";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_zero_clicked()
{
    if(po_rownasie){
        obecna_liczba = "";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(obecna_liczba=='0'){
        obecna_liczba="0";
    }
    else{
    obecna_liczba+="0";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
    }
}

void MainWindow::on_dodac_clicked()
{
    if (obecna_liczba == "" && obecny_operator != "") {
        obecny_operator = "+";
        liczba_na_wyswietlaczu =obecny_operator;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
        return;
    }
    pierwsza_liczba=obecna_liczba;
    obecna_liczba="";
    obecny_operator="+";
    po_rownasie = false;
    liczba_na_wyswietlaczu=obecna_liczba+obecny_operator;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_odjac_clicked()
{
    if (obecna_liczba == "" && obecny_operator != "") {
        obecny_operator = "-";
        liczba_na_wyswietlaczu =obecny_operator;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
        return;
    }
    pierwsza_liczba=obecna_liczba;
    obecna_liczba="";
    obecny_operator="-";
    po_rownasie = false;
    liczba_na_wyswietlaczu=obecna_liczba+obecny_operator;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_razy_clicked()
{
    if (obecna_liczba == "" && obecny_operator != "") {
        obecny_operator = "*";
        liczba_na_wyswietlaczu =obecny_operator;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
        return;
    }
    pierwsza_liczba=obecna_liczba;
    obecna_liczba="";
    obecny_operator="*";
    po_rownasie = false;
    liczba_na_wyswietlaczu=obecna_liczba+obecny_operator;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_podzielic_clicked()
{
    if (obecna_liczba == "" && obecny_operator != "") {
        obecny_operator = "/";
        liczba_na_wyswietlaczu = pierwsza_liczba + obecny_operator;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
        return;
    }
    pierwsza_liczba=obecna_liczba;
    obecna_liczba="";
    obecny_operator="/";
    po_rownasie = false;
    liczba_na_wyswietlaczu=obecna_liczba+obecny_operator;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_procent_clicked()
{
    double num1 = pierwsza_liczba.toDouble();
    double num2 = obecna_liczba.toDouble();

    if (obecny_operator == "+") {
        wynik = QString::number(num1 + ((num1*0.01)*num2));
         historia+=pierwsza_liczba+obecny_operator+obecna_liczba+"%" + "="+wynik+"\n";
    }
    else if (obecny_operator == "-") {
        wynik = QString::number(num1 - ((num1*0.01)*num2));
        historia+=pierwsza_liczba+obecny_operator+obecna_liczba+"%" + "="+wynik+"\n";
    }
    else if (obecny_operator == "*") {
        wynik = QString::number(num1 * (num2*0.01));
        historia+=pierwsza_liczba+obecny_operator+obecna_liczba+"%" + "="+wynik+"\n";
    }
    else if (obecny_operator == "/") {
        if (num2 != 0) {
            wynik = QString::number(num1 / (num2*0.01));
            historia+=pierwsza_liczba+obecny_operator+obecna_liczba+"%" + "="+wynik+"\n";
        } else {
            QMessageBox::critical(this, "Błąd", "Nie można dzielić przez zero!");
            wynik="0";
            historia+=pierwsza_liczba+obecny_operator+obecna_liczba+"%" + "="+wynik+"\n";
        }
    }
    else {
        wynik = QString::number(num2*0.01);
            historia+=obecna_liczba+"%" + "="+wynik+"\n";
    }

    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    pierwsza_liczba=wynik;
    obecna_liczba=wynik;
    liczba_na_wyswietlaczu=obecna_liczba;
    obecny_operator = "";
    po_rownasie = true;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_rownasie_clicked()
{
    if(!(obecny_operator=="")){
    double num1 = pierwsza_liczba.toDouble();
    double num2 = obecna_liczba.toDouble();

    if (obecny_operator == "+") {
        wynik = QString::number(num1 + num2);
    }
    else if (obecny_operator == "-") {
        wynik = QString::number(num1 - num2);
    }
    else if (obecny_operator == "*") {
        wynik = QString::number(num1 * num2);
    }
    else if (obecny_operator == "/") {
        if (num2 != 0) {
            wynik = QString::number(num1 / num2);
        } else {
            QMessageBox::critical(this, "Błąd", "Nie można dzielić przez zero!");
            wynik="0";
        }
    }

    historia+=pierwsza_liczba+obecny_operator+obecna_liczba + "="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    liczba_na_wyswietlaczu=wynik;
    obecna_liczba=wynik;
    pierwsza_liczba=wynik;
    po_rownasie = true;
    obecny_operator="";

    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
    }

}
void MainWindow::on_clear_element_clicked()
{
    obecna_liczba="0";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_clear_clicked()
{
    obecna_liczba="0";
    pierwsza_liczba="0";
    wynik="0";
    obecny_operator="";
    po_rownasie = false;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_backspace_clicked()
{
    if(obecna_liczba!="0"){
        obecna_liczba.chop(1);
    }
    if (obecna_liczba==""){
        obecna_liczba="0";
    }
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_kwadrat_clicked()
{
    wynik=QString::number(obecna_liczba.toDouble()*obecna_liczba.toDouble());
    historia+=obecna_liczba+"²"+"="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_pierwiastek_clicked()
{
    if(obecna_liczba.toDouble()>=0){
    wynik=QString::number(sqrt(obecna_liczba.toDouble()));
    }
    else{
        QMessageBox::critical(this, "Błąd", "Nie można pierwiastkować przez liczby ujemne!");
        wynik="0";
    }
    historia+="√"+obecna_liczba+ "="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    liczba_na_wyswietlaczu=obecna_liczba;
    po_rownasie = true;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

void MainWindow::on_alt_clicked()
{
    if(obecna_liczba.startsWith("-")){
        obecna_liczba.remove(0, 1);
        liczba_na_wyswietlaczu=obecna_liczba;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
    }
    else if (obecna_liczba=="0"){
        return;
    }
    else{
        obecna_liczba.prepend("-");
        liczba_na_wyswietlaczu=obecna_liczba;
        ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
    }
}


void MainWindow::on_jeden_przez_x_clicked()
{
    if(obecna_liczba.toDouble()!=0){
        wynik=QString::number(1/obecna_liczba.toDouble());
    }
    else {
        QMessageBox::critical(this, "Błąd", "Nie można dzielić przez zero!");
        wynik="0";
    }
    historia+="1/"+obecna_liczba + "="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_kropka_clicked()
{
    if(po_rownasie){
        obecna_liczba = "0";
        pierwsza_liczba = "";
        obecny_operator = "";
        wynik = "";
        po_rownasie = false;
    }

    if(!(obecna_liczba.contains("."))){
    obecna_liczba+=".";
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);}
}


void MainWindow::on_MC_clicked()
{
    pamiec_M="";
}


void MainWindow::on_MR_clicked()
{
    if(pamiec_M!=""){
    obecna_liczba=pamiec_M;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
    }
}


void MainWindow::on_MS_clicked()
{
    pamiec_M=obecna_liczba;
}


void MainWindow::on_M_plus_clicked()
{
    pamiec_M=QString::number(pamiec_M.toDouble()+obecna_liczba.toDouble());
}


void MainWindow::on_M_minus_clicked()
{
    pamiec_M=QString::number(pamiec_M.toDouble()-obecna_liczba.toDouble());
}

// funkcje trygonometryczne

void MainWindow::on_sinus_clicked()
{
    wynik=QString::number(sin(obecna_liczba.toDouble()*PI/180));
    historia+="sin "+ obecna_liczba+"°"+"="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_cosinus_clicked()
{
    wynik=QString::number(cos(obecna_liczba.toDouble()*PI/180));
    historia+="cos "+ obecna_liczba+"°"+"="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_tangens_clicked()
{
    wynik=QString::number(tan(obecna_liczba.toDouble()*PI/180));
    historia+="tg "+ obecna_liczba+"°"+"="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}


void MainWindow::on_cotangens_clicked()
{
    wynik=QString::number(1.0/tan(obecna_liczba.toDouble()*PI/180));
    historia+="ctg "+ obecna_liczba+"°"+"="+wynik+"\n";
    ui->historia->setPlainText(historia);
    QScrollBar *scrollBar = ui->historia->verticalScrollBar();
    scrollBar->setValue(scrollBar->maximum());
    obecna_liczba=wynik;
    po_rownasie = true;
    liczba_na_wyswietlaczu=obecna_liczba;
    ui->wyswietlacz->setText(liczba_na_wyswietlaczu);
}

