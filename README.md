# Understanding String Manipulation and User Input in C Programming

![Understanding String Manipulation and User Input in C Programming Cover](https://res.cloudinary.com/bizstak/image/upload/v1687658663/GitHub_Cover_vwmkgw.png)

## Introduction

In C programming, the `string.h` library provides several functions for manipulating strings. This blog post will explore the usage of string manipulation functions in C, along with a detailed explanation of user input using `scanf` and `fgets`. We will analyze a code snippet that showcases these concepts and discuss each aspect of the code step by step.

## Code Snippet

Check out the [complete code on GitHub Gist](https://gist.github.com/techstackmedia/4de8421cea83855053279bcf797500bf)

## Including `string.h`

The first line of the code snippet `#include <string.h>` is a preprocessor directive that includes the `string.h` header file. This file contains function declarations for string manipulation, such as `strlen`, `strcpy`, `strcat`, and `strcmp`. By including this header file, we gain access to these functions, which we will utilize in the code snippet.

## Creating a Directory

To begin, let's create a file named `intermediate.c` using the command line. Follow the instructions below based on your operating system:

- Open the command prompt or PowerShell.
- Run the following commands:

```sh
cd basic-programming/c-programming
```

- Open the file in your favorite text editor.

```sh
code intermediate.c
```

or

```sh
vim intermediate.c # installed by default on macOS
```

or

```sh
emacs -Q -nw intermediate.c
```

or

```sh
nano intermediate.c # installed by default on Linux
```

**Note**:
Make sure you save changes in the file.

## String Manipulation using `string.h` Functions

In this section, we'll analyze the code related to string manipulation functions provided by the `string.h` library.

```c
// String Manipulation
strcat(firstText, secondText);
strcpy(secondStr, thirdStr);
const int str13Cmp = strcmp(firstStr, thirdStr);
const int str3greetingCmp = strcmp(thirdStr, greeting);
```

In the code above, we perform various string manipulation operations:

- `strcat(firstText, secondText);`: This line uses the`strcat`function to concatenate the`secondText`string at the end of the`firstText`string. The result is that the`firstText` string becomes "Hello World!".

- `strcpy(secondStr, thirdStr);`: Here, we use the `strcpy` function to copy the contents of the `thirdStr` string into the `secondStr` array. This operation creates an independent copy of the string.

- `const int str13Cmp = strcmp(firstStr, thirdStr);`: The `strcmp` function compares the contents of the `firstStr` and `thirdStr` strings. It returns an integer value indicating the result of the comparison. If the two strings are equal, it returns 0. If `firstStr` is lexicographically less than `thirdStr`, it returns a negative value. If `firstStr` is lexicographically greater than `thirdStr`, it returns a positive value. The result is stored in the `str13Cmp` variable.

- `const int str3greetingCmp = strcmp(thirdStr, greeting);`: Similarly, this line compares the `thirdStr` and `greeting` strings using `strcmp` and stores the result in the `str3greetingCmp` variable.

## User Input using `scanf`

Now, let's look at the code related to user input using the `scanf` function.

```c
// User Input using scanf
printf("Please type your age and grade: ");
scanf("%d %c", &myAge, &myChar);
printf("Please enter your first name: ");
scanf("%19s", myFirstName);
```

In the code above, we use `scanf` to retrieve user input:

- `scanf("%d %c", &myAge, &myChar);`: This line prompts the user to enter their age and grade. The format string `"%d %c"` specifies that we expect an integer followed by a character as input. The `&` operator is used to pass the memory addresses of `myAge` and `myChar` variables to store the values entered by the user.

- `scanf("%19s", myFirstName);`: This line prompts the user to enter their first name. The format string `"%19s"` specifies that we expect a string input with a maximum length of 19 characters (to avoid buffer overflow). The entered string is stored in the `myFirstName` character array.

## User Input using `fgets`

Here's the code that demonstrates user input using the `fgets` function.

```c
// User Input using fgets
printf("Please enter your full name: ");
getchar();  // Clear the newline character from the previous input
fgets(myFullName, sizeof(myFullName), stdin);
myFullName[strcspn(myFullName, "\n")] = '\0';
```

In the code above, we utilize `fgets` to obtain user input:

- `fgets(myFullName, sizeof(myFullName), stdin);`: This line reads a line of input from the user, storing it in the `myFullName` character array. The `sizeof(myFullName)` argument specifies the maximum number of characters to read, preventing buffer overflow. The `stdin` stream indicates that the input is read from the standard input (keyboard).

- `myFullName[strcspn(myFullName, "\n")] = '\0';`: Since `fgets` captures the newline character (`\n`) when the user presses Enter, this line removes the newline character from the `myFullName` string by replacing it with a null character (`\0`). This step ensures that the string ends at the intended input and doesn't include the newline character.

## Memory Address and Pointers

This section focuses on memory addresses and pointers used in the code.

```c
// Memory Address and Pointers
printf("My age is: %d\n", myAge);
printf("My character is: %c\n", myChar);
printf("My first name is: %s\n", myFirstName);
printf("My full name is: %s\n", myFullName);
printf("%p\n", (void*)&myAge);
printf("%p\n", (void*)ptr);
printf("%d\n", *ptr);
```

In the code above, we work with memory addresses and pointers:

- `printf("My age is: %d\n", myAge);`: This line displays the value of the `myAge` variable, representing the age entered by the user.

- `printf("My character is: %c\n", myChar);`: Here, we print the value of the `myChar` variable, which corresponds to the grade entered by the user.

- `printf("My first name is: %s\n", myFirstName);`: This line outputs the contents of the `myFirstName` character array, which contains the user's first name.

- `printf("My full name is: %s\n", myFullName);`: Similarly, we display the content of the `myFullName` character array, which holds the user's full name.

- `printf("%p\n", (void*)&myAge);`: This line prints the memory address of the `myAge` variable using the `%p` format specifier. The `&` operator retrieves the address of the variable.

- `printf("%p\n", (void*)ptr);`: Here, we print the memory address stored in the `ptr` pointer variable. The `(void*)` cast is used to ensure proper formatting of the memory address.

- `printf("%d\n", *ptr);`: This line dereferences the `ptr` pointer and prints the value stored at the memory address it points to. Since `ptr` points to `myAge`, it effectively displays the value of `myAge`.

**Output**
Finally, the code snippet includes several `printf` statements to display the output.

```c
// Output
printf("%d\n", alphabetLength);
printf("%d\n", alphabetByte);
printf("%s\n", firstText);
printf("%s\n", secondStr);
printf("%d\n", str13Cmp);
printf("%d\n", str3greetingCmp);
```

The code above produces the following output:

- `alphabetLength`: This line prints the length of the `alphabet` string, which is determined using the `strlen` function.

- `alphabetByte`: Similarly, this line displays the size (in bytes) of the `alphabet` array, obtained using the `sizeof` operator.

- `firstText`: This line outputs the contents of the `firstText` character array, which now contains the concatenated string "Hello World!".

- `secondStr`: Here, we print the contents of the `secondStr` character array, which was assigned the value of the `thirdStr` string using `strcpy`.

- `str13Cmp`: This line displays the result of comparing the `firstStr` and `thirdStr` strings using `strcmp`. It indicates whether the two strings are equal or different.

- `str3greetingCmp`: Similarly, this line shows the result of comparing the `thirdStr` and `greeting` strings using `strcmp`.

## Conclusion

In this blog post, we explored the usage of string manipulation functions provided by the `string.h` library in C programming. We discussed functions such as `strlen`, `strcpy`, `strcat`, and `strcmp`, along with their purpose and how they are utilized in the code snippet. Additionally, we examined user input using `scanf` and `fgets`, which allow the program to receive input from the user. Finally, we covered memory addresses and pointers, highlighting their significance and demonstrating their usage in the code snippet.
