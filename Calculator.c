#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub, div, mul;
    char operator;
    
    printf("Enter Operator: ");
    scanf("%c", &operator);
    
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    
    switch (operator)
    {
        case '+':
            sum = a + b;
            printf("sum = %d", sum);
            break;
        case '-':
            sub = a - b;
            printf("sub = %d", sub);
            break;
        case '/':
            div = a / b;
            printf("div = %d", div);
            break;
        case '*':
            mul = a * b;
            printf("mul = %d", mul);
            break;
        default:
            printf("Enter a valid operator");
    }
    
    system("pause");
    return 0;
}
