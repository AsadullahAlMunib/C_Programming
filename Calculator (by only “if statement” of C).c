#include <stdio.h>
#include <conio.h>

int main() {
    double num1, num2, ans;
    char calculate;
    printf("This Calculator is Created by Md Asadullah Al Munib\n\n");
    //Input Calculation Decision
    printf("What are you want to do?\n  To Plus, enter: +\n  To Minus, enter: -\n  To Multiply, enter: *\n  To Divide, enter: /\n\nYou'r Decision To:  ");
    scanf("%c", &calculate);

    //Code for Plus
    if(calculate == '+') {
        printf("\n  Enter 1st Number: ");
        scanf("%lf", &num1);
        printf("  Enter 2nd Number: ");
        scanf("%lf", &num2);
        ans = num1 + num2;
        printf("\nYou'r Answer: %.2lf\n\n", ans);
    }

    //Code for Minus
    if(calculate == '-') {
        printf("\n  Enter 1st Number: ");
        scanf("%lf", &num1);
        printf("  Enter 2nd Number: ");
        scanf("%lf", &num2);
        ans = num1 - num2;
        printf("\nYou'r Answer: %.2lf\n\n", ans);
    }

    //Code for Multiply
    if(calculate == '*') {
        printf("\n  Enter 1st Number: ");
        scanf("%lf", &num1);
        printf("  Enter 2nd Number: ");
        scanf("%lf", &num2);
        ans = num1 * num2;
        printf("\nYou'r Answer: %.2lf\n\n", ans);
    }

    //Code for Divide
    if(calculate == '/') {
        printf("\n  Enter 1st Number: ");
        scanf("%lf", &num1);
        printf("  Enter 2nd Number: ");
        scanf("%lf", &num2);
        //Possible Divide
        if(num2 != 0) {
            ans = num1 / num2;
            int answer;
            answer = num1 / num2;
            //Divide With Remainder
            if(num1 != answer * num2) {
                int quotient, remainder;
                quotient = num1 / num2;
                remainder = num1 - quotient * num2;
                printf("\nYou'r Answer: %.2lf\n\    Whether,  Quotient: %d\n        And,  Remainder: %d\n\n", ans, quotient, remainder);
            }
            //Divide Without Remainder
            if(num1 == answer * num2) {
                printf("\nYou'r Answer: %.0lf\n\n", ans);
            }
        }
        //Impossible Divide
        if(num2 == 0) {
            printf("\nYou'r Answer: Infinite\n\n");
        }
    }

    //Code for Miss Character
    if(calculate != '+') {
        if(calculate != '-') {
            if(calculate != '*') {
                if(calculate != '/') {
                    printf("\nYou Entered Miss Character.\n\n");
                }
            }
        }
    }

    //Ending code
    return 0;
}