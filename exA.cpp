#include <iostream>
using namespace std;

void ordenar(int a, int b){
    if(a > b){
        swap(a,b);
    }
    cout << "Menor valor: " << a << endl
         << "Maior valor: " << b << endl;

}

void separar(double *c){
    double x;
    x = *c - ((int) *c);
    *c = (int) *c;

    cout << "Parte inteira: " << *c << endl
         << "Parte fracionaria: " << x << endl;
}

int main(){
    int a, b;
    double c;

    cin >> a >> b;
    cin >> c;

    ordenar(a,b);
    cout << endl;
    separar(&c);
}