#include <iostream>
using namespace std;

class Auto{
    public:
        string Matricula;
        string Marca;
        string Tipo;
        string Color;
    public:
        void Leerdatos();
        void Imprimirdatos();
        void Avanzar();
        void Frenar();
        void Estacionar();
};

void Auto:: Leerdatos(){
    cout<<"Ingrese la matricula: ";cin>>Matricula;
    cout<<"Ingrese la marca: ";cin>>Marca;
    cout<<"Ingrese el tipo: ";cin>>Tipo;
    cout<<"Ingrese el color: ";cin>>Color;
}
void Auto::Imprimirdatos(){
    cout<<"El auto "<<Matricula<<" de la marca "<<Marca<<" es una "
    <<Tipo<<" de color "<<Color<<endl;
}
void Auto :: Avanzar(){
    cout<<"El auto esta avanzando."<<endl;
}
void Auto :: Frenar(){
    cout<<"El auto esta frenando."<<endl;
}
void Auto :: Estacionar(){
    cout<<"El auto esta estacionado."<<endl;
}

int main(){

    Auto obj1, obj2, obj3;

    obj1.SetMatricula("xyz");
    obj1.SetMarca("Ferrari");
    obj1.SetTipo("camioneta");
    obj1.SetColor("Rojo");

    obj1.Imprimirdatos();
    obj1.Avanzar();
    obj1.Frenar();
    obj1.Estacionar();
    return 0;
}