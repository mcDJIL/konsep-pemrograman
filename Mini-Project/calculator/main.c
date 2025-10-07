#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getResult(int firstNumber, int secondNumber, char operator) {
    int res;

    switch (operator)
    {
    case '+':
        res = firstNumber + secondNumber;    
        break;
        
    case '-':
        res = firstNumber - secondNumber;
        break;
        
    case '*':
        res = firstNumber * secondNumber;    
        break;
        
    case '/':
        if (secondNumber == 0) {
            printf("Error: Can't division by zero");
            exit(1);
        }

        res = firstNumber * secondNumber;    
        break;
    
    case '%':
        if (secondNumber == 0) {
            printf("Error: Can't modulo by zero");
        }

        res = firstNumber % secondNumber;
        break;

    default:
        printf("\nInvalid Operator");
        exit(1);
        break;
    }

    return res;
}

int chooseFirstNumber() {
    int firstNumber;

    printf("Enter your first number: ");

    if (scanf("%d", &firstNumber) == 1) {
        return firstNumber;
    } else {
        printf("\nYou should enter number value");
        exit(1);
    }
}

int chooseSecondNumber() {
    int secondNumber;

    printf("Enter your second number: ");

    if (scanf(" %d", &secondNumber) == 1) {
        return secondNumber;
    } else {
        printf("\nYou should enter number value");
        exit(1);
    }
}

char chooseOperator() {
    char operator;

    printf ("Enter the operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    if (operator == '+' || operator == '*' || operator == '-' || operator == '/' || operator == '%') {
        return operator;
    } else {
        printf("\n You can choose one of them (+, -, *, /, %)");
        exit(1);
    }
}

int main()
{
    int firstNumber, secondNumber, result;
    char operator;

    printf("# Simple Calculator #\n\n");

    firstNumber = chooseFirstNumber();
    operator = chooseOperator();
    secondNumber = chooseSecondNumber();

    result = getResult(firstNumber, secondNumber, operator);

    printf("Result: %d %c %d = %d \n", firstNumber, operator, secondNumber, result);

    system("pause");

    return 0;
}
