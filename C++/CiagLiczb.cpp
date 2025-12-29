#include <iostream>
using namespace std;

int main(){
    int liczba=0;
    const int D = 3;

    int max_ujemna=-2147483648;
    double suma_liczb_dwucyfrowych_ujemnych=0;
    double ilosc_liczb_dwucyfrowych_ujemnych=0;
    double srednia_dwucyfrowe_ujemne=0;
    int poprzednia=0;
    int wieksza_od_poprzedniej=0;
    bool start=true;

    do {
        poprzednia = liczba;


        cout << "Podaj liczbę: " << endl;
        cin >> liczba;


        if(liczba<0 && liczba>max_ujemna)
            max_ujemna = liczba;

        if(liczba<-9 && liczba>-100){
            ilosc_liczb_dwucyfrowych_ujemnych++;
            suma_liczb_dwucyfrowych_ujemnych=suma_liczb_dwucyfrowych_ujemnych+liczba;
        }

        if(poprzednia<liczba && start==false)
            wieksza_od_poprzedniej++;

        start=false;

    } while(liczba%2 != 0 || liczba%D != 0 || liczba==0);

    cout << endl << "Warunek spełniony - podano liczbę parzystą podzielną przez stałą D = " << D << endl;
    cout << "-------------------------------------------------------" << endl;

    if(max_ujemna>-2147483648)
        cout << "Największa podana liczba ujemna to: " << max_ujemna << endl;
    else cout << "Nie podano żadnej liczby ujemnej." << endl;

    if(ilosc_liczb_dwucyfrowych_ujemnych>0){
        srednia_dwucyfrowe_ujemne=suma_liczb_dwucyfrowych_ujemnych/ilosc_liczb_dwucyfrowych_ujemnych;
        cout << "Średnia arytmetyczna z liczb dwucyfrowych ujemnych to: " << srednia_dwucyfrowe_ujemne << endl;
    }
    else cout << "Nie podano żadnej liczby dwucyfrowej ujemnej." << endl;

    cout << "Ile razy wczytana liczba, była większa od poprzedniej: " << wieksza_od_poprzedniej << endl;;

    return 0;
}
