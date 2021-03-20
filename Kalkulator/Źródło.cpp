#include <iostream>
#include <conio.h>
#include <cmath>
#include"Nag³ówek.h"
using namespace std;

void Kalkulator::menu()
{
    cout << " witamy w kalkulatorze !\n"
        " Operacje:\n"
        "1. dodawanie 2. odejmowanie\n"
        "3. mnozenie  4. dzielenie\n"
        "5. silnia    6. potega\n"
        "7. pierwiastek 8.zakoncz\n";
}

void Kalkulator::petla_glowna() 
{
    while (true)
    {
        menu();
        dzialania();
        kontynuuj();
        system("cls");

    }
}

char Kalkulator::wybierz_opcje()
{
    char znak;
    cout << "Jakie dzialanie chcesz wykonac?: " << endl;
    cin >> znak;
    return znak;
}

double Kalkulator::podaj_liczbe(int index)
{
    
    double x;
    if (index == 1 || index == 2 || index == 3 || index == 4) {
        cout << "podaj " << index << " Liczbe" << endl;
    }
    else
        cout << "podaj LICZBE: " << endl;
    while (!(cin >> x)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Blad! Wpisz ponownie: ";
    }
    return x;
}


double *Kalkulator::dwie_liczby()
{
    double liczby[2];
    liczby[0] = podaj_liczbe(1);
    liczby[1] = podaj_liczbe(2);
    return liczby;
}


void Kalkulator::dzialania()
{
    char znak = wybierz_opcje();
    double wynik = 0;
    switch (znak)
    {
    case '1':
    {
        wynik = dodawanie();
        break;
    }
    case '2':
    {
        wynik = odejmowanie();
        break;
    }
    case '3':
    {
        wynik = mnozenie();
        break;
    }
    case '4':
    {
        wynik = dzielenie();
        break;
    }
    case '5':
    {
        wynik = silnia();
        break;
    }
    case '6':
    {
        wynik = potega();
        break;
    }
    case '7':
    {
        wynik = pierwiastek();
        break;
    }
    case '8':
    {
        zakoncz();
        break;
    }
    default:
    {
        cout << " nie ma takiej opcji!" << endl;
        break;
    }

    }
    wypisz_wynik(wynik);
}

double Kalkulator::dodawanie()
{
    double* liczby = dwie_liczby();
    double wynik = liczby[0] + liczby[1];
    return wynik;
}
double Kalkulator::odejmowanie()
{
    double* liczby = dwie_liczby();
    double wynik = liczby[0] - liczby[1];
    return wynik;
}
double Kalkulator::mnozenie()
{
    double* liczby = dwie_liczby();
    double wynik = liczby[0] * liczby[1];
    return wynik;
}
double Kalkulator::dzielenie()
{
    double* liczby = dwie_liczby();
    double wynik = liczby[0] / liczby[1];
    return wynik;
}
long long Kalkulator::silnia()
{
    float liczba = podaj_liczbe(0);
    long long silnia = 1;

    for (int i = (int)liczba; i > 1; i--)
    {
        silnia *= (int)i;
    }
    return silnia;
}

double Kalkulator::potega()
{
    double liczba = podaj_liczbe(0);
    double wynik;
    double potega;

    cout << "Do ktorej potegi podniesc liczbe " << liczba << "? Wpisz wartosc: ";
    while (!(cin >> potega)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "To nie jest liczba. Wpisz ponownie: ";
    }
    wynik = pow(liczba, potega);

    return wynik;
}

double Kalkulator::pierwiastek()
{
    double liczba;
    liczba = podaj_liczbe(0);
    liczba = sqrt(liczba);
    return liczba;
}

void Kalkulator::zakoncz()
{
    cout << "KONIEC" << endl;
    exit(0);
}

void Kalkulator::wypisz_wynik(double wynik)
{
    cout << "wynik to :" << wynik << endl;
}

void Kalkulator::kontynuuj()
{
    cout << "nacisnij enter " << endl;
    _getch();
}