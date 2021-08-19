#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h> 
using namespace std;

struct  Nodo{
    int dato;
    Nodo *siguiente;
};

Nodo *lista = NULL;
void menu();
void agregar1(Nodo *&,int);
void sacar2(Nodo *&,int &);

int main(int argc, char** argv) {
    menu();
    getch();
 return 0;
}

void menu(){
    int opc,cont=0,cont2=0,dato;
    do{
        cout<<"----- Menu de Opciones -------  "<<endl;
        cout<<"1.Agregar caja"<<endl;
        cout<<"2.Sacar cajas"<<endl;
        cout<<"3.Cuantas cajas hay"<<endl;
        cout<<"4.Cuantas cajas salieron"<<endl;
        cout<<"5.Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opc;
        
    switch(opc){
        case 1: 
			cout<<"Ingrese codigo de la caja: "; 
			cin>>dato;
			if (dato>99999999)
			{
			cout<<"Ingrese codio de solo 8 digitos"<<endl;
			}else if(dato<9999999){
			cout<<"Ingrese codio de solo 8 digitos"<<endl;	
					
			}else{
			agregar1(lista,dato);
			cont++;
			}
            cout<<"\n";
            system("pause");
        break;
        case 2: 
            cout<<"Sacando cajas: ";
            while(lista!=NULL){
            sacar2(lista,dato);
            cont2++;
            if(lista!=NULL){
            cout<<dato<<" , ";
            }else{
            cout<<dato<<" . ";
            }
            }
            cout<<"\n";
            system("pause");
        break;
        case 3: 
            cout<<cont-cont2<<endl;
            cout<<"\n";
            system("pause");
        break;
        case 4: 
            cout<<cont2<<endl;
            cout<<"\n";
            system("pause");
        break;
   }
   system("cls");
   }while(opc != 5);
}

void agregar1(Nodo *&lista,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente = lista;
    lista=nuevo_nodo;
    cout<<"\nElmento "<<n<<" Agregado correctamente"<<endl;
}

void sacar2(Nodo *&lista,int &n){
    Nodo *aux=lista;
    n=aux->dato;
    lista=aux->siguiente;
    delete aux;
}
