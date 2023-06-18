# Getting Started with C Programming: Compiling Programs

![Getting Started with C Programming: Compiling Programs Cover](https://res.cloudinary.com/bizstak/image/upload/v1687113876/GitHub_Cover_adljbk.png)

## Introduction

C programming is a versatile language that allows you to build a wide range of applications. Whether you're a beginner or an experienced programmer, it's essential to know how to set up your development environment and get started with basic programming tasks. In this guide, we'll walk you through the process of creating directories and checking for the installation of C on different operating systems. We'll also cover the steps to install C if it's not already available. Finally, we'll demonstrate how to write and compile a simple **`Hello, World!`** program in C. Let's get started!

## Creating a Directory

To begin, let's create a directory named `c-programming` using the command line. Follow the instructions below based on your operating system:

- Open the command prompt or PowerShell.
- Run the following command

```sh
mkdir basic-programming/c-programming
```

- change directory to `c-programming`

```sh
cd basic-programming/c-programming
```

## Checking if C is Installed

Before you start writing C programs, it's important to check if C is installed on your system. You can verify this by using the `gcc` or `cc` command, a popular C compiler. Follow the steps below:

- Open the terminal.
- Run the following command:

```sh
gcc --version
```

If C is installed, the version information will be displayed. Otherwise, you'll be prompted to install the necessary tools or package.

### `gcc` or `cc`

- In the article, the `gcc` command will be primarily used for checking the version of the C compiler and compiling C programs. However, it is worth noting that `cc` can be used as an alternative to `gcc` for the same purposes.

- While `gcc` is commonly used as the command-line interface to the GNU Compiler Collection, including the C compiler, `cc` is often set as a symbolic link or alias to `gcc`. Therefore, both commands essentially serve the same purpose and can be used interchangeably in most cases.

The choice between using `gcc` or `cc` may depend on personal preference or specific system configurations. However, in the context of the article, it is safe to assume that the `gcc` command will be predominantly used while acknowledging that the cc command could be used as an alternative.

## Installing C

If C is not installed on your system, follow the appropriate instructions based on your operating system:

### General Installation (VSCode)

- If you prefer to [install and use VSCode on Windows](https://community.chocolatey.org/packages?q=vscode) (choco install vscode) or macOS (brew install --cask visual-studio-code) or on Ubuntu (sudo apt install code), install the extensions [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
- After the installation is complete, you can launch Visual Studio Code by searching for it in the applications menu or by running the `code` command in the terminal (`code` and click `Enter` or `Return`).

### macOS

On macOS, Homebrew can be used to install C-related tools and libraries. However, Homebrew itself is not specifically used to install the C language since macOS already includes the Clang compiler, which supports C. Here's how you can install Homebrew and verify the availability of Clang:

- Open the terminal.
- Install Homebrew by running the following command:

```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

- After Homebrew is installed, you can install additional C-related tools and libraries if needed by using Homebrew commands. For example, to install the GNU Compiler Collection (GCC), you can run the following command:

```sh
brew install gcc
```

- To verify the availability of Clang, which comes preinstalled on macOS, run the following command:

```sh
clang --version
```

Remember, on macOS, the default compiler is Clang, which supports C and other programming languages. If you install GCC using Homebrew, you can use it as an alternative to Clang.

#### Alternative installation on macOS

- Install Xcode from the App Store.
- Open Xcode and navigate to Preferences.
- In the **Downloads** tab, install the Command Line Tools.

### Ubuntu

- Open the terminal.
- Run the following commands

```sh
sudo apt-get update
sudo apt-get install build-essential
```

**Note**: The `sudo` command is used to run the subsequent commands with administrative privileges, which may require you to enter your password.

### Windows

To install C on Windows, we'll use the MinGW-w64 development environment, which provides a Windows port of GCC.
Follow these steps:

On Windows, you can use Chocolatey to install the MinGW-w64 development environment, which provides a Windows port of GCC. Here's how you can do it:

- Open the command prompt or PowerShell with administrative privileges.
- Install Chocolatey by [following the instructions on the official Chocolatey website](https://chocolatey.org/install).
- Once Chocolatey is installed, run the following command to install MinGW-w64:

```powershell
choco install mingw
```

- During the installation, make sure to select the appropriate options as prompted.
- After the installation is complete, you should have the GCC compiler available on your system. You can verify the installation by running the command gcc --version in the command prompt or PowerShell.

#### Alternative installation on Windows OS

- Visit the [MinGW-w64 website and download the installer](https://www.mingw-w64.org/downloads/) for your system architecture (32-bit or 64-bit).
- Run the installer and ensure you select the **Add to PATH** option during installation.
- After installation, open the command prompt or PowerShell.
- Run the following command to verify the installation:

```sh
gcc --version
```

**Note**:

- `printf` is used to output (print) the result in the terminal.

## Writing and Compiling a C Program

Now that you have C installed, let's write a simple **`Hello, World!`** program and compile it. Follow the steps below:

- Create a file named `hello.c` and paste (right click) the following code into it and save (based on the editor):

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

```sh
vim hello.c
```

Save file:

- `:wq`
- `Enter` or `Return`

or

```sh
nano hello.c
```

Save file:

- `Ctrl + O Ctrl + C Ctrl + X`
- `Y`
- `Enter` or `Return`

or

```sh
emacs -Q -nw hello.c
```

Save file:

- `Ctrl + X Ctrl + S`
- `Ctrl + X Ctrl + C`
- Open the terminal or command prompt and navigate to the directory where the `hello.c` file is located.
- Use the `gcc` command to compile the program and generate an executable file:

```sh
gcc hello.c -o hello
```

The `-o` option specifies the output file name (in this case, `hello`).

- Run the program by executing the generated executable file:

```sh
./hello
```

You should see the output **`Hello, World!`** displayed in the terminal or command prompt.

## Conclusion

Congratulations! You've learned how to create directories, check if C is installed, install C if needed, and write a simple C program. This knowledge forms the foundation for your C programming journey. As you progress, you can explore more complex programs and dive deeper into the language's capabilities. Have fun coding and building amazing software with C! If you have any further questions, feel free to ask.

---

## References

- [Learn C - Free Interactive C Tutorial](https://www.learn-c.org/)
- [Learn C Programming - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/)
- [C Programming - GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/)
- [C Programming - Codecademy](https://www.codecademy.com/learn/learn-c)

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

---

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
