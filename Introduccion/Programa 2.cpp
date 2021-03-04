#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int N1,N2;

    cout <<"Introduce el primer valor: ";
    cin >> N1;
    cout <<"Introduce el segundo valor: ";
    cin >> N2;
    cout <<endl;

    if(N1>N2){
    cout <<"El numero " << N1 << " es mayor "<<endl;
    }
    else if(N1<N2){
    cout <<"El numero " << N2 << " es mayor "<<endl;
    }
    else
    cout <<"Error"<<endl;

return 1;
}
