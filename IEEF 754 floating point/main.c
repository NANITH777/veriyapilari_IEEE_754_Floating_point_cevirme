#include <stdio.h>
#include <stdlib.h>

typedef struct NumDecomposition
{
    int tamsayi;
    float sayi1;
    double sayi2;
}MyStruct;

MyStruct division1(float number1)
{
    MyStruct NumDecomposition;
    NumDecomposition.tamsayi =0;
    NumDecomposition.sayi1=0.0;
    while( NumDecomposition.tamsayi <= number1)
    {
        NumDecomposition.tamsayi++;
    }
    NumDecomposition.tamsayi -=1;
    NumDecomposition.sayi1= number1 - NumDecomposition.tamsayi;
    return NumDecomposition;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
