//=======Nombre del programa:Compara dos números
//======Archivo:CamposDiana-COMPARA.cpp         //=====Autor:Campos Diana
//====Fecha de elaboración:01-05-2022
//===Fecha de última actualización:19-05-2022
#include<iostream>
using namespace std;
int main ()
{
        float cd_x,cd_y;
        cout<< "Ingrese cd_x:";
        cin>>cd_x;
        cout<< "Ingrese cd_y:";
        cin>>cd_y;

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
        return 0;
}


