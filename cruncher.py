# author: Matthew Q. Knipfer
# Description: This program asks the user what criteria they will be graded on in a class, how those allocations of points are established, how they have performed so far, and creates a table of possible outcomes



# Prompt do you have?

# Homework

def have():
    homeworkYN = input("Do you have homework (True/False): ")

    if homeworkYN == True:
        x = 1
    else:
        x = 2

    # Quizzes
    quizYN = input("Do you have quizzes (True/False): ")

    if quizYN == True:
        x = 1
    else:
        x = 2
    # Tests
    testYN = input("Do you have tests (True/False): ")

    if testYN == True:
        x = 1
    else:
        x = 2

    # Projects
    projectYN = input("Do you have tests (True/False): ")

    if projectYN == True:
        x = 1
    else:
        x = 2

    # Final
    finalYN = input("Do you have quizzes (True/False): ")

    if finalYN == True:
        x = 1
    else:
        x = 2




# Allocation of pie

