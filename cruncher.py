# author: Matthew Q. Knipfer
# Description: This program asks the user what criteria they will be graded on in a class, how those allocations of points are established, how they have performed so far, and creates a table of possible outcomes



# Prompt do you have?

# Homework

def have():
    homeworkYN = input("Do you have homework (True/False): ")

    if homeworkYN == True:
        homeworkNUM = input("How many assignments: ")

    # Quizzes
    quizYN = input("Do you have quizzes (True/False): ")

    if quizYN == True:
        quizNUM = input("How many quizzes: ")

    # Tests
    testYN = input("Do you have tests (True/False): ")

    if testYN == True:
       testNUM = input("How many tests: ")

    # Projects
    projectYN = input("Do you have projects (True/False): ")

    if projectYN == True:
        x = 1
    else:
        x = 2

    # Final
    finalYN = input("Do you have a final (True/False): ")

    if finalYN == True:
        x = 1
    else:
        x = 2

    # Other
    otherYN = input("Do you have any other criteria you're graded on (True/False): ")

    if otherYN == True:
        x = 1
    else:
        x = 2

have(True, 1, True, 1, True, 1, True, True, True, True)
have(False, False, False, False, False, False)