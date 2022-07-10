#include <iostream>
#include "Konto.h"
using namespace std;

int main()
{
    Konto k1("Krzysztof", "Moryl", "rach123");
    Konto k2("rach456");
    Konto k3(k2);

    k3.zmienImieNazwisko("Anna", "Nowak");
    k3.set_stan_konta(100);
    cout << k3.get_stan_konta() << endl;
    k3.naliczOprocentowanie(10);
    cout << k3.get_stan_konta() << endl;

    cout << k3;
    k3++;
    cout << k3;
}
