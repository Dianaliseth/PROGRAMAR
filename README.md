 # Programas en c++ de Campos Diana
 ## Información del autor
  Autora: Diana Liseth Campos Castillo


  Correo: diana.campos.castillo@utelvt.edu.ec


 ## Programas
 ### Compara dos números 
 #### Descripción del problema 
 Este programa en c++ permite comparar dos números y determinar si son igual o cuál es el mayor. 
 #### Funcionalidad

 
 float cd_x, cd_y;
 
 #### Salida

 Si (cd_x==cd_y) son iguales

 Si (cd_x>cd_y) cd_x es el mayor
 

 ### Suma de varios números
 #### Descripción del problema 
 Este programa en c++ permite comparar tres números y ingresar dos números y sumar para ver cuál es el resultado. 
 #### Funcionalidad

 float cd_a, cd_b, cd_c;

 #### Salida

 cd_a, cd_b ingresar

 cd_c=cd_a+cd_b sumar y ver resultado



 ### Calcula la edad
 #### Descripción del problema 
 Este programa en c++ permite ingresar la edad actual e ingresar la fecha de nacimiento y determinar cuanto la persona tiene. 
 #### Funcionalidad
 
 int cd_aa,cd_ma,cd_da,cd_an,cd_mn,cd_dn,cd_a,cd_m,cd_d;
        
 #### Salida

 (cd_aaaa cd_mn cd_dd) Ingrese la edad actual
                   
 (cd_aaa cd_mn cd_dd) Ingrese la fecha de nacimiento
   
 La persona tiene"<<cd_a<<"años"<<cd_m<<"meses y"<<cd_d<<"dias";



 ### Punto de venta
 #### Descripción del problema
 Este programa en c++ permite ingresar cantidad e ingresar valor y determinar cuál es el menor y el valor final a pagar. 
 #### Funcionalidad

 float cd_x,cd_c=0,cd_a=0,cd_n,cd_vb,cd_viva,cd_vdes,cd_vf;
   
 #### Salida
 
  cd_n, cd_x ingresar
    
  Si (cd_c<cd_n) n es el menor 
   
  cd_Vf valor final a pagar es



 ### Cuenta moneda
 #### Descripción del problema 
 Este programa en c++ permite integrar cantidad de monedas e ingresar valor de monedas y determinar si es igual o cuál es el  menor. 
 #### Funcianalidad

 int cd_n,cd_c=0,cd_c1=0,cd_c2=0;

 float cd_x,cd_a=0,cd_a1=0,cd_a2=0;

 #### Salida
  
 cd_n, cd_x ingresar

 Si (cd_x==0.10) son iguales

 Si (cd_c<cd_n) cd_n es el menor


 ## Instalación 
 ### Descargar el repositorio
 1.-clonar el repositorio en la máquina local. 

 git clone https://github.com/Dianaliseth/programar.git

 cd programar

 
 ### Compilar y ejecutar

 g++ COMPARA.cpp -o COMPARA

 ./COMPARA

 
 ### Compilar y ejecutar

 g++ SumaN.cpp -o SumaN
 
 ./SumaN


 ### Compilar y ejecutar

 g++ LaEdad.cpp -o LaEdad

 ./LaEdad

 
 ### Compilar y ejecutar

 g++ PuntoVenta.cpp -o PuntoVenta
 
 ./PuntoVenta


 ### Compilar y ejecutar

 g++ CuentaMoneda.cpp -o CuentaMoneda

 ./CuentaMoneda
