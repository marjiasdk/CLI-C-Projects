/*

The following program is a simple CLI calculator that takes in a simple expression from the user.
The expression must be in the form of: a operator b, where a and b are integers and operator is one of the following: +, -, *, /.
The program then prints the result of the expression to the user.

The program does not support expressions with more than one operator, for example: 1 + 2 + 3, neither does it support error handling for invalid input.
This is a simple CLI C project that I made to practice using the switch statement.
As I progress in my C learning journey, I will come back to this project and add more features to it.

*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    char op;

    printf("Enter a simple expression: ");
    scanf("%d %c %d", &a, &op, &b);

    // switch is used instead of if-else because it is more readable
    switch (op) {
        case '+':
            printf("Here is your answer: %d\n", a + b);
            break;
        case '-':
            printf("Here is your answer: %d\n", a - b);
            break;
        case '*':
            printf("Here is your answer: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Here is your answer: %d\n", a / b);
            } else {
                printf("You can't divide by zero!\n");
            }
            break;
        default:
            printf("You entered an operator that isn't supported, please try again!\n");
            break;
    }

    return 0;
}
