#include <stdio.h>

int main (void){

/*
  Variables: Declare and initialize data used by the program.
*/
int numero = 3; // integer
char lettera = 'a'; // character
int Numero = 5; // Case sensitive
int *puntatore; // pointer to an address
puntatore = &numero; // assign address of numero to pointer
int *puntatore2 = &numero; // declaration and initialization

int vettore[5]; // array
int matrice[5][3]; // two-dimensional array

scanf("%d", &numero); // input requires an address
printf("Numero: %d\n", numero); // output
printf("Conta fino a: %d", *puntatore); // dereference pointer

/*
  Condition: Control program flow based on logical expressions.
*/

printf("\n");
/*
  IF: Execute code only if the condition evaluates to true.
*/
if (numero == 3){
printf("Numero = %d\n", numero);
}else{
printf("Numero non esiste\n");
}

/*
  Iteration: Repeat instructions while a condition holds.
*/

printf("\n");
/*
  WHILE: Execute repeatedly while the condition remains true.
*/
int x = 0;
while(x < numero){
  printf("%d ", x);
  x++;
}

printf("\n");
/*
  DO-WHILE: Execute at least once, then repeat if condition is true.
*/
int y = 0;
do{
 printf("%d ", y);
 y++;
} while(y < numero);

printf("\n");
/*
  UNTIL: Repeat instructions until a condition becomes true.
  (Not native in C, implemented using negated while condition)
*/

int y = 0;
while(!(y >= numero)){
  printf("%d ", y);
  y++;
}

printf("\n");
/*
  FOR: Compact loop structure with initialization, condition, and update.
*/
for(int i = 0; i < numero; i++){
  printf("%d ", i);
}

/*
  Return: Indicate successful program termination to the system.
*/
return 0;
}
