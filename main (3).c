#include <stdio.h>
main()
{

  
    char c1;
    int a, b;
    printf("Introduce el valor del primer numero: ");
    scanf("%i", &a);
    printf("Introduce el valor del segundo numero: ");
    scanf("%i", &b);

    printf("\n La suma es: %i", suma(a, b));
    printf("\n La resta es: %i", resta(a, b));
    printf("\n El producto es: %i", producto(a, b));
    printf("\n La division es: %i", division(a, b));


   

}



suma(int a, int b)
{
    return(a + b);
}

resta(int a, int b)
{
    return(a - b);
}

producto(int a, int b)
{
    return(a * b);
}

division(int a, int b)
{
    return(a / b);
}