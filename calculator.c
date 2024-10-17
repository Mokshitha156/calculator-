#include <stdio.h>

int add(int i, int j) {
    return (i + j);
}

int main() {
    int a, b;
    char operation;
    char confirm = 'n';
    do {
        printf("\nChoose an operation (+, -, *, /): ");
        scanf(" %c", &operation);
        printf("Enter first integer: ");
        scanf("%d", &a);
        printf("Enter second integer: ");
        scanf("%d", &b);
        switch (operation) {
            case '+':
                printf("The result of %d + %d is %d\n", a, b, add(a, b));
                break;
          case '*':
    printf("The result of %d * %d is %d\n", a, b, a * b);
    break;
case '/':
    if (b != 0) {
        printf("The result of %d / %d is %.2f\n", a, b, (float)a / b);
    } else {
        printf("Cannot divide by zero.\n");
    }
    break;
case '-':
    printf("The result of %d - %d is %d\n", a, b, a - b);
    break;
 

 

              
            default:
                printf("Invalid operation. Please try again.\n");
        }
        printf("Do you want to perform another operation [y/N]? ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');
    return 0;
}

