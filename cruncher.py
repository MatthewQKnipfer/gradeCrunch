# author: Matthew Q. Knipfer
# Description: This program asks the user what criteria they will be graded on in a class, how those allocations of points are established, how they have performed so far, and creates a table of possible outcomes



# Function for asking what they have
def have():
    
    # Initial input for homework
    homeworkYN = input("Do you have homework (True/False): ")

    # Validate input of boolean
    while (homeworkYN != True) || (homeworkYN != False):
        homeworkYN = input("Invalid input.  Please try again (True/False): ")
    
    # If yes, follow up with asking how many assignments
    if homeworkYN == True:
        homeworkNUM = input("How many assignments: ")
        
        # Validate input of boolean
        while (homeworkYN != True) || (homeworkYN != False):
            homeworkYN = input("Invalid input.  Please try again (True/False): ")

    else pass



    # Initial input for quizzes
    quizYN = input("Do you have quizzes (True/False): ")

    # Validate input of boolean
    while (quizYN != True) || (quizYN != False):
        quizYN = input("Invalid input.  Please try again (True/False): ")
        
        # If yes, follow up with asking how many quizzes
        if quizYN == True:
            quizNUM = input("How many quizzes: ")
            
            # Validate input of boolean
            while (quizYN != True) || (quizYN != False):
                quizYN = input("Invalid input.  Please try again (True/False): ")

    else pass



    # Initial input for tests
    testYN = input("Do you have tests (True/False): ")

    # Validate input of boolean
    while (testYN != True) || (testYN != False):
        testYN = input("Invalid input.  Please try again (True/False): ")
        
        # If yes, follow up with asking how many tests
        if testYN == True:
            testNUM = input("How many tests: ")
            
            # Validate input of boolean
            while (testYN != True) || (testYN != False):
                testYN = input("Invalid input.  Please try again (True/False): ")

    else pass



    # Initial input for projects
    projectYN = input("Do you have projects (True/False): ")

    # Validate input of boolean
    while (projectYN != True) || (projectYN != False):
        projectYN = input("Invalid input.  Please try again (True/False): ")
        
        # If yes, follow up with asking how many projects
        if projectYN == True:
            projectNUM = input("How many projects: ")
            
            # Validate input of boolean
            while (projectN != True) || (projectYN != False):
                projectYN = input("Invalid input.  Please try again (True/False): ")

    else pass



    # Initial input for final
    finalYN = input("Do you have a final (True/False): ")

    # Validate input of boolean
    while (finalYN != True) || (finalYN != False):
        finalYN = input("Invalid input.  Please try again (True/False): ")

    else pass



    # Initial input for other
    otherYN = input("Do you have any other criteria you are graded on (True/False): ")

    # Validate input of boolean
    while (otherYN != True) || (otherYN != False):
        otherYN = input("Invalid input.  Please try again (True/False): ")
        
        # If yes, follow up with asking how many other
        if otherYN == True:
            otherNUM = input("How many other items: ")
            
            # Validate input of boolean
            while (otherYN != True) || (otherYN != False):
                otherYN = input("Invalid input.  Please try again (True/False): ")

    else pass

have(True, 1, True, 1, True, 1, True, True, True, True)
have(False, False, False, False, False, False)


# homeworkYN = 
# homeworkNUM = 
# quizYN = 
# quizNUM = 
# testYN = 
# testNUM = 
# projectYN = 
# projectNUM = 
# finalYN = 
# otherYN = 
# otherNUM = 
