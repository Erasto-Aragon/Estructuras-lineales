#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct lista
   {
   int dato;
   struct lista *sig;
   }*entero;
     
   void crear(struct  lista **);
   void insertar (struct  lista **,int);
   void eliminar(struct  lista **,int);
   void recorrer(struct  lista **);
   int buscar (struct lista **);
   
   int main ()
   {
   	   system("cls");
   	   system("CLOR 3f");
   	   int dato;
   	   crear(&entero);
   	   cout<<"OPERACIONES CON LA LISTA ENLAZADA \n\n";
   	   cout<<"PARA  FINALIZAR LA INSERCION INGRESE EL  CERO \n\n";
   	   cout<<"ingrese un numero:";
   	   cin>>dato;
   	   while (dato !=0)
   	   {
   	   	insertar(& entero, dato);
   	   	cout<<"ingrese un numero:";
   	   	cin>>dato;
   	   }
   	   	cout<<"\n \n ELEMENTOS DE LA LISTA \n\n";
   	   	recorrer(&entero );
   	   	cout<<"\n\n ingrese el numero  a eliminar:";
		cin>>dato;
		eliminar(&entero, dato);
		recorrer(&entero );
		cout<<"\n\n ingrese el numero a buscar ";
		cin>>dato;
		 int buscar (struct lista **entero , int dato)
          cout<<"\n el numero"<<datc<<"	fue encontrado\n";
		  else
		     cout<<" EN EL NUMERO NO EXISTE"<<endl;
			 getchar();
			 return 0;
}
// funciones de listas simplementes enlazadas
  void crear (structlista ** entero)
{
	*entero=NULL;
}
void insertar(struct lista  ** entero,int dato)
{
     strct listas * auxiliar* puntero,* anterior;
    auxiliar=new lista;
    if(!auxiliar)
{
cout<<"error: mempria insuficiente"<<endl;
exit(1);
}
auxiliar->dato=dato;
anterior=NULL;
puntero=*entero;
while((puntero!=NULL) && (PUNTERO->dato<dato))
{
anterior= pumtero;
puntero=puntero ->sig;
}
if(anterioir==NULL)
{
auxiliar->sig=*entero;
*entero=auxiliar;
}
 else
{
anterior->sig=  auxiliar ;
auxiliar->sig= puntero;
  }
}

void eliminar (structlista**entero,int dato)
{
	struct lista *puntero,*anterior;
	puntero=*entero;
	anterior=NULL;
	while((puntero != NULL) && (PUNTERO->dato< dato))
	
{
   anterior= puntero;
   puntero= puntero->sig;
}
if(puntero->dato!= dato)

cout<<"EL NUMERO NO EXISTE"<<endl;
else
{
if(anterior== NULL)  //1er lista
    *entero= (*entero)->sig;
 else
     anterior->sig = puntero-> sig;
     delete puntero;
 }
}

void recorrer(struct lista **entero)
{
	struct recorrer(struct listas ** entero)
	puntero*entero ;
	while (puntero != NULL)
	{
	cout<<puntero ->dact<< "  ";
	puntero = puntero -> sig;
}
}
  
  int buscar ( struct lista **entero,int dato)
  {
   struct lista *puntero;
   puntero = *entero;
   while((puntero !=NULL) &&  ( PUNTERO ->dato <  dato)) puntero= puntero ->sig;
   if(puntero ->dato ==dato)
    
    return 1;
    else
    return 0;
}
   
  
     
   
