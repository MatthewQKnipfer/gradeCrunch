#include <stdio.h>
#include <stdlib.h>
int main() {

    // Welcome
    printf("\n\nWelcome to GradeCrunch!");
    printf("\n\nThis program asks some questions about your class grading criteria, followed by how you've scored so far.");
    printf("\nGradeCrunch then calculates your running grade, followed by potential outcomes based on your upcoming tasks.\n\n");

    printf("Would you like to continue? (y/n): ");

    char cont;
    scanf("%c", &cont);

    while((cont != 'y') && (cont != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &cont);
    }

    if (cont == 'n') {

        printf("\nAlright, have a great day!\n\n");
        exit(1);
    }

    // Do you have these segments?
    printf("Let's get into it.\n\n\n");

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