//=======Nombre del programa:Cuenta de monedas  ///======Archivo:CamposDiana-CuentaMoneda.cpp   ///=====Autor:Campos Diana
//====Fecha de elaboración:01-05-2022           //===Fecha de última actualización:19-05-2022
#include<iostream>
using namespace std;                            int main ()                                     {    
	int cd_n,cd_c=0,cd_c1=0,cd_c2=0;

        float cd_x,cd_a=0,cd_a1=0,cd_a2=0;              cout<< "Cantidad de monedas a ingresar:";
        cin>>cd_n;

        do{                                                     cout<< "Ingrese el valor de la moneda (0.10.0.25):";                                            cin>>cd_x;
                cd_c=cd_c+1;
                cd_a=cd_a+cd_x;
        if (cd_x==0.10){
                cd_c1=cd_c1+1;                                  cd_a2=cd_a2+cd_x;
        }
        }
        while (cd_c<cd_n);
        cout<< "El resultado fue:"<<endl;
        cout<< "Cantidad de monedas ingresadas:"<<cd_c<<endl;
        cout<< "Cantidad total en dinero contado:"<<cd_a<<endl;
        cout<< "Cantidad de monedas de 0.10c ingresadas:"<<cd_c1<<endl;
        cout<< "Cantidad total en dinero de moneda 0.10cc ingresada:"<<cd_a1<<endl;
        cout<< "Cantidad de monedas de 0.25cc ingresadas:"<<cd_c2<<endl;
        cout<< "Cantidad total en dinero de monedas ingresadas de 0.25cc:"<<cd_a2<<endl;

} 




