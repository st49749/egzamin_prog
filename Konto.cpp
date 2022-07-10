#include "Konto.h"

Konto::Konto(string im, string naz, string nrRa)
{
	this->imie = naz;
	this->nazwisko = naz;
	this->nr_rachunku = nrRa;
	this->stan_konta = 0;
}

Konto::Konto(string nrRa)
{
	this->nr_rachunku = nrRa;
	this->imie = "";
	this->nazwisko = "";
	this->stan_konta = 0;
}

Konto::Konto(const Konto& t)
{
	this->nr_rachunku = t.nr_rachunku;
	this->imie = t.imie;
	this->nazwisko = t.nazwisko;
	this->stan_konta = t.stan_konta;
}

void Konto::set_stan_konta(int st)
{
	this->stan_konta = st;
}

double Konto::get_stan_konta()
{
	return this->stan_konta;
}

void Konto::zmienImieNazwisko(string im, string naz)
{
	this->imie = im;
	this->nazwisko = naz;
}

void Konto::naliczOprocentowanie(double procent)
{
	this->stan_konta = this->stan_konta + (this->stan_konta * (procent / 100));
}

Konto::~Konto()
{
	cout << "Wywolanie destruktora";
}

Konto Konto::operator++(int)
{
	this->naliczOprocentowanie(1);
	return *this;
}

ostream& operator<<(ostream& wy, Konto& o)
{
	cout << "Konto osoby: " << o.imie << " " << o.nazwisko << " | nr rachu: " << o.nr_rachunku << " | stan konta: " << o.get_stan_konta() << endl;
	return wy;
}
