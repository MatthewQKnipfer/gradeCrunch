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

    



    printf("Let's get into it.\n\n\n");





    // Final
    printf("Do you have a final (y/n): ");

    char finalYN;
    scanf("%c", &cont);
    scanf("%c", &finalYN);

    while((finalYN != 'y') && (finalYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &finalYN);
    }

    // TESTS
    printf("Do you have any tests (y/n): ");

    // Declare y/n and scan
    char testsYN;
    scanf("%c", &cont);
    scanf("%c", &testsYN);
    
    // Verify entered y or n
    while((testsYN != 'y') && (testsYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &testsYN);
    }

    // If yes:
    if (testsYN == 'y') {
        printf("How many tests? ");

        int testsNUM;
        scanf("%c", &cont);
        scanf("%i", &testsNUM);
    

        while(testsNUM < 0) {
            printf("\nOops! Please enter a number greater than zero: ");
            scanf("%c", &cont);
            scanf("%i", &testsNUM);
        }
    }


    // QUIZZES
    printf("Do you have any quizzes (y/n): ");

    // Declare y/n and scan
    char quizzesYN;
    scanf("%c", &cont);
    scanf("%c", &quizzesYN);
    
    // Verify entered y or n
    while((quizzesYN != 'y') && (quizzesYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &quizzesYN);
    }

    // If yes:
    if (quizzesYN == 'y') {
        printf("How many quizzes? ");

        int quizzesNUM;
        scanf("%c", &cont);
        scanf("%i", &quizzesNUM);
    

        while(quizzesNUM < 0) {
            printf("\nOops! Please enter a number greater than zero: ");
            scanf("%c", &cont);
            scanf("%i", &quizzesNUM);
        }
    }


    // PROJECTS
    printf("Do you have any projects (y/n): ");

    // Declare y/n
    char projectsYN;
    scanf("%c", &cont);
    scanf("%c", &projectsYN);
    
    // Verify entered y or n
    while((projectsYN != 'y') && (projectsYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &projectsYN);
    }


    // If yes:
    if (projectsYN == 'y') {
        printf("How many projects? ");

        int projectsNUM;
        scanf("%c", &cont);
        scanf("%i", &projectsNUM);
    

        while(projectsNUM < 0) {
            printf("\nOops! Please enter a number greater than zero: ");
            scanf("%c", &cont);
            scanf("%i", &projectsNUM);
        }
    }

    
    // HOMEWORK
    printf("Do you have any homework (y/n): ");

    // Declare y/n
    char homeworkYN;
    scanf("%c", &cont);
    scanf("%c", &homeworkYN);
    
    // Verify entered y or n
    while((homeworkYN != 'y') && (homeworkYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &homeworkYN);
    }


    // If yes:
    if (homeworkYN == 'y') {
        printf("How many homework assignments? ");

        int homeworkNUM;
        scanf("%c", &cont);
        scanf("%i", &homeworkNUM);
    

        while(homeworkNUM < 0) {
            printf("\nOops! Please enter a number greater than zero: ");
            scanf("%c", &cont);
            scanf("%i", &homeworkNUM);
        }
    }


    // Participation
    printf("Are you graded on participation (y/n): ");

    char participationYN;
    scanf("%c", &cont);
    scanf("%c", &participationYN);
    
    while((participationYN != 'y') && (participationYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &participationYN);
    }


    // Attendance
    printf("Are you graded on attendance (y/n): ");

    char attendanceYN;
    scanf("%c", &cont);
    scanf("%c", &attendanceYN);
    
    while((attendanceYN != 'y') && (attendanceYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &attendanceYN);
    }


    // Something else?


    return 0;
}