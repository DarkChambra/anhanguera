/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int numero; 
    
    printf ("digite um número inteiro: ");
    scanf ("%d", &numero);
    
    if (numero % 2 == 0){
        printf( " %d, é um número par! \n", numero);
    } 
    else {
        printf( " %d, é um numero ímpar! \n", numero);
    }
    
 
    return 0;
}
