#include <iostream>
#include <string.h>

using namespace std;
int maximo(int,int);
int main(){

    int N1,N2,N3,A;
    cout <<"Introduce el primer valor: ";
    cin >> N1;
    cout <<"Introduce el segundo valor: ";
    cin >> N2;
    cout <<"Introduce el tercer valor: ";
    cin >> N3;
    cout <<endl;

    int Max1 = maximo(N1,N2);
    int Max2 = maximo(Max1,N3);
    cout <<"El numero mayor es: "<< Max2 << std::endl;



return 1;
}

int maximo(int N1,int N2){
    int A;
    if(N1>N2){A=N1;}
    else{A=N2;}

return A;
}
