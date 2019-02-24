#include <stdio.h>
int main() {

    // Do you have these segments?
    

    // Final
    printf("Do you have a final (y/n): ");

    char finalYN;
    scanf("%c", &finalYN);
    
    while((finalYN != 'y') && (finalYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &finalYN);
    }


    // Tests
    printf("Do you have any tests (y/n): ");

    char testsYN;
    scanf("%c", &testsYN);
    
    while((testsYN != 'y') && (testsYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &testsYN);
    }

    printf("How many tests? ");

    int testsNUM;
    scanf("%i", &testsNUM);

    while(testsNUM < 0) {
        printf("Oops! Please enter a number greater than zero: ");
        scanf("%i", &testsNUM);
    }

    // Quizzes


    // Projects


    // Homework


    // Participation


    // Attendance


    // Something else?


    return 0;
}