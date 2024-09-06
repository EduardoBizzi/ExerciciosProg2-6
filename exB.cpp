#include <iostream>
using namespace std;
#define N 5
/*bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}*/
//FUNÇÃO ERRADA.

bool has_zero(int a[N]){
    int i;
    for (i = 0; i < N; i++){
        if (a[i] == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int a[N], i;

    for(i = 0; i < N;i++){
        cin >> a[i];
    }
    if(has_zero(a)){
        cout << "Pelo menos um dos valores e 0" << endl;
    }
    else{
        cout << "Nenhum dos valores e 0" << endl;
    }
}