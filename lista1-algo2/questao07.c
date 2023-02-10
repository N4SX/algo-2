#include <stdio.h>

void main(){

 int n1, n2, soma_par, prod_impar, maior, menor, i;

 soma_par = 0;

 prod_impar = 1;

 scanf ("%d %d", &n1, &n2);

 if(n1 >= n2){

     maior = n1;

     menor = n2;

   }

 else{

     maior = n2;

     menor = n1;

   }

 for (i = menor; i < maior + 1; i++){

     if (i % 2 == 0){

  soma_par += i;

}

     else{

  prod_impar *= i;

}

   }

 printf("%d \n%d\n", soma_par, prod_impar);

}