#include <stdio.h>
 int main() 
{
    int n; 
    
    printf ("digite sua nota final:");
    scanf ("%i", &n);
    
    if(n >= 86  && n <=100) {
        printf("A\n");
    } 

    else if (n >= 65 && n <= 85) {
       printf ("B\n");
    }

    else if (n >= 36 && n <= 64) {
        printf ("C \n");
    }
      
    else if (n >= 1  && n <= 35) {
        printf("D \n");
    } 
    
    else if (n == 0) {
        printf ("E \n");
    } 
    
    else{
        printf ("nota invalida. \n");
        return main ();
    }   
    
    return 0;
}