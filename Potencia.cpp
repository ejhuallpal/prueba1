#include <iostream>
using namespace std;

int potencia(int base, int exp){   
    if(exp == 0){
        return 1;
    }
    if(exp != 0){
        return base* potencia( base, exp-1);
    }
};

int main(){
    int base, exp;
    cout<<"Ingrese la base: ";cin>>base;
    cout<<"Ingrese el exponente: ";cin>>exp;
    cout<<endl<<"La potencia es: "<<potencia(base, exp);
    return 0;
}