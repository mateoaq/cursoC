/*  Generar los primeros cuatro números abundantes. 

Un número abundante es todo número natural que cumple que, la suma de sus divisores propios es mayor que el propio número. 

Por ejemplo, 12 es abundante ya que sus divisores son 1, 2, 3, 4 y 6 y se cumple que 1+2+3+4+6=16, que es mayor que el propio 12.

 */
 
 #include <stdio.h>



int main()

{

   

  /*Numeros abundantes*/

   

  int contador = 0, x, numero_ab=1, suma_divisores = 0;

   

  while (contador < 4){

    for(x=1;x<numero_ab; x++){

      if(numero_ab % x == 0){

        suma_divisores += x;

      }

       

    }

    if(suma_divisores > numero_ab){

      printf("Numero abundante %d \n", numero_ab);

      contador++;

    }

     

    numero_ab++;

    suma_divisores = 0;

  }

   



  return 0;

}
