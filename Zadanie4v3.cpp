#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    double liczba1, liczba2, liczba3;

    cout << "Podaj pierwsza liczbe." <<endl;
    cin >> liczba1;
    cout <<"Podaj druga liczbe." <<endl;
    cin >> liczba2;
    cout <<"Podaj trzecia liczbe." <<endl;
    cin >> liczba3;

    double najwieksza = max({liczba1, liczba2, liczba3});

    cout <<"Najwieksza liczba z podanych to: " <<najwieksza << endl;

return 0;
}

