//=======Nombre del programa:La edad de una persona
///======Archivo:CamposDiana-LaEdad.cpp
///=====Autor:Campos Diana                  
//====Fecha de elaboración:01-05-2022          
//===Fecha de última actualización:19-05-2022
#include<iostream>
using namespace std;                           
 int main ()
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
        cd_a=cd_aa-cd_an;
        cout<< "La persona tiene"<<cd_a<<"años"<<cd_m<<"meses y"<<cd_d<<"dias";

        return 0;
}


