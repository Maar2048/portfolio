#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
// Punkt 1 i 2
    string imie;

    cout << "Cześć, jak masz na imię? " << endl;
    cin >> imie;
    cout << "Miło mi cię poznać " + imie + "!" << endl;

// Punkt 3 i 4
    int Ax, Ay, Bx, By, Cx, Cy;

    cout << "Podaj współprzędne x,y (oddzielone spacją lub enterem) dla punktu A:" << endl;
    cin >> Ax >> Ay;

    cout << "Podaj współprzędne x,y (oddzielone spacją lub enterem) dla punktu B:" << endl;
    cin >> Bx >> By;

    cout << "Podaj współprzędne x,y (oddzielone spacją lub enterem) dla punktu C:" << endl;
    cin >> Cx >> Cy;

    // Zmienne zawierające długość odcinków
    double AB = sqrt(pow(Bx-Ax, 2)+pow(By-Ay, 2));
    double BC = sqrt(pow(Cx-Bx, 2)+pow(Cy-By, 2));
    double CA = sqrt(pow(Ax-Cx, 2)+pow(Ay-Cy, 2));


    if(AB+BC>CA && AB+CA>BC && CA+BC>AB){
        cout << endl << "Z tych punktów można zbudować trójkąt" << endl;
        cout << "--------------------------------------------------" << endl;
        double obwod = AB+BC+CA;
        double p = obwod/2.0;
        double pole = sqrt(p*(p-AB)*(p-BC)*(p-CA));

        double Sx = (Ax+Bx+Cx)/3.0;
        double Sy = (Ay+By+Cy)/3.0;

        double R = (AB*BC*CA)/(4*pole);

        cout << "Jego obwód: " << obwod << endl;
        cout << "Jego pole: " << pole << endl;
        cout << "Współrzędne środka ciężkości tego trójkąta: " << Sx << ", " << Sy << endl;
        cout << "Promień okręgu opisanego na tym trójkącie: " << R << endl;
    }
    else {
        cout << endl << "Niestety z tych punktów nie można zbudować trójkąta";
    }


    return 0;
}
