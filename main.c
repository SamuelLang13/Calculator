#include <stdio.h>
#include <float.h>
#include <math.h>

int main() {

    double num1;
    double num2;
    double sum;
    double pcsum;
    char operation;

    printf("Zadejte rovnici:\n");
    if(scanf(" %lf %c %lf = %lf",&num1,&operation,&num2,&operation)!=4)
    {
        printf("Nespravny vstup.\n");
    }
    else
    {
        switch (operation)
        {
            case '+':
                pcsum=num1+num2;


        }
    }

    return 0;
}
