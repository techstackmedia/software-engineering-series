# Basics of C Programming: Data Types, Constants, Variables, and Arrays

![Basics of C Programming: Data Types, Constants, Variables, and Arrays Cover](https://res.cloudinary.com/bizstak/image/upload/v1687276778/GitHub_Cover_aoeugb.png)

## Introduction

Understanding the basics of C programming is essential for any aspiring programmer. In this blog post, we will explore the concept of data types and constants in C programming, taking a hands-on approach to deepen our understanding. We will compile and run the code snippets to observe the results firsthand. Let's get started!

## Code Snippet

Check out the [complete code on GitHub Gist](https://gist.github.com/techstackmedia/10478de1608d3519e323c53f1a4f971a)

## Creating a Directory

To begin, let's create a file named `basics.c` using the command line. Follow the instructions below based on your operating system:

- Open the command prompt or PowerShell.
- Run the following commands:

```sh
cd basic-programming/c-programming
```

- Open the file in your favorite text editor.

```sh
code basics.c
```

or

```sh
vim basics.c # installed by default on macOS
```

or

```sh
emacs -Q -nw basics.c
```

```sh
nano basics.c # installed by default on Linux
```

**Note**
Make sure you save changes in the file.

## Entry Point of a Program

In C programming, `int main()` or `int main(void)` is the entry point of a C program. It is the function where the execution of the program starts. Here's an explanation of each:

```c
int main(void) {
  // Code goes here    
}
```

- `int main()`:

  - This declaration of `main` specifies that the function takes an unspecified number of arguments.
  - In C, if no arguments are specified in the parentheses, it is assumed that the function can accept any number of arguments.
  - While this declaration is allowed by the C language, it is generally considered bad practice because it can lead to potential issues related to argument handling and type checking.

- `int main(void)`:
  - This declaration of `main` specifies that the function takes no arguments.
  - By explicitly stating `(void)` in the parentheses, it conveys that the `main` function does not expect any input parameters.
  - This declaration is considered good practice and is recommended for clarity and to avoid potential issues with argument handling.

Using int `main(void)` is generally considered better practice because it clearly indicates that the `main` function does not accept any arguments. It helps in avoiding accidental mistakes related to argument passing and makes the code more readable and self-explanatory.

## Exit Point of a Program

In C programming, the `return 0`; statement at the end of the `main` function is not required, but it is commonly used. Here's an explanation:

```c
int main(void) {
  // Code goes here 

  return 0;   
}
```

- The `return` statement is used to indicate the exit status of the program to the operating system or the program's caller.
- By convention, a return value of `0` typically indicates successful execution or termination of the program.
- If the `return` statement is omitted in the `main` function, the C language automatically inserts an implicit `return 0`; at the end of the function.
- Including an explicit `return 0;` at the end of the `main` function is considered good practice for the following reasons:

  - It makes the code more readable and explicit, clearly indicating the intended termination of the program.
  - It allows for consistency with other functions that may have non-zero return values to indicate specific error conditions.
  - It ensures compatibility with some programming environments that may expect a return value from the `main` function.

While `return 0;` is not strictly required, it is widely used and considered a best practice. It helps in writing clear and maintainable code, especially when working on larger projects or collaborating with other developers.

## Data Types: Defining the Nature of Data

Data types are used to define the type of data that a variable can hold. C provides several built-in data types, including integers, characters, booleans, and arrays. Let's explore these data types by examining the code snippet provided.

```c
/* Data Types */

const int numb = 89;
const char *str = "Bello Osagie";
const bool isTrue = 5 > 3;
```

In the above code, we can identify three different data types being used:

- `int` is used to store integer values. Here, `numb` represents the number 89.
- `char*` (character pointer) is used to store strings. In this case, `str` points to the string `Bello Osagie`.
- `bool` represents boolean values (`true` or `false`). The variable `isTrue` is assigned the value `true` because the expression `5 > 3` evaluates to `true`.

By utilizing different data types, we can handle various kinds of information in our programs.

### Note

This are not all the data types we have in C. We will explore others later.

## Constants: Immutable Values

In C programming, constants are fixed values that cannot be modified during the execution of a program. They are declared using the `const` keyword. Let's examine the usage of constants in our code.

```c
/* Constants */

const int numb = 89;
const char *str = "Bello Osagie";
const bool isTrue = 5 > 3;
char text[] = "This is a text";
text[8] = '1';
const char greetings[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0' };
const int myNumbers[] = { 4, 8, 1, 9, 7 }; // array
const char *myString[] = { "money", "people", "love" }; // array
const int indexNumb = myNumbers[2];
const char *indexStr = myString[1];
const int myNumbers2D[2][3] = { {3, 5, 8 }, {3, 0, 1} };
const int indexMyNumber2D = myNumbers2D[1][0];
int replaceIndexMyNumber2D = myNumbers2D[1][0];
replaceIndexMyNumber2D = 10;
```

The constant `numb` is declared as an integer with the value 89. Since it is defined as a constant, its value cannot be changed later in the program. Similarly, `str` is declared as a constant character pointer pointing to the string `Bello Osagie`.

The boolean constant `isTrue` is assigned the result of the expression `5 > 3`, which evaluates to `true`. Again, as a constant, its value remains unchanged.

The array `greetings` is initialized with the characters `'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'`, and `'\0'`, representing a null-terminated string constant.

`myNumbers` and `myString` are arrays of integers and character pointers, respectively. These arrays are initialized with fixed values and cannot be modified later.

Next, we have the 2D array `myNumbers2D`, which is initialized with two rows and three columns of integers.

We have variables such as `indexNumb` and `indexStr`, which store specific elements from the constant arrays.

Finally, we have the variable `replaceIndexMyNumber2D` which initially holds the value of `myNumbers2D[1][0]` and later gets reassigned the value `10`.

## Printing the Values: Printing Formatted Output

To observe the values of the variables and constants in our code, we use the `printf` function to print them to the console (terminal). Here's how the values are printed:

```c
/* Printing Values */

printf("%d\n", numb); // Print the value of numb
printf("%s\n", text); // Print the value of text
printf("%s\n", str); // Print the value of str
printf("%s\n", text); // Print the value of text
printf("%d\n", isTrue); // Print the value of isTrue
printf("%d\n", indexNumb); // Print the value of indexNumb
printf("%s\n", greetings); // Print the value of greetings
printf("%s\n", indexStr); // Print the value of indexStr
printf("%d\n", indexMyNumber2D); // Print the value of indexMyNumber2D
printf("%d\n", replaceIndexMyNumber2D); // Print the value of replaceIndexMyNumber2D
```

Each `printf` statement specifies a format specifier to indicate the data type of the variable or constant being printed. For example, `%d` is used to print integers, `%s` is used to print strings, and `%d` is also used for booleans (where `true` is printed as `1` and `false` is printed as `0`).

### Note -

- `%d` is the same as `%i`.
- The format specifier `%c` is used to print a single character in C. However, the value representing the character must be enclosed in single quotes (' '), not backticks. Below is an example:

```c
printf("%c\n", 'J'); // A char
```

This will print the character `'J'` to the console followed by a newline character (`'\n'`).

## Comments: Documenting Your Code

Comments are essential for code documentation. They provide information about the code's functionality, purpose, and any other relevant details. In the given code snippet, we can see the usage of comments to document the code. Let's take a look:

```c
// This is a single-line comment
/* 
   This is a multi-line comment
   It can span multiple lines
*/

// Code snippet starts here

const int numb = 89; // Variable to store a number
const char *str = "Bello Osagie"; // Variable to store a string
const bool isTrue = 5 > 3; // Variable to store a boolean value

char text[] = "This is a text"; // Variable to store a character array

// Code snippet ends here
```

In the code snippet, we can see the use of single-line comments and multi-line comments. Single-line comments start with `//` and continue until the end of the line. They are used to provide brief explanations or comments on a specific line of code.

Multi-line comments start with `/*` and end with `*/`. They can span multiple lines and are useful for providing detailed explanations or commenting out a block of code.

Comments are not executed as part of the program and do not affect the program's functionality. They are solely meant for human readability and understanding.

## Variables: Storing Data

Variables are used to store and manipulate data in C programming. They act as containers that hold values of different types. In the given code snippet, we can see the usage of variables like `numb`, `str`, `isTrue`, `text`, and more. Let's explore their significance and how they are utilized.

```c
/* variables */

const int numb = 89;
const char *str = "Bello Osagie";
const bool isTrue = 5 > 3;
char text[] = "This is a text";
}
```

In this code, `numb` is an integer variable assigned a constant value of `89`. We use the `const` keyword to indicate that the value is constant and cannot be modified.

Similarly, `str` is a character pointer variable storing the address of the string `Bello Osagie`. The `const` keyword ensures that the pointer itself is constant and cannot be used to modify the string.

`isTrue` is a boolean variable assigned the result of the expression `5 > 3`. It will hold the value `true` since the expression is true.

`text` is a character array initialized with the string `"This is a text."` It allows for manipulation of individual characters within the array.

## Arrays: Storing Multiple Values

Arrays allow for the storage of multiple values of the same data type. They provide a convenient way to group related data together. Let's analyze the usage of arrays in the code snippet.

```c
const int myNumbers[] = { 4, 8, 1, 9, 7 }; // array
const char *myString[] = { "money", "people", "love" }; // array
```

The code snippet demonstrates the declaration and initialization of two arrays, `myNumbers` and `myString`. `myNumbers` is an array of integers, while `myString` is an array of character pointers (strings).

## Modifying Variables: Adding and Replacing Values

Variables can be modified by assigning new values to them. In the code snippet, we can see examples of modifying variables:

```c
text[8] = '1';
replaceIndexMyNumber2D = 10;
```

The statement `text[8] = '1'` replaces the character at index 8 in the text array with the character `'1'`. Similarly, `replaceIndexMyNumber2D = 10` assigns the value 10 to the variable `replaceIndexMyNumber2D`.

## Compiling and Running the Code

When compiling a C program using the GCC compiler, you can pass various options and flags to modify the behavior of the compilation process. Let's break down the options used in the commands you mentioned:

```c
/*
 * Run:
 * gcc -Wall -pedantic -Werror -Wextra -std=c99 basics.c -o basics
 * gcc basics.c -o basics
 * ./basics
 */
```

Let's discuss each option:

- `-Wall`: Enables compiler warnings for potential issues in the code. It stands for **all warnings**. When this option is used, the compiler will display a comprehensive set of warning messages to help identify possible problems in the code.
- `-pedantic`: Enforces strict adherence to the C language standards. It instructs the compiler to be pedantic and only allow code that strictly follows the C standard. It disables certain language extensions and non-standard features.
- `-Werror`: Treats all warnings as errors. When this option is enabled, any warning generated by the compiler will be treated as an error, causing the compilation to fail. This ensures that the code is warning-free and encourages developers to write clean and error-free code.
- `-Wextra`: Enables additional warning messages beyond those enabled by `-Wall`. It provides extra warnings for potentially suspicious code constructs or common programming mistakes.
- `-std=c99`: Specifies the C language standard to be used. In this case, it specifies the C99 standard. C99 is an ANSI/ISO standard for the C programming language, introduced in 1999. It adds several new features and improvements to the language.

The first command (`gcc -Wall -pedantic -Werror -Wextra -std=c99 basics.c -o basics`) enables strict warnings, treats warnings as errors, and enforces adherence to the **C99 standard**. It is advisable to use this command during development or when aiming for strict code quality and adherence to standards. It helps catch potential issues and encourages cleaner code.

The second command (`gcc basics.c -o basics`) is a simpler command that compiles the `basics.c` file without any specific warning options or standard enforcement. It can be used for quick compilation without strict warning checks. However, it's generally recommended to use the first command during development or in projects where code quality and adherence to standards are crucial.

By using the first command, you can catch and address potential issues early in the development process, leading to more robust and maintainable code.

## Preprocessor Directives

In the code below, `#include <stdio.h>` and `#include <stdbool.h>` are preprocessor directives that include the standard C library headers `stdio.h` and `stdbool.h`, respectively. Here's an explanation of each:

```c
#include <stdio.h>
#include <stdbool.h>
```

- `#include <stdio.h>`:

  - This directive includes the standard input/output library header. It provides functions for input and output operations, such as reading from or writing to the console or files.
  - It allows you to use functions like `printf()` and `scanf()` for formatted output and input operations, respectively.
  - In the given code, `printf()` function is used to print values to the console.

- `#include <stdbool.h>`:
  - This directive includes the header for the C99 standard's Boolean type support.
  - It provides the definition of the `bool` type, which represents boolean values (`true` and `false`).
  - In the given code, bool is used to declare the variable isTrue and store a boolean value (true or false).

Including these headers is necessary to access the functions and definitions provided by the respective libraries. Without including `stdio.h`, you wouldn't be able to use functions like `printf()`, and without including `stdbool.h`, you wouldn't be able to use the `bool` data type.

## Practice

Assuming you [have an account](https://replit.com/signup) or are already [logged in](https://replit.com/login) on Replit.

- [Try the Replit](https://replit.com/@OsagieNoah/Basics#basics.c) Editor online.
- Click the **Fork** button.
- Edit the current code.

## Conclusion

In this blog post, we explored the basics of C programming by examining data types and constants. We learned how to declare and initialize variables and constants of various data types, including integers, characters, booleans, and arrays. We also observed the results by printing the values using `printf`. Understanding these fundamental concepts is crucial for building more complex C programs. Stay tuned for future blog posts where we will delve deeper into C programming.

---

## References

- [C Data Types](https://www.programiz.com/c-programming/c-data-types)
- [C Constants](https://www.learn-c.org/en/Variables_and_Types)
- [C Arrays](https://www.learn-c.org/en/Arrays)

---

**Happy Coding!!!**

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)

---
