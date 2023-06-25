#include <stdio.h>
#include <string.h>

int main(void)
{
    const char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char firstText[50] = "Hello ";
    const char secondText[] = "World!";
    const int alphabetLength = strlen(alphabet);
    const int alphabetByte = sizeof(alphabet);
    const char firstStr[] = "Happy";
    char secondStr[10];
    const char thirdStr[] = "Happy";
    const char greeting[] = "Hello";
    int myAge;
    char myChar;
    char myFirstName[20];
    char myFullName[30];
    int *ptr = &myAge;

    // String Manipulation
    strcat(firstText, secondText);
    strcpy(secondStr, thirdStr);
    const int str13Cmp = strcmp(firstStr, thirdStr);
    const int str3greetingCmp = strcmp(thirdStr, greeting);

    // User Input using scanf
    printf("Please type your age and grade: ");
    scanf("%d %c", &myAge, &myChar);
    printf("Please enter your first name: ");
    scanf("%19s", myFirstName);

    // User Input using fgets
    printf("Please enter your full name: ");
    getchar(); // Clear the newline character from the previous input
    fgets(myFullName, sizeof(myFullName), stdin);
    myFullName[strcspn(myFullName, "\n")] = '\0';

    // Memory Address and Pointers
    printf("My age is: %d\n", myAge);
    printf("My character is: %c\n", myChar);
    printf("My first name is: %s\n", myFirstName);
    printf("My full name is: %s\n", myFullName);
    printf("%p\n", (void *)&myAge);
    printf("%p\n", (void *)ptr);
    printf("%d\n", *ptr);

    // Output
    printf("%d\n", alphabetLength);
    printf("%d\n", alphabetByte);
    printf("%s\n", firstText);
    printf("%s\n", secondStr);
    printf("%d\n", str13Cmp);
    printf("%d\n", str3greetingCmp);

    return 0;
}