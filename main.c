#include <stdio.h>

int main() {
    double num1;
    double num2;
    int sum;
    char operation;
    printf("Zadejte vzorec:\n");
    scanf(" %lf  %c  %lf =",&num1,&operation,&num2);
    switch (operation) {
        case '+':
            sum=num1+num2;
            printf("%f\n",sum);
            break;
        case '-':
            sum=num1-num2;
            printf("%f\n",sum);
            break;
        case '*':
            sum=num1*num2;
            printf("%f\n",sum);
            break;
        case '/':
            sum=num1/num2;
            printf("%f\n",sum);
            break;
        default:
            printf("Nespravny vstup.");
            break;
    }
    return 0;
}
