#include<iostream>
#include<string.h>

using namespace std;
int factorial(int a);
int main(){
    int N1;
    cout <<"Introduzca el valor del numero: ";
    cin >> N1;
    int fact = factorial(N1);
    cout <<endl;

    cout <<"El " << N1 << " es: " << fact << std::endl;

return 1;
}

int factorial(int a){
    int i;
    int resultado = 1;
    for(i=1;i<=a;i++){
       resultado *= i;
    }
    return resultado;
}
