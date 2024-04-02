#include <stdio.h>

int main()
{
    // 
    float nota1, nota2, media;
    
    
    printf("digite a primeira nota do aluno:");
    scanf ("%f", &nota1);
    
    if (nota1 > 10) {
        printf ("Nota invalida!\n");
        return main();
    }
    
    printf("digite a segunda nota do aluno:");
    scanf ("%f", &nota2);
    
     if (nota2 > 10) {
        printf ("Nota invalida!\n");
        return main ();
    }
    
     media = (nota1 + nota2) / 2;
     
     printf ("media do aluno é: %.1f\n", media);
    
    
    
     if (media >= 6.0 && media <=10) {
        printf("Aprovado");
    }
     
    else if (media <=5.9 && media > 0 ) {
        printf("reprovado!");
    }
    
    else {
       printf ("burro pa bosta");
    }
  
    
    
}
