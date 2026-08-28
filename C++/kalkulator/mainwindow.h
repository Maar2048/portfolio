#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:

    void on_jeden_clicked();

    void on_dwa_clicked();

    void on_trzy_clicked();

    void on_cztery_clicked();

    void on_piec_clicked();

    void on_szesc_clicked();

    void on_siedem_clicked();

    void on_osiem_clicked();

    void on_dziewiec_clicked();

    void on_zero_clicked();

    void on_dodac_clicked();

    void on_rownasie_clicked();

    void on_odjac_clicked();

    void on_razy_clicked();

    void on_podzielic_clicked();

    void on_clear_element_clicked();

    void on_clear_clicked();

    void on_reszta_clicked();

    void on_backspace_clicked();

    void on_procent_clicked();

    void on_kwadrat_clicked();

    void on_pierwiastek_clicked();

    void on_alt_clicked();

    void on_jeden_przez_x_clicked();

    void on_kropka_clicked();

    void on_MC_clicked();

    void on_MR_clicked();

    void on_MS_clicked();

    void on_M_plus_clicked();

    void on_M_minus_clicked();

    void on_sinus_clicked();

    void on_cosinus_clicked();

    void on_tangens_clicked();

    void on_cotangens_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
