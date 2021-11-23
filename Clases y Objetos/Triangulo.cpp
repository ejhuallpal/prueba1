#include <iostream>
using namespace std;

class Triangulo{
    private:
        float base, altura;
    public:
        Triangulo();
        Triangulo(float,float);
        float CalcularArea();
        void ImprimirDatos();
        void ActualizarDatos(float,float);
};

Triangulo :: Triangulo(){
    base = 0;
    altura = 0;
}

Triangulo :: Triangulo(float b, float h){
    base = b;
    altura = h;
}

float Triangulo :: CalcularArea(){
    int A;
    A = (base * altura)/2;
    return(A);
}

void Triangulo :: ImprimirDatos(){
    cout<<"La base es "<<base<<" y su altura es "<<altura<<endl;
}

void Triangulo :: ActualizarDatos(float b,float h){
    base = b;
    altura = h;
}

int main(){
    Triangulo objT1;//declaracion del objeto por omision
    float bas, alt;
    objT1.ImprimirDatos();
    bas = 10;
    alt = 5;
    objT1.ActualizarDatos(bas,alt);
    objT1.ImprimirDatos();
    cout<<"El area del triangulo es: "<<objT1.CalcularArea()<<endl;;
    cout<<endl;
    Triangulo objT2(20,10);//<----se crea el constructor
    objT2.ImprimirDatos();
    cout<<"El area del triangulo es: "<<objT2.CalcularArea()<<endl;
    return 0;
}