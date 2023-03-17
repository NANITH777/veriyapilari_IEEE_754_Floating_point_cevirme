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


MyStruct division2(double number2)
{
    MyStruct NumDecomposition;
    NumDecomposition.tamsayi =0;
    NumDecomposition.sayi2=0.0;
    while( NumDecomposition.tamsayi <= number2)
    {
        NumDecomposition.tamsayi++;
    }
    NumDecomposition.tamsayi -=1;
    NumDecomposition.sayi2= number2 - NumDecomposition.tamsayi;
    return NumDecomposition;
}

int highOfarray1(int number1)
{
    int count=0;
    while( number1 >=1) {
        number1/=2;
        count++;
    }
    return count;
}

int highOfarray2(int number2)
{
    int count=0;
    while( number2 >=1) {
        number2/=2;
        count++;
    }
    return count;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
