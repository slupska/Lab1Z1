#include <iostream>
using namespace std;

int main(){
    double liczba1, liczba2, liczba3;

    cout << "Podaj pierwsza liczbe." <<endl;
    cin >> liczba1;
    cout <<"Podaj druga liczbe." <<endl;
    cin >> liczba2;
    cout <<"Podaj trzecia liczbe." <<endl;
    cin >> liczba3;

    double najwieksza = liczba1;

    if (najwieksza<liczba2){
        najwieksza = liczba2;
    }
    
    if (najwieksza<liczba3){
        najwieksza=liczba3;
    }
    
    cout<< "Najwieksza liczba z podanych to: " <<najwieksza <<endl;
return 0;
}