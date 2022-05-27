//=======Nombre de programa:Punto de venta
///======Archivo:CamposDiana-PuntoVenta.cpp    
///=====Autor:Campos Diana
//====Fecha de elaboración:01-05-2022           
//===Fecha de última actualización:19-05-2022
#include<iostream>
using namespace std;
int main ()
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
              cout<< "Valor final a pagar es:";

              cout<<cd_vf<<endl;
}

