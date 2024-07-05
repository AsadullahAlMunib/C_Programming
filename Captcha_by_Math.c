#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num1, num2, ans, op, input;
    srand(time(NULL));

    num1 = (rand()%50)+1;
    num2 = (rand()%50)+1;

    op = rand()%3;
    switch(op) {
    case 0:
        ans = num1+num2;
        printf("%d + %d = ", num1, num2);
        scanf("%d", &input);
        if(ans==input) {
            printf("\tYou're write. \n\n");
        }
        else {
            printf("\tSorry, It's wrong. \n\n");
        }
        break;
        
    case 1:
        ans = num1-num2;
        printf("%d - %d = ", num1, num2);
        scanf("%d", &input);
        if(ans==input) {
            printf("\tYou're write. \n\n");
        }
        else {
            printf("\tSorry, It's wrong. \n\n");
        }
        break;
        
    case 2:
        ans = num1*num2;
        printf("%d * %d = ", num1, num2);
        scanf("%d", &input);
        if(ans==input) {
            printf("\tYou're write. \n\n");
        }
        else {
            printf("\tSorry, It's wrong. \n\n");
        }
        break;
    }
    main();

    return 0;
}