#include <iostream>
using namespace std;

void hanoi(int n, string o, string a, string d){
    if(n == 1){
        cout<<"Mover disco del "<<o<<" al "<<d<<endl;
    }
    else{
        hanoi(n-1,o,d,a);
        cout<<"Mover disco del "<<o<<" al "<<d<<endl;
        hanoi(n-1,a,o,d);
    }
}
int main(){
    string o="o", a="a", d="d";
    int n;
    cout<<"Ingrese el numero de discos: ";cin>>n;

    hanoi(n,o,a,d);
    return 0;
}