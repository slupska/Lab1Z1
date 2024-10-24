#include <iostream>
using namespace std;

int main (){
    int liczba;
    cout << "Wpisz liczbę całkowitą.\n" ;
    cin >> liczba;

    if (liczba>0){
        cout << liczba <<" jest liczbą dodatnią.\n";
    }
    else if (liczba<0){
        cout << liczba <<" jest liczbą ujemną.\n";
    }
    else {
        cout <<"Wprowadzona liczba to zero.\n";
    }
    return 0;
}
