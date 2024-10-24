#include <iostream>
using namespace std;

int main(){
    int liczba;
    cout << "Podaj liczbe calkowita:\n";
    cin>> liczba;

    if (liczba %2==0){
        cout <<"Liczba " <<liczba << " jest parzysta." <<endl;
    }
    else if (liczba==0){
        cout <<"Podana liczba to zero." <<endl;
    }
    else{
        cout <<"Liczba " <<liczba <<" jest nieparzysta." <<endl;
    }

cout <<"Dziekuje.";
return 0;
}
