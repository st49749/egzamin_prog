#include <iostream>
using namespace std;

class Konto
{
private:
	string imie;
	string nazwisko;
	string nr_rachunku;
	double stan_konta;
public:
	Konto(string im, string naz, string nrRa);
	Konto(string nrRa);
	Konto(const Konto& t);

	void set_stan_konta(int st);
	double get_stan_konta();

	void zmienImieNazwisko(string im, string naz);
	void naliczOprocentowanie(double procent);

	~Konto();

	friend ostream& operator << (ostream& we, Konto& o);
	Konto operator++(int);
};

