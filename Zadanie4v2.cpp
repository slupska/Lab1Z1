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

    
    if (liczba1==liczba2 && liczba1==liczba3){
        cout <<"Podałeś rowne liczby." <<endl;
    }
    else if (liczba1==liczba2 && liczba1>liczba3){
        cout <<"Najwieksza liczba powtorzyla sie dwukrotnie i jest to liczba: " <<liczba1<<endl;
    }
    else if (liczba2==liczba3 && liczba2>liczba1){
        cout <<"Najwieksza liczba powtorzyla sie dwukrotnie i jest to liczba: " <<liczba2<<endl;
    }
    else if (liczba1==liczba3 && liczba1>liczba2){
        cout <<"Najwieksza liczba powtorzyla sie dwukrotnie i jest to liczba: " <<liczba1<<endl;
    }
    if (liczba1>liczba2 && liczba1>liczba3){
        cout <<"Najwieksza liczba to: " <<liczba1 <<endl;
    }
    else if (liczba2>liczba1 && liczba2>liczba3){
        cout <<"Najwieksza liczba to: " <<liczba2 <<endl;
    }
    else  
    {
        cout <<"Najwieksza liczba to: " <<liczba3 <<endl;
    }



return 0;
}