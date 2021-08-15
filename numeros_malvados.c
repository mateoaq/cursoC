/*
Ingresar números hasta leer un cero. Se pide informar la cantidad de números malvados leídos.

Un número malvado es todo número natural cuya expresión en base 2 (binaria) contiene un número par de unos. Por ejemplo 12 , y 15 son números malvados ya que 12=11002 y 15=11112.
*/



#include <stdio.h>



int main()

{

   

  /*Numeros malvados*/

   

   

  int numero, contador_unos=0, original;

   

  printf("Ingrese un numero: \n");

  scanf("%d", &numero);

  while(numero > 0){

     

  original = numero;

   

  while(numero >= 1){

    int cociente = numero / 2;

    int resto = numero % 2;

    if(resto > 0){

      contador_unos += 1;

    }

    numero = cociente;

  }

   

  if(contador_unos % 2 == 0){

    printf("El numero %d es malvado \n", original);



  }else{

    printf("El numero %d NO es malvado \n", original);

  }

     

  printf("Ingrese un numero: \n");

  scanf("%d", &numero);

     

  }

   





  return 0;

}
