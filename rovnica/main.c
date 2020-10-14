#include <stdio.h>
#include <float.h>
#include <math.h>

int main() {

    double num1;
    double num2;
    double result;
    double sum;
    char operation;
    char equalSign;

    printf("Zadejte rovnici:\n");
    if(scanf(" %lf %c %lf %c %lf",&num1,&operation,&num2,&equalSign,&result)!=5)
    {
        printf("Nespravny vstup.\n");
    }
    else if(equalSign !='=')
    {
        printf("Nespravny vstup.\n");
    }
    else {
        switch (operation) {
            case '+': {
                sum = num1 + num2;
                if (fabs(sum-result)<=100*DBL_EPSILON*sum*sum )
                {
                    printf("%g\n", sum);
                }
                break;
            }

            case '-': {
                sum = num1 - num2;
                if (fabs(sum-result)<=100*DBL_EPSILON*sum*sum )
                {
                    printf("%g\n", sum);
                }
                break;
            }

            case '*': {
                sum = num1 * num2;
                if (fabs(sum-result)<=100*DBL_EPSILON*sum*sum )
                {
                    printf("%g\n", sum);
                }
                break;

            }
            case '/': {
                if (num2 != 0)
                {
                    sum=num1/num2;
                    if (fabs(sum-result)<=100*DBL_EPSILON*sum*sum )
                    {
                        printf("%g\n", sum);
                    }
                    break;

                } else {
                    printf("Nespravny vstup.\n");
                }

                break;
            }

            default: {
                printf("Nespravny vstup.\n");
            }

        }
    }
    return 0;
}

