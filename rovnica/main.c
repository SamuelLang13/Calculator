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
                if (fabs(sum-result)<=1000*DBL_EPSILON*sum*sum )
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%g != %g\n",sum,result);
                }
                break;
            }

            case '-': {
                sum = num1 - num2;
                if (fabs(sum-result)<=1000*DBL_EPSILON*sum*sum )
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%g != %g\n",sum,result);
                }
                break;
            }

            case '*': {
                sum = num1 * num2;
                if (fabs(sum-result)<=1000*DBL_EPSILON*sum*sum )
                {
                    printf("Rovnice je spravne.\n");
                }
                else
                {
                    printf("%g != %g\n",sum,result);
                }
                break;

            }
            case '/': {
                if (num2 == 0)
                {

                    printf("Nespravny vstup.\n");

                } else {

                    sum=num1/num2;
                    if((int)result==result)
                    {
                        int sum1=sum;
                        if (fabs(sum1-result)<=1000*DBL_EPSILON*sum1*sum1 )
                        {
                        
                            printf("Rovnice je spravne.\n");
                        }
                        else
                        {
                            printf("%d != %g\n",sum1,result);
                        }
                    }
                    else
                    {
                        
                        if (fabs(sum-result)<=1000*DBL_EPSILON*sum*sum )
                        {
                        
                            printf("Rovnice je spravne.\n");
                        }
                        else
                        {
                            printf("%g != %g\n",sum,result);
                        }
                        
                    }

                    

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

