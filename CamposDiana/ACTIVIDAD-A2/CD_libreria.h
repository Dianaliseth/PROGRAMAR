// Funciones implementadas por Campos Diana
//
//
//
//
//
//
//


int CD_SumaN()
{
	int c=0,n;
	float x,a=0;
	cout<<"\n SUMA DE VARIOS NÚMERO "<<endl;
	cout<<" Autora: Campos Diana" <<endl;
	cout<<"fecha última actualización: 2022-05-26" <<endl;
	cout<<"=========++++++++++++++++++++++===================" <<endl;

	cout<<"Ingrese n: "; cin>>n;
	do{
	cout<<"Ingrese x: "; cin>>x;
		c=c+1;
		a=a+x;
	}while(c<n);
	cout<<"la suma de "<<n<< "Números fue : "<<a<<endl;
  return 0;

}









int CD_Compara()
{
	float cd_x,cd_y;
        cout<< "Ingrese los valores cd_x cd_y separados de un espacio:";

        cin>>cd_x>>cd_y;

        if (cd_x==cd_y){
              cout<< "El valor de cd_x:"<<cd_x<<"Es igual a cd_y:"<<cd_y<<endl;
        }
        else{

        if (cd_x<cd_y){
                cout<< "El valor de cd_x:"<<cd_x<<"Es menor a cd_y:"<<cd_y<<endl;
}
        else{
     cout<< "El valor de cd_y:"<<cd_y<<"Es menor a cd_x:"<<cd_x<<endl;
        }
        }

cout<<endl<<"//================================================"<<endl;                         cout<<"//==> Nombre del programa: Compara 2 Números"<<endl;
cout<<"//==> Archivo : CamposDiana-Compara.cpp"<<endl;                                       
cout<<"//==>Autora: Campos Diana"<<endl;      
cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;                                            cout<<"//==>Fecha última actualización: 19-05-2022"<<endl;                                      cout<<"//================================================="<<endl;   

        return 0;
}








int CD_PuntoVenta()
{
	 float cd_x,cd_c=0,cd_a=0,cd_n,cd_vb,cd_viva,cd_vdes,cd_vf;
         cout<< "Ingrese cd_n:";
          cin>>cd_n;
      do{
      cout<< "Ingrese cd:x:";
      cin>>cd_x;
      cd_c=cd_c+1;
      cd_a=cd_a+cd_x;
       }
      while(cd_c<cd_n);                         
              cd_vb=cd_a;
              cd_viva=cd_vb*0.12;
              cd_vdes=cd_vb*0.10;
              cd_vf=cd_vb+cd_viva-cd_vdes;
cout<<endl<<"//================================================"<<endl;                     
cout<<"//==> Nombre del programa: Punto de Venta"<<endl;                                        cout<<"//==> Archivo : CamposDiana-PuntoVenta.cpp"<<endl;                                       cout<<"//==>Autora: Campos Diana"<<endl;        cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;                                            cout<<"//==>Fecha última actualización: 19-05-2022"<<endl;                                      cout<<"//================================================="<<endl;
             cout<< "Valor final a pagar es:";

              cout<<cd_vf<<endl;
	      return 0;
}





int CD_LaEdad()
{
	int cd_aa,cd_ma,cd_da,cd_an,cd_mn,cd_dn,cd_a,cd_m,cd_d;
        cout<< "Ingrese la edad actual (cd_aaaa cd_mn cd_dd):";
        cin>>cd_aa>>cd_ma>>cd_da;
        cout<< "Ingrese la fecha de nacimiento (cd_aaa cd_mn cd_dd):";
        cin>>cd_an>>cd_mn>>cd_dn;
        if (cd_da>=cd_dn){
            cd_d=cd_da-cd_dn;
          }
          else{
           cd_dn=cd_dn+30;
           cd_ma=cd_ma-1;
          }
          if (cd_ma>=cd_mn){
           cd_m=cd_ma-cd_mn;
          }
          else{
                cd_mn=cd_mn+12;
                cd_aa=cd_aa-1;
                cd_m=cd_ma-cd_mn;
        }
        cd_a=cd_aa-cd_an;                                                                       cout<<endl<<"//================================================"<<endl;                         cout<<"//==> Nombre del programa: Calcula Edad"<<endl;                                          cout<<"//==> Archivo : CamposDiana-LaEdad.cpp"<<endl;
cout<<"//==>Autora: Campos Diana"<<endl;
cout<<"//==>Fecha de elaboración: 01-05 2022"<<endl;                                            cout<<"//==>Fecha última actualización: 19-05-2022"<<endl;                                      cout<<"//================================================="<<endl;
cout<< "La persona tiene"<<cd_a<<"años"<<cd_m<<"meses y"<<cd_d<<"dias";                                                                                   return 0;
}








int CD_CuentaMoneda()
{
	int cd_n,cd_c=0,cd_c1=0,cd_c2=0;
        float cd_x,cd_a=0,cd_a1=0,cd_a2=0;
        cout<< "Cantidad de monedas a ingresar:";
        cin>>cd_n;
        do{
        cout<< "Ingrese el valor de la moneda (0.10.0.25):";
          cin>>cd_x;
          cd_c=cd_c+1;
          cd_a=cd_a+cd_x;
        if (cd_x==0.10){
          cd_c1=cd_c1+1;
          cd_a2=cd_a2+cd_x;
          }
        }
       while (cd_c<cd_n);
cout<<endl<<"//================================================"<<endl;                 
cout<<"//==> Nombre del programa: Maquina Cuenta Moneda"<<endl;                                
cout<<"//==> Archivo : CamposDiana-CuentaMoneda.cpp"<<endl;                                            
cout<<"//==>Autora: Campos Diana"<<endl;
cout<<"//==>Fecha de elaboración: 01-05 2022"<<endl;
cout<<"//==>Fecha última actualización: 19-05-2022"<<endl;
cout<<"//================================================="<<endl;
cout<< "El resultado fue:"<<endl;
cout<< "Cantidad de monedas ingresadas:"<<cd_c<<endl;
cout<< "Cantidad total en dinero contado:"<<cd_a<<endl;
cout<< "Cantidad de monedas de 0.10c ingresadas:"<<cd_c1<<endl;
cout<< "Cantidad total en dinero de moneda 0.10cc ingresada:"<<cd_a1<<endl;
cout<< "Cantidad de monedas de 0.25cc ingresadas:"<<cd_c2<<endl;
cout<< "Cantidad total en dinero de monedas ingresadas de 0.25cc:"<<cd_a2<<endl;

      return 0;
}











int CD_menu()
{
	int op,flag;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE CAMPOS DIANA**************"<<endl<<endl;
			cout<<"1.- SUMA VARIOS NUMEROS \n";
			cout<<"2.- COMPARA 2 NUMEROS.\n";
			cout<<"3.- PUNTO DE VENTA \n"; 
			cout<<"4.- CALCULA EDAD. \n";
			cout<<"5.- MAQUINA CUENTA MONEDA.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					 CD_SumaN();			
					break;
				case 2:
				       system("clear");
			                CD_Compara();
					break;
				case 3:
					system("clear");
					CD_PuntoVenta();
					break;
				case 4:
			                system("clear");
					CD_LaEdad();
					break;
				case 5:
					system("clear");
					CD_CuentaMoneda();
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
	

	return(0);

}
