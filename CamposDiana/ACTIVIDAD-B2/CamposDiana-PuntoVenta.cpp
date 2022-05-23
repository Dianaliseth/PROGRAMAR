#include<iostream>                           
using namespace std;
int main ()
{
        float x,c=0,a=0,n,vb,viva,vdes,vf;
        cout<< "Ingrese n:";
        cin>>n;
        do{
                cout<< "Ingrese x:";
                cin>>x;
                                                        c=c+1;
        a=a+x;
        }
        while (c<n);                                         vb=a;
             viva=vb*0.12;
             vdes=vb*0.10;
             vf=vb+viva-vdes;
             cout<< "Valor final a pagar es:";

             cout<<vf<<endl;
}

