#include <iostream>
using namespace std;

void maior_valor(int v[], int n){
    int i, maior = v[0], menor = v[0];
    for(i = 1;i < n;i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }
    cout << "O maior valor: " << maior << endl;
    cout << "O menor valor: " << menor << endl;
}

void media(int *v, int n){
    float media = 0;
    for(int i = 0;i < n;i++){
        media += v[i];
    }
    media /= (n-1);
    cout << "A media dos valores: " << media << endl;
}

void valores_positivos(int v[],int n){
    int x = 0;
    for(int i = 0;i < n;i++){
        if(v[i] >= 0){
            x++;
        }
    }
    cout << "Quantidade de valores positivos: " << x << endl;
}

void valores(int n, int *v){
    for(int i = 0;i < n;i++){
        cin >> v[i];
    }
     for(int i = 0;i < n;i++){
        cout << "v[" << i << "] = " << v[i] << endl;
     }
}

int main(){
    int n;
    cin >> n;
    int v[n];
    valores(n, v);
    valores_positivos(v, n);
    media(v, n);
    maior_valor(v, n);
}