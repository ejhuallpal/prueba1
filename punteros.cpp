#include<iostream>
using namespace std;
int inc(int a){
    int x;
    a = a + 1;
    x = a;
    return x;

};

int main(){
    int a, b;
    a = 1;
    b = inc(a);
    cout<<"b: "<<b<<endl;
    cout<<"a: "<<a<<endl;
    return 0;
}