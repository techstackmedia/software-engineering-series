# Getting Started with C Programming: Compiling Programs

![Getting Started with C Programming: Compiling Programs Cover](https://res.cloudinary.com/bizstak/image/upload/v1687113876/GitHub_Cover_adljbk.png)

## Introduction

C programming is a versatile language that allows you to build a wide range of applications. Whether you're a beginner or an experienced programmer, you must know how to set up your development environment and start with basic programming tasks. In this guide, we'll walk you through the process of creating directories and checking for the installation of C on different operating systems. We'll also cover the steps to install C if it's not already available. Finally, we'll demonstrate how to write and compile a simple `Hello, World!` program in C. Let's get started!

## Code Snippet

Check out the [complete code on GitHub Gist](https://gist.github.com/techstackmedia/34430b174cdaee1e6681371aa85c4529).

## Installing Choco

If this is not your first time using Chocolatey or Chocolatey is already installed on your Windows Operating System skip this section.

To install Chocolatey, follow these steps:

1. Search for PowerShell and run it as an administrator on Windows.

2. Go to the Chocolatey [installation page](https://chocolatey.org/install).

3. If this is your first time installing Chocolatey on your operating system, execute the following command in your terminal, based on the instructions provided on the installation page:

```powershell
Get-ExecutionPolicy
```

* If the output is "Restricted", enter one of the commands below:

```powershell
Set-ExecutionPolicy AllSigned
```

or

```powershell
Set-ExecutionPolicy Bypass -Scope Process
```

* Regardless of whether "Restricted" was the previous output or not, run the following command (copy and paste it into your terminal):

```powershell
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

* If there are no errors, check if Chocolatey was successfully installed by running the following command:

```powershell
choco
```

If the output displays the version of Chocolatey you are using, it means the installation was successful.

## Creating a Directory

To begin, let's create a directory named `c-programming` using the command line. Follow the instructions below based on your operating system:

* Open the command prompt or PowerShell.

* Run the following commands:

```sh
mkdir basic-programming
```

```sh
mkdir basic-programming/c-programming
```

* change directory to `c-programming`

```sh
cd basic-programming/c-programming
```

## Checking if C is Installed

Before you start writing C programs, it's important to check if C is installed on your system. You can verify this by using the `gcc` or `cc` command, a popular C compiler. Follow the steps below:

* Open the terminal.

* Run the following command:

```sh
gcc --version
```

> **Note:** You may also include the extension to `gcc`. That is `gcc` is the same as `gcc.exe`.

```sh
gcc.exe --version
gcc.exe input.c -o output.exe # optionally omit the .exe
```

If C is installed, the version information will be displayed. Otherwise, you may be prompted to install the necessary tools or package. For example, for Linux, if `gcc` is not installed, running `gcc --version` in the terminal typically results in an error message like this:

```sh
The program 'gcc' is currently not installed. You can install it by typing:
sudo apt install gcc
```

For Windows, the error may look like this shown below:

```sh
'gcc' is not recognized as an internal or external command, operable program or batch file.
```

For macOS, the error may look like this shown below:

```sh
-bash: gcc: command not found
```

### `gcc` or `cc`

* In the article, the `gcc` command will be primarily used for checking the version of the C compiler and compiling C programs. However, it is worth noting that `cc` can be used as an alternative to `gcc` for the same purposes.

* While `gcc` is commonly used as the command-line interface to the GNU Compiler Collection, including the C compiler, `cc` is often set as a symbolic link or alias to `gcc`. Therefore, both commands essentially serve the same purpose and can be used interchangeably in most cases.

The choice between using `gcc` or `cc` may depend on personal preference or specific system configurations. However, in the context of the article, it is safe to assume that the `gcc` command will be predominantly used while acknowledging that the cc command could be used as an alternative.

## Installing C

If C is not installed on your system, follow the appropriate instructions based on your operating system:

### General Installation (VSCode)

* If you prefer to use VSCode, you can [install it](https://code.visualstudio.com/) by using a package manager specific to your operating system. For Windows, you can use Chocolatey by running the command `choco install vscode`. macOS users can use brew with the command `brew install --cask visual-studio-code`. Ubuntu users can use sudo with the command `sudo apt install code`.

* After installing VSCode, you should install the following extensions: [C/C++ Extension Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) and [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner).

* After the installation is complete, you can launch Visual Studio Code by searching for it in the applications menu or by running the `code` command in the terminal (`code` and click `Enter` or `Return`). Once Code Runner is installed, you will see a play icon beside which is a dropdown.

* Click on the play dropdown icon. See the image below:

[![A Snapshot Showing How to Run C with VSCode Code Runner Extension](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/m12c6oozcs2ynaeaxtrg.png align="left")](https://cdn.hashnode.com/res/hashnode/image/upload/v1687227787422/0bbf08f3-aac1-43ad-af49-42f60e1ed76c.png?auto=compress,format&format=webp)

* Open the terminal by pressing `Ctrl + J`.

* Click the option that says **Run C/C++**.

[![run C with VSCode Code runner extension](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/fqv66p5pt8c9duecuuog.png align="left")](https://cdn.hashnode.com/res/hashnode/image/upload/v1687358890481/be5f2e23-8491-4fb2-81dc-6b3368be189b.png?auto=compress,format&format=webp)

* From the debug configuration options, select the option to build and debug an active file.

[![build and run in C](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/0kp20mgbcy78ounke5ls.png align="left")](https://cdn.hashnode.com/res/hashnode/image/upload/v1687357930679/b02832aa-953f-4eaa-bdd0-ddacc4c73e7a.png?auto=compress,format&format=webp)

You will see the result `Hello, World!` In your terminal. Notice the new executable file created during execution - `hello.exe`

> **Note:** that the Keyboard shortcut is `Ctrl + Shift + B`.

[![C executable file in vscode](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/enivsygnbmx4jykexu1q.png align="left")](https://cdn.hashnode.com/res/hashnode/image/upload/v1687359230393/93476ad3-5fc3-4367-a40b-24f25da03c54.png?auto=compress,format&format=webp)

Now that you have done the configuration, the next time you want to run a C program just click on the play button or use the keyboard shortcut `Ctrl + Alt + N`.

[![run executable file using the play button](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/13pfq91ln5vjf9ofs2lm.png align="left")](https://cdn.hashnode.com/res/hashnode/image/upload/v1687363385861/34253899-48e6-420f-8cb8-93e1cbb63bdf.png?auto=compress,format&format=webp)

### Issue

* If the installation doesn't work for you, go to the [VS Code download page](https://code.visualstudio.com/download) and click the download button based on your operating system - macOS, Linux, Windows and install (click on the executable file after download - accept all default settings).

* If the problem persists, [download and install Codeblocks](https://www.codeblocks.org/downloads/).

* Alternatively, use the [online Replit text editor](https://replit.com/@OsagieNoah/getting-started#main.c).

> Note: You can also [try VSCode in the browser](https://vscode.dev) and still follow along the course.

### macOS

On macOS, Homebrew can be used to install C-related tools and libraries. However, Homebrew itself is not specifically used to install the C language since macOS already includes the Clang compiler, which supports C. Here's how you can install Homebrew and verify the availability of Clang:

* Open the terminal.

* Install Homebrew by running the following command.

On macOS, `brew` might be pre-installed on your system, verify by running the command below:

```bash
brew -v
```

If it is not installed or it shows an error, run the command below:

```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

* After Homebrew is installed, you can install additional C-related tools and libraries if needed by using Homebrew commands. For example, to install the GNU Compiler Collection (GCC), you can run the following command:

```sh
brew install gcc
```

* To verify the availability of Clang, which comes preinstalled on macOS, run the following command:

```sh
clang --version
```

Remember, on macOS, the default compiler is Clang, which supports C and other programming languages. If you install GCC using Homebrew, you can use it as an alternative to Clang.

#### Alternative installation on macOS

* Install Xcode from the App Store.

* Open Xcode and navigate to Preferences.

* In the **Downloads** tab, install the Command Line Tools.

### Ubuntu

* Open the terminal.

* Run the following commands

```sh
sudo apt-get update
sudo apt-get install build-essential
```

> **Note:** The `sudo` command is used to run the subsequent commands with administrative privileges, which may require you to enter your password.

### Windows

To install C on Windows, we'll use the MinGW-w64 development environment, which provides a Windows port of GCC. Follow these steps:

On Windows, you can use Chocolatey to install the MinGW-w64 development environment, which provides a Windows port of GCC. Here's how you can do it:

* Open the command prompt or PowerShell with administrative privileges.

* Install Chocolatey by [following the instructions on the official Chocolatey website](https://chocolatey.org/install).

* Once Chocolatey is installed, run the following command to install MinGW-w64:

```powershell
choco install mingw
```

* During the installation, make sure to select the appropriate options as prompted.

For example, if asked to run the script, type `a` or `all`. It means you want to run all scripts.

```powershell
Do you want to run the script?([Y]es/[A]ll - yes to all/[N]o/[P]rint): a
```

* After the installation is complete, you should have the GCC compiler available on your system. You can verify the installation by running the command `gcc --version` in the command prompt or PowerShell.

#### Alternative installation on Windows OS

* Visit the [MinGW-w64 website and download the installer](https://www.mingw-w64.org/downloads/) for your system architecture (32-bit or 64-bit).

* Run the installer and ensure you select the **Add to PATH** option during installation.

* After installation, open the command prompt or PowerShell.

* Run the following command to verify the installation:

```sh
gcc --version
```

> **Note:** `printf` is used to output (print) the result in the terminal.

## Writing and Compiling a C Program

Now that you have C installed, let's write a simple `Hello, World!` program and compile it. Follow the steps below:

* Create a file named `hello.c` and paste (right click) the following code into it and save (based on the editor):

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

* `:wq`

* `Enter` or `Return`

or

```sh
nano hello.c
```

Save file:

* `Ctrl + O Ctrl + C Ctrl + X`

* `Y`

* `Enter` or `Return`

or

```sh
emacs -Q -nw hello.c
```

It is the same as `emacs hello.c` except that it might open the GNU graphical interface:

```sh
emacs hello.c
```

Save file:

* `Ctrl + X Ctrl + S`

* `Ctrl + X Ctrl + C`

* Open the terminal or command prompt and navigate to the directory where the `hello.c` file is located.

* Use the `gcc` command to compile the program and generate an executable file:

```sh
gcc hello.c -o hello
```

or

```sh
gcc hello.c -o hello.exe
```

The `-o` option specifies the output file name (in this case, `hello`).

* Run the program by executing the generated executable file:

```sh
./hello
```

or

```sh
./hello.exe
```

You should see the output `Hello, World!` displayed in the terminal or command prompt.

![executing a c program](<https://dev-to-uploads.s3.amazonaws.com/uploads/articles/z7jkz5iqhp6gj8q2wglq.png> align="left")

## Practice

Assuming you [have an account](https://replit.com/signup) or are already [logged in](https://replit.com/login) on Replit.

* [Try the Replit](https://replit.com/@OsagieNoah/helloWorldC#hello.c) Editor online.

* Click the **Fork** button.

* Edit the current code.

## Conclusion

Congratulations! You've learned how to create directories, check if C is installed, install C if needed, and write a simple C program. This knowledge forms the foundation for your C programming journey. As you progress, you can explore more complex programs and dive deeper into the language's capabilities. Have fun coding and building amazing software with C! If you have any further questions, feel free to ask.

---

## References

* [Learn C - Free Interactive C Tutorial](https://www.learn-c.org/)

* [Learn C Programming - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/)

* [C Programming - GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/)

* [C Programming - Codecademy](https://www.codecademy.com/learn/learn-c)

---

**Happy Coding!!!**

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)

---
