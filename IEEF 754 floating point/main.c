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

    float number1=2012.76;
    double number2=2012.70;
    char veritipi;

    printf(" Enter data type (1=float) or (2=double): \n");
    scanf("%c", &veritipi);

    if(veritipi=='1')
    {
        printf("Enter a number\n");
        scanf("%f", &number1);

        printf("\n");

        MyStruct NumDecomposition;

        if( number1 < 0)
        {
            NumDecomposition = division1(-1 * number1);
        }
        else
        {
            NumDecomposition= division1(number1);
        }

        int tab1[32];
        int high=highOfarray1(NumDecomposition.tamsayi);
        int* tab2=(int*)malloc(high*sizeof(int));

        int count=0;
        for(int i=(high-1);i>=0; i-- ) {
            tab2[i]=NumDecomposition.tamsayi%2;
            NumDecomposition.tamsayi/=2;
            count++;
        }

        if(number1 < 0) {
            tab1[0]=1;
        }
        else {
            tab1[0]=0;
        }

        count = ((count-1) + 127 );

        for(int i=8; i>=1; i--) {
            tab1[i]=count%2;
            count/=2;
        }

        for(int i=1; i< high; i++) {
            tab1[i+ 8]= tab2[i];
        }

        for(int i=(high+8); i <32; i++) {
            NumDecomposition=division1(NumDecomposition.sayi1*2);
            tab1[i]=NumDecomposition.tamsayi;
            NumDecomposition.tamsayi=0;
        }


        for(int i=0; i <32; i++) {
            printf("%d ", tab1[i]);
        }
        printf("\n");

        free(tab2);

    }
    return 0;
}
