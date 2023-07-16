#include <stdio.h>
#include <string.h> // for string build in function, strlen

int main()
{
    const int firstNumber = 30;
    const int secondNumber = 50;
    const int day = 2;
    const int myNumbers[] = {4, 6, 9, 20, 5, 10};
    const char *myLanguages[] = {"C", "C++", "Java", "C#", "PHP", "Python", "Ruby", "JavaScript", "Rust", "Go", "Swift", "R", "Kotlin"};
    const int numLanguages = sizeof(myLanguages) / sizeof(myLanguages[0]);
    int counter = 1;
    int counterIndex = 1;
    int index = 0;
    int i = 0;

    if (firstNumber > secondNumber)
    {
        printf("%d is greater than secondNumber %d\n", firstNumber, secondNumber);
    }
    else if (firstNumber < secondNumber)
    {
        printf("%d is less than secondNumber %d\n", firstNumber, secondNumber);
    }
    else
    {
        printf("%d is equivalent to secondNumber %d\n", firstNumber, secondNumber);
    }

    (firstNumber > secondNumber) ? printf("%d is greater than secondNumber %d\n", firstNumber, secondNumber) : (firstNumber < secondNumber) ? printf("%d is less than secondNumber %d\n", firstNumber, secondNumber)
                                                                                                                                            : printf("%d is equivalent to secondNumber %d\n", firstNumber, secondNumber);

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednessday\n");
        break;
    default:
        printf("Sunday\n");
    }

    while (counter < 3)
    {
        printf("%d\n", counter);
        counter++;
    }

    printf("-----\n");

    do
    {
        printf("%d\n", counterIndex);
        counterIndex++;
    } while (counterIndex < 3);

    printf("-----\n");

    while (index < 5)
    {
        if (index == 2)
        {
            // for break replace index++ and continue with break
            index++;
            continue;
        }

        printf("%d\n", index);
        index++;
    }

    printf("-----\n");

    for (; i < 5; i++)
    {
        if (i == 2)
        {
            continue;
        }
        printf("%d\n", i);
    }

    printf("-----\n");

    printf("%d\n", myNumbers[0]);

    printf("-----\n");

    for (int index = 0; index < numLanguages; index++)
    {
        printf("Language %d is %s\n", index + 1, myLanguages[index]);
    }

    printf("-----\n");

    int matrix[2][3] = {{1, 9, 2}, {7, 6, 8}};

    printf("%d\n", matrix[0][2]);
    matrix[0][2] = 5;
    printf("%d\n", matrix[0][2]);

    printf("-----\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }

    printf("-----\n");

    int x = 0;
    char *name = "Osagie";

    for (; x <= strlen(name); x++)
    {
        printf("%c\n", name[x]);
    }

    return 0;
}
