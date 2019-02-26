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
    printf("Do you have any quizzes (y/n): ");

    char quizzesYN;
    scanf("%c", &quizzesYN);
    
    while((quizzesYN != 'y') && (quizzesYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &quizzesYN);
    }

    printf("How many quizzes? ");

    int quizzesNUM;
    scanf("%i", &quizzesNUM);

    while(quizzesNUM < 0) {
        printf("Oops! Please enter a number greater than zero: ");
        scanf("%i", &quizzesNUM);
    }

    // Projects
    printf("Do you have any projects (y/n): ");

    char projectsYN;
    scanf("%c", &projectsYN);
    
    while((projectsYN != 'y') && (projectsYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &projectsYN);
    }

    printf("How many projects? ");

    int projectsNUM;
    scanf("%i", &projectsNUM);

    while(projectsNUM < 0) {
        printf("Oops! Please enter a number greater than zero: ");
        scanf("%i", &projectsNUM);
    }

    // Homework
    printf("Do you have any homework (y/n): ");

    char homeworkYN;
    scanf("%c", &homeworkYN);
    
    while((homeworkYN != 'y') && (homeworkYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &homeworkYN);
    }

    printf("How many homework? ");

    int homeworkNUM;
    scanf("%i", &homeworkNUM);

    while(homeworkNUM < 0) {
        printf("Oops! Please enter a number greater than zero: ");
        scanf("%i", &homeworkNUM);
    }

    // Participation
    printf("Are you graded on participation (y/n): ");

    char participationYN;
    scanf("%c", &participationYN);
    
    while((participationYN != 'y') && (participationYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &participationYN);
    }


    // Attendance
    printf("Are you graded on attendance (y/n): ");

    char attendanceYN;
    scanf("%c", &attendanceYN);
    
    while((attendanceYN != 'y') && (attendanceYN != 'n')) {
        printf("Oops! Please enter y or n: ");
        scanf("%c", &attendanceYN);
    }


    // Something else?


    return 0;
}