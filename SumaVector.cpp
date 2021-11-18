#include <iostream>
using namespace std;

int sumavector(int a[], int n){
    if(n==1){
        return a[1];
    }
    else{
    return a[n]+sumavector(a, n-1);
    }
}
 
int main(){
    int n;
    cout<<"Ingrese la cantidad de elmentos del vector: ";cin>>n;
    int a[n];
    for(int i=1;i<n+1;i++){
        cout<<"Ingrese el valor: ";
        cin>>a[i];
    }
    
    cout<<endl<<"La suma del vector es: "<<sumavector(a, n);
    return 0;
}