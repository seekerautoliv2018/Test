#include <stdio.h>
#include <math.h>

int estePrim(int );

int testStatic();

int main()
{
    int numar;
    //printf("Maaaan, I've tried so hard to say hello to you!");
    /*
    printf("Dati un numar: ");
    scanf("%d", &numar); 
    if(estePrim(numar)) printf("\nNumarul %d este prim!", numar);
        else printf("\nNumarul %d NU este prim!",numar);
    
    */

    int x;
    x = testStatic();
    printf("\nLa primul apel x=%d",x);
    x = testStatic();
    printf("\nLa al doilea apel x=%d",x);

    return 0;
}

int estePrim(int nr)
{
    for(int i = 2; i <= sqrt(nr); i++)
        {
            if(nr%i==0) return 0;
        }
        
    return 1;
}

int testStatic()
{
    int static b = 0;
    b++;
    return b;
}