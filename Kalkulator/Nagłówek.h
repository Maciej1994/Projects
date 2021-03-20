


class Kalkulator
{
private:
	double pierwsza_liczba;
	double druga_liczba;

public:
	
	void menu();
	void petla_glowna();
	char wybierz_opcje();
	void dzialania();
	double podaj_liczbe(int index);
	double* dwie_liczby();
	double dodawanie();
	double odejmowanie();
	double mnozenie();
	double dzielenie();
	long long silnia();
	double potega();
	double pierwiastek();
	void zakoncz();
	void wypisz_wynik(double wynik);
	void kontynuuj();
};
