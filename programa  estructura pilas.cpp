#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

struct pila                        // nombre de la estructura
    {  
     int numero;                   // miembro de tipo entero 
     struct pila *sig;             // apuntador miembro del tipo struc pila
     } *inicio=NULL,*final=NULL;   // apuntadores instancias de la estructura 
     
     void insertar();
     void extraer ();
     void visualizar();
     
    main()
    {
     int opc=0;
	 do	
	 {
	 system("color 9f");
	 system("CLS");      
	 cout<<"     \nMANEJO DE UNA ESTRUCTURA TIPO PILA ";
	 cout<<"\n\n\n";
	 cout<<"1. Insertar\n";
	 cout<<"2. Visualizar\n";
	 cout<<"3.Extraer\n";
	 cout<<"4.salir \n\n";
	 cout<<"Digite la opcion: ";
	 cin>>opc;
	 switch (opc)
	    {
	 	case 1:
	 		insertar();
	 		break;
	     case 2:
	    	visualizar();
	    	break;
	     case 3:
	    	extraer();
	    	break;
	     case 4:
		    exit(0);
	       }	
	     getch();
	     } while (opc!=4);
          }
	
	      void insertar ()
          {
           cout<< "insertar";
          }
          
        void visualizar ()
        {
        	cout<<" visualiza";
		}
	
		void estraer ()
		{   
		cout<<"elimina";
        }

	  
