#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    // Do you have a final?
    printf("Do you have a final (y/n): ");
    char finalYN;
    scanf("%c", &cont);
    scanf("%c", &finalYN);

    while((finalYN != 'y') && (finalYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &finalYN);
    }

    // Portion of syllabus grade
    if (finalYN == 'y') {
        printf("What percentage of your grade does the final account for (integer/100): ");
        int finalPORTION;
        scanf("%c", &cont);
        scanf("%i", &finalPORTION);

        while(finalPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &finalPORTION);
        }
    }

    // TESTS
    // Do you have tests?
    printf("Do you have any tests (y/n): ");
    char testsYN;
    scanf("%c", &cont);
    scanf("%c", &testsYN);
    
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
            printf("\nOops! Please enter a number greater than or equal to zero: ");
            scanf("%c", &cont);
            scanf("%i", &testsNUM);
        }
    }

    // Portion of syllabus grade
    if (testsYN == 'y') {
        printf("What total percentage of your grade do your tests account for (integer/100): ");
        int testsPORTION;
        scanf("%c", &cont);
        scanf("%i", &testsPORTION);

        while(testsPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &testsPORTION);
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
            printf("\nOops! Please enter a number greater than or equal to zero: ");
            scanf("%c", &cont);
            scanf("%i", &quizzesNUM);
        }
    }

    // Portion of syllabus grade
    if (quizzesYN == 'y') {
        printf("What total percentage of your grade do your quizzes account for (integer/100): ");
        int quizzesPORTION;
        scanf("%c", &cont);
        scanf("%i", &quizzesPORTION);

        while(quizzesPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &quizzesPORTION);
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

    // Portion of syllabus grade
    if (projectsYN == 'y') {
        printf("What total percentage of your grade do your projects account for (integer/100): ");
        int projectsPORTION;
        scanf("%c", &cont);
        scanf("%i", &projectsPORTION);

        while(projectsPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &projectsPORTION);
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
            printf("\nOops! Please enter a number greater than or equal to zero: ");
            scanf("%c", &cont);
            scanf("%i", &homeworkNUM);
        }
    }

    // Portion of syllabus grade
    if (homeworkYN == 'y') {
        printf("What total percentage of your grade does your homework account for (integer/100): ");
        int homeworkPORTION;
        scanf("%c", &cont);
        scanf("%i", &homeworkPORTION);

        while(homeworkPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &homeworkPORTION);
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

    // Portion of syllabus grade
    if (participationYN == 'y') {
        printf("What total percentage of your grade does participation account for (integer/100): ");
        int participationPORTION;
        scanf("%c", &cont);
        scanf("%i", &participationPORTION);

        while(participationPORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &participationPORTION);
        }
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

    // Portion of syllabus grade
    if (attendanceYN == 'y') {
        printf("What total percentage of your grade does attendance account for (integer/100): ");
        int attendancePORTION;
        scanf("%c", &cont);
        scanf("%i", &attendancePORTION);

        while(attendancePORTION < 0) {
            printf("\nOops! Please enter a number greater than or equal to 0: ");
            scanf("%c", &cont);
            scanf("%i", &attendancePORTION);
        }
    }


    // Something else?
    printf("Do you have any other criteria you're graded on (y/n): ");

    char otherYN;
    scanf("%c", &cont);
    scanf("%c", &otherYN);
    
    while((otherYN != 'y') && (otherYN != 'n')) {
        printf("\nOops! Please enter y or n: ");
        scanf("%c", &cont);
        scanf("%c", &otherYN);
    }

    // If yes:
    if (otherYN == 'y') {
        printf("How many other criteria? ");

        int otherNUM;
        scanf("%c", &cont);
        scanf("%i", &otherNUM);
    

        while(otherNUM < 0) {
            printf("\nOops! Please enter a number greater than zero: ");
            scanf("%c", &cont);
            scanf("%i", &otherNUM);
        }

        for (int i = 1; i <= otherNUM; i++) {
            printf("Name other subject number %i: ", i);

// TODO: Find out how to use strings in C
            str otherNAME;

            scanf("%c", &cont);
            scanf("%s", &otherNAME);
        }
    }


    return 0;
}