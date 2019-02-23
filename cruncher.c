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


    // Quizzes


    // Projects


    // Homework


    // Participation


    // Attendance


    // Something else?


    return 0;
}