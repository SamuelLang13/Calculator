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
    if(scanf("%lf %c %lf = %lf",&num1,&operation,&num2,&sum)==4)
    {
        switch (operation)
        {
            case '+':
            {
                pcsum=num1+num2;
                if(fabs(pcsum-sum)<=1000*DBL_EPSILON)
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%f != %f",pcsum,sum);
                }
                break;
            }

            case '-':
            {
                pcsum=num1-num2;
                if(fabs(pcsum-sum)<=1000*DBL_EPSILON)
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%f != %f",pcsum,sum);
                }
                break;
            }

            case '*':
            {
                pcsum=num1*num2;
                if(fabs(pcsum-sum)<=1000*DBL_EPSILON)
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%f != %f",pcsum,sum);
                }
                break;
            }
            case '/':
            {
                if(num2!=0)
                {
                    pcsum=num1/num2;
                    if(fabs(pcsum-sum)<=1000*DBL_EPSILON)
                    {
                        printf("Rovnice je spravne.\n");
                    }
                    else
                    {
                        printf("%f != %f",pcsum,sum);
                    }
                }
                else
                {
                    printf("Nespravny vstup.\n");
                }

                break;
            }

            default:
            {
                printf("Nespravny vstup.\n");
            }


        }
    }
    else
    {
        printf("Nespravny vstup.\n");
    }

    return 0;
}
