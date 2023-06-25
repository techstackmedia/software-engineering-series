# Basics of C Programming: Data Types, Constants, Variables, and Arrays

![Basics of C Programming: Data Types, Constants, Variables, and Arrays Cover](https://res.cloudinary.com/bizstak/image/upload/v1687276778/GitHub_Cover_aoeugb.png)

## Introduction

Understanding the basics of C programming is essential for any aspiring programmer. In this blog post, we will explore the concept of data types and constants in C programming, taking a hands-on approach to deepen our understanding. We will compile and run the code snippets to observe the results firsthand. Let's get started!

## Code Snippet

Check out the [complete code on GitHub Gist](https://gist.github.com/techstackmedia/10478de1608d3519e323c53f1a4f971a).

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

or

```bash
nano basics.c # installed by default on Linux
```

**Note** Make sure you save changes in the file.

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
  - While this declaration is allowed by the C language, it is generally considered bad practice because it can lead to potential issues related to argument handling and type-checking.
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

These are not all the data types we have in C. We will explore others later.

## Array: List of Characters as a String

The code `char text[] = "This is a text";` represents a character array, which is commonly used to store strings in C. In this case, the array `text` is initialized with the string "This is a text".

```c
char text[] = "This is a text";
```

Although it is common to use character arrays to store strings in C, it's important to note that there is no separate data type specifically for strings. Instead, strings are represented as arrays of characters terminated by a null character (`'\0'`), indicating the end of the string.

### Modification of a Character at a specific index

Let's visually represent the interpretation of the given code below and explain the zero-indexed string, modification of the character at index 8, and the memory addresses before and after the modification:

```c
char text[] = "This is a text";
text[8] = '1';
```

1. Declaration and Initialization of the Character Array (String):

```c
char text[] = "This is a text";
```

This code declares and initializes a character array `text` with the string "This is a text". The characters of the string are stored in sequential memory locations.

Visual representation:

```c
Memory:
-----------------------------------------------------
| Address |   Value   |          Variable           |
-----------------------------------------------------
|  1000   |    'T'    |    text[0] (char, 'T')      |
|  1001   |    'h'    |    text[1] (char, 'h')      |
|  1002   |    'i'    |    text[2] (char, 'i')      |
|  1003   |    's'    |    text[3] (char, 's')      |
|  1004   |    ' '    |    text[4] (char, ' ')      |
|  1005   |    'i'    |    text[5] (char, 'i')      |
|  1006   |    's'    |    text[6] (char, 's')      |
|  1007   |    ' '    |    text[7] (char, ' ')      |
|  1008   |    'a'    |    text[8] (char, 'a')      |
|  1009   |    ' '    |    text[9] (char, ' ')      |
|  1010   |    't'    |    text[10] (char, 't')     |
|  1011   |    'e'    |    text[11] (char, 'e')     |
|  1012   |    'x'    |    text[12] (char, 'x')     |
|  1013   |    't'    |    text[13] (char, 't')     |
|  1014   |   '\0'    |    text[14] (char, '\0')    |
-----------------------------------------------------
```

1. Modification of Character at Index 8:

```c
text[8] = '1';
```

This code replaces the character at index 8 (zero-indexed) of `text` with the character '1'.

Visual representation (after modification):

```c
Memory:
-----------------------------------------------------
| Address |   Value   |          Variable           |
-----------------------------------------------------
|  1000   |    'T'    |    text[0] (char, 'T')      |
|  1001   |    'h'    |    text[1] (char, 'h')      |
|  1002   |    'i'    |    text[2] (char, 'i')      |
|  1003   |    's'    |    text[3] (char, 's')      |
|  1004   |    ' '    |    text[4] (char, ' ')      |
|  1005   |    'i'    |    text[5] (char, 'i')      |
|  1006   |   's'     |    text[6] (char, 's')      |
|  1007   |    ' '    |    text[7] (char, ' ')      |
|  1008   |    '1'    |    text[8] (char, '1')      |
|  1009   |    ' '    |    text[9] (char, ' ')      |
|  1010   |    't'    |    text[10] (char, 't')     |
|  1011   |    'e'    |    text[11] (char, 'e')     |
|  1012   |    'x'    |    text[12] (char, 'x')     |
|  1013   |    't'    |    text[13] (char, 't')     |
|  1014   |   '\0'    |    text[14] (char, '\0')    |
-----------------------------------------------------
```

In a zero-indexed string or array, the first element is accessed using index 0. So, in the given code, `text[8]` represents the character at the ninth position in the string. By assigning `'1'` to `text[8]`, the original character `'a'` at index 8 is replaced with `'1'`.

The memory addresses before and after the modification remain the same, only the values stored at those addresses are changed. This is because the array `text` is mutable, allowing us to modify its elements even if it is declared as a character array (string) or a constant.

## Arrays: Storing Multiple Values

Arrays allow for the storage of multiple values of the same data type. They provide a convenient way to group related data together. Let's analyze the usage of arrays in the code snippet.

```c
const int myNumbers[] = { 4, 8, 1, 9, 7 }; // array
const char *myString[] = { "money", "people", "love" }; // array
```

The code snippet demonstrates the declaration and initialization of two arrays, `myNumbers` and `myString`. `myNumbers` is an array of integers, while `myString` is an array of character pointers (strings).

### Visual Representation of Array

Let's visually represent the given code and explain the concept of zero-based indexing in arrays and strings:

1. Declaration and Initialization of Integer Array:

```c
const int myNumbers[] = { 4, 8, 1, 9, 7 };
```

This code declares and initializes an integer array `myNumbers` with 5 elements. The elements are initialized with the provided values.

Visual representation:

```c
myNumbers:
| int | index
--------------
|  4  | 0
--------------
|  8  | 1
--------------
|  1  | 2
--------------
|  9  | 3
--------------
|  7  | 4
--------------
```

In C and many programming languages, arrays are zero-based indexed. It means that the index of the first element in the array is 0, the second element is 1, and so on. In the `myNumbers` array, the values are accessed as follows:

```c
myNumbers[0] = 4
myNumbers[1] = 8
myNumbers[2] = 1
myNumbers[3] = 9
myNumbers[4] = 7
```

1. Declaration and Initialization of String Array:

```c
const char *myString[] = { "money", "people", "love" };
```

This code declares and initializes a string array `myString` with 3 elements. Each element is a pointer to a string literal.

Visual representation:

```c
myString:
| str      | index
--------------
| "money"  | 0
--------------
| "people" | 1
--------------
|  "love"  | 2
--------------
```

Similarly, in C, strings are also represented as arrays of characters. Each character in a string has its index starting from 0. In the `myString` array, the values are accessed as follows:

```c
myString[0] = "money"
myString[1] = "people"
myString[2] = "love"
```

Remember that the index represents the position of an element in the array or a character in a string, starting from 0.

Zero-based indexing is a convention used in programming languages, and it provides a consistent and efficient way to access elements in arrays and strings. Starting the index at 0 aligns with the underlying memory representation and allows for simple arithmetic operations when working with array elements.

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

Finally, we have the variable `replaceIndexMyNumber2D` which initially holds the value of `myNumbers2D[1][0]` and later gets reassigned to the value `10`.

### Constants in Array

Let's visually represent the interpretation of the given code and the output after the modification. Then, I will explain why the changes in the array elements are possible despite using `const`.

```c
const int indexMyNumber2D = myNumbers2D[1][0];
int replaceIndexMyNumber2D = indexMyNumber2D;
replaceIndexMyNumber2D = 10;
```

1. Declaration and Initialization of 2D Array:

```bash
const int myNumbers2D[2][3] = {
    {3, 5, 8},
    {3, 0, 1}
};
```

This code declares and initializes a 2D array `myNumbers2D` with 2 rows and 3 columns. The array elements are initialized with the provided values.

Visual representation:

```bash
myNumbers2D:
--------------
| 3 | 5 | 8 |
--------------
| 3 | 0 | 1 |
--------------
```

1. Accessing Element of the 2D Array:

```bash
const int indexMyNumber2D = myNumbers2D[1][0];
```

This code assigns the value at the index `[1][0]` of `myNumbers2D` to the constant variable `indexMyNumber2D`.

Visual representation (after this step):

```bash
myNumbers2D:
--------------
| 3 | 5 | 8 |
--------------
| 3 | 0 | 1 |
--------------
indexMyNumber2D: 3
```

1. Assignment of Element to a Non-constant Variable:

```bash
int replaceIndexMyNumber2D = myNumbers2D[1][0];
replaceIndexMyNumber2D = 10;
```

This code assigns the value at the index `[1][0]` of `myNumbers2D` to the variable `replaceIndexMyNumber2D`. Then, it reassigns the value of `replaceIndexMyNumber2D` to `10`.

Visual representation (after this step):

```bash
myNumbers2D:
--------------
| 3 | 5 | 8 |
--------------
| 3 | 0 | 1 |
--------------
indexMyNumber2D: 3
replaceIndexMyNumber2D: 10
```

Even though the array `myNumbers2D` is declared as `const`, the changes in the array elements are possible because the `const` qualifier applies to the elements themselves, not to the variables that hold them. The `const` keyword ensures that the elements cannot be modified through the array variable `myNumbers2D`.

In memory, the array `myNumbers2D` is stored as a contiguous block. Each element in the array has its address. When you assign an element to a non-constant variable, like `replaceIndexMyNumber2D`, the value of that element is copied to the variable, including its address. The variable `replaceIndexMyNumber2D` now holds the value and the address of the element.

When you modify the value of `replaceIndexMyNumber2D`, you are changing the value stored at the address held by the variable. However, the original array elements in `myNumbers2D` remains unchanged. The modification only affects the variable `replaceIndexMyNumber2D` and its associated memory location.

```c
const int indexMyNumber2D = myNumbers2D[1][0];
int replaceIndexMyNumber2D = indexMyNumber2D; // myNumbers2D[1][0];
replaceIndexMyNumber2D = 10;
```

Visual representation (address illustration):

```c
Memory:
---------------------------------------------------
| Address |  Value  |           Variable          |
---------------------------------------------------
|  1000   |    3    | myNumbers2D[0][0] (const)   |
|  1004   |    5    | myNumbers2D[0][1] (const)   |
|  1008   |    8    | myNumbers2D[0][2] (const)   |
|  1012   |    3    | myNumbers2D[1][0] (const)   |
|  1016   |    0    | myNumbers2D[1][1] (const)   |
|  1020   |    1    | myNumbers2D[1][2] (const)   |
|  1024   |    3    | indexMyNumber2D (const)     |
|  1028   |   10    | replaceIndexMyNumber2D      |
---------------------------------------------------
```

In this illustration, the addresses and values of the variables are shown in memory. The `const` variables (`myNumbers2D`, `indexMyNumber2D`) hold the original values without any modifications. The non-constant variable `replaceIndexMyNumber2D` holds the modified value.

```c
const int indexMyNumber2D = myNumbers2D[1][0];
int replaceIndexMyNumber2D = indexMyNumber2D; // myNumbers2D[1][0];
replaceIndexMyNumber2D = 10;
```

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

**Note**:

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

`text` is a character array initialized with the string `"This is a text."` It allows for the manipulation of individual characters within the array.

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
- `-pedantic`: Enforces strict adherence to the C language standards. It instructs the compiler to be pedantic and only allows code that strictly follows the C standard. It disables certain language extensions and non-standard features.
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
  - It defines the `bool` type, which represents boolean values (`true` and `false`).
  - In the given code, `bool` is used to declare the variable isTrue and store a boolean value (true or false).

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

- [C Data Types](https://www.learn-c.org/data-types)
- [C Constants](https://www.learn-c.org/constants)
- [C Arrays](https://www.learn-c.org/arrays)
- [C Boolean Data Type](https://www.learn-c.org/boolean)
- [C printf Function](https://www.learn-c.org/printf)
- [C Data Types](https://www.programiz.com/c-programming/c-data-types)
- [C Constants](https://www.learn-c.org/en/Variables_and_Types)
- [C Arrays](https://www.learn-c.org/en/Arrays)

---

**Happy Coding!!!**

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)

---
