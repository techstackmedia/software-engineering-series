#include <stdio.h>
#include <stdbool.h>

/*
 * Run:
 * gcc -Wall -pedantic -Werror -Wextra -std=c99 basics.c -o basics
 * gcc basics.c -o basics
 * ./basics
 */

int main(void)
{
    /* Basic Data Types */

    const int numb = 89;                                                                    // Constant integer variable
    const char *str = "Bello Osagie";                                                       // Constant string (array of characters)
    const bool isTrue = 5 > 3;                                                              // Constant boolean variable
    char text[] = "This is a text";                                                         // Character array (string)
    text[8] = '1';                                                                          // Modifying a character in the array
    const char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}; // Character array (string) initialized with individual characters
    const int myNumbers[] = {4, 8, 1, 9, 7};                                                // Array of integers
    const char *myString[] = {"money", "people", "love"};                                   // Array of strings
    const int indexNumb = myNumbers[2];                                                     // Accessing an element from an array
    const char *indexStr = myString[1];                                                     // Accessing an element from an array
    const int myNumbers2D[2][3] = {{3, 5, 8}, {3, 0, 1}};                                   // 2D array of integers
    const int indexMyNumber2D = myNumbers2D[1][0];                                          // Accessing an element from a 2D array
    int replaceIndexMyNumber2D = myNumbers2D[1][0];                                         // Modifying an element from a 2D array
    replaceIndexMyNumber2D = 10;                                                            // Assigning a new value to the modified element

    printf("%d\n", numb);                   // Print the value of numb
    printf("%s\n", text);                   // Print the value of text
    printf("%s\n", str);                    // Print the value of str
    printf("%s\n", text);                   // Print the value of text
    printf("%d\n", isTrue);                 // Print the value of isTrue
    printf("%d\n", indexNumb);              // Print the value of indexNumb
    printf("%s\n", greetings);              // Print the value of greetings
    printf("%s\n", indexStr);               // Print the value of indexStr
    printf("%d\n", indexMyNumber2D);        // Print the value of indexMyNumber2D
    printf("%d\n", replaceIndexMyNumber2D); // Print the value of replaceIndexMyNumber2D

    return 0;
}