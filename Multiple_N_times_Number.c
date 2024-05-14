#include <stdio.h>

int main() {
    int n, i;
    double fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    //shows error if the users enters a negative integer!
    if(n<=0) {
        printf("Error! Factorical of a number Doesn't exist.");
    }
    else {
        for (i=1; i<=n; ++i) {
            fact *= i;
        }
        printf("Factorical of %d = %lf\n", n, fact);

    }

    return 0;
}
