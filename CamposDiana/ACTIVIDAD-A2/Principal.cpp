// Autores: Campos Diana,
// Fecha de creación: 2022-05-24
// Fecha de ultima actualizacion: 2022-05-26


#include<iostream>
#include<stdlib.h>
using namespace std;
#include "CD_libreria.h"






int main()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************Grupo Programacion**************"<<endl<<endl;
			cout<<"1.- Programas de Campos Diana \n";
			cout<<"2.- Programas de Garcia Britney.\n";
			cout<<"3.- Programas de Moreira Javier. \n"; 
			cout<<"4.- Programas de Ruano Estefania. \n";
			cout<<"5.- Programas de .\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					CD_menu();			
					break;
				case 2:
					//TRABAJO DEL INTEGRANTE 2.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO Garcia Britney";
			//		MD_menu();
					break;
				case 3:
					//TRABAJO DEL INTEGRANTE 3.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO Moreira Javier";
					break;
				case 4:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO Ruano Estefania";
					break;
				case 5:
					//TRABAJO DEL INTEGRANTE 4.
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DEL INTEGRANTE 5 ";
					break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   cout<<flag;
	}while(op!=0);
	
//	system("tree");

	return(0);

}
