# Mastering Linux Command Line

![Mastering Linux Command Line Cover Image](https://res.cloudinary.com/bizstak/image/upload/v1685209785/GitHub_Cover_audops.png)

The Linux command line is a powerful tool for executing tasks and managing your system efficiently. However, to navigate the command line with confidence, it's essential to identify the type of command you're working with. Linux offers several methods to determine the nature of a command, such as the `type`, `which`, `help`, and `man` commands.

In this comprehensive guide, we'll explore these command identification techniques and delve into the documentation available for each command type. By understanding how to identify commands accurately and access their documentation, you'll gain a deeper understanding of the command line ecosystem and unleash the full potential of Linux command line tools.

Let's dive in and discover how these methods can enhance your command line proficiency.

- `type`
- `which`
- `help`
- `man`

## Command Identification

### The `type` Command

The `type` command serves as a shell built-in and reveals the nature of a given command to be executed by the shell. Its usage is as follows:

```sh
type [command]
```

The "type" command serves as a shell built-in and reveals the nature of a given command to be executed by the shell. Its usage is as follows:

```sh
type [command]
```

By replacing `[command]` with the name of the command in question, we can unveil its classification. Let's explore a few examples:

```sh
type ls
```

The output is shown below

```sh
ls is aliased to `ls --color=auto'
```

In the above case, we discover that the "ls" command is an alias with the additional option "--color=auto". This knowledge explains why the output of "ls" is displayed in color.

```sh
type cp
```

The output is shown below

```sh
cp is hashed (/usr/bin/cp)
```

For the `cp` command, the output reveals that it is an executable program located at `usr/bin/cp`. Such insights allow us to better understand the behavior and functionality of various commands.

The `which` Command:
In scenarios where multiple versions of an executable program exist on a system, the `which` command proves invaluable. Its purpose is to determine the precise location of a given executable. Usage is as follows:

```sh
which [command]
```

By replacing `[command]` with the desired command name, we can ascertain its exact location. It's important to note that `which` exclusively works for executable programs and cannot identify built-ins or aliases acting as substitutes.

By utilizing the `type` and `which` commands, we can effectively identify the type of command in question and gain insights into its execution within the Linux environment. This knowledge equips us with a deeper understanding of the command line ecosystem.

### The `help` Command

The bash shell incorporates a built-in help facility that provides documentation for each shell buil-tin. To access it, simply type "help" followed by the name of the shell built-in. Optionally, the "-m" option can be added to modify the output format. Let's consider an example:

```sh
help -m cd
```

Upon executing the above command, the following information about the "cd" command will be displayed:

```sh
NAME
    cd - Change the shell working directory.

SYNOPSIS
    cd [-L|[-P [-e]] [-@]] [dir]

DESCRIPTION
    Change the shell working directory.

    Change the current directory to DIR.  The default DIR is the value of the
    HOME shell variable.

    The variable CDPATH defines the search path for the directory containing
    DIR.  Alternative directory names in CDPATH are separated by a colon (:).
    A null directory name is the same as the current directory.  If DIR begins
    with a slash (/), then CDPATH is not used.

    If the directory is not found, and the shell option `cdable_vars' is set,
    the word is assumed to be  a variable name.  If that variable has a value,
    its value is used for DIR.

    Options:
      -L        force symbolic links to be followed: resolve symbolic
                links in DIR after processing instances of `..'
      -P        use the physical directory structure without following
                symbolic links: resolve symbolic links in DIR before
                processing instances of `..'
      -e        if the -P option is supplied, and the current working
                directory cannot be determined successfully, exit with
                a non-zero status
      -@        on systems that support it, present a file with extended
                attributes as a directory containing the file attributes

    The default is to follow symbolic links, as if `-L' were specified.
    `..' is processed by removing the immediately previous pathname component
    back to a slash or the beginning of DIR.

    Exit Status:
    Returns 0 if the directory is changed, and if $PWD is set successfully when
    -P is used; non-zero otherwise.

SEE ALSO
    bash(1)

IMPLEMENTATION
    GNU bash, version 5.1.16(1)-release (x86_64-pc-msys)
    Copyright (C) 2020 Free Software Foundation, Inc.
    License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
```

Note: In command syntax descriptions, square brackets denote optional items, while a vertical bar indicates mutually exclusive choices. For instance, the notation for the "cd" command:

```sh
cd [-L|-P] [dir]
```

This indicates that the `cd` command can be optionally followed by either `-L` or `-P` and further optionally by the argument `dir`.

## Command Documentation

### The "--help" Option

Many executable programs support a `--help` option, which provides a detailed description of the command's syntax and supported options. For instance:

```sh
mkdir --help
```

Executing the command above will display the following information about the `mkdir` command:

```sh
Usage: mkdir [OPTION]... DIRECTORY...
Create the DIRECTORY(ies), if they do not already exist.

Mandatory arguments to long options are mandatory for short options too.
  -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask
  -p, --parents     no error if existing, make parent directories as needed
  -v, --verbose     print a message for each created directory
  -Z                   set SELinux security context of each created directory
                         to the default type
      --context[=CTX]  like -Z, or if CTX is specified then set the SELinux
                         or SMACK security context to CTX
      --help     display this help and exit
      --version  output version information and exit

GNU coreutils online help: <https://www.gnu.org/software/coreutils/>
Full documentation <https://www.gnu.org/software/coreutils/mkdir>
or available locally via: info '(coreutils) mkdir invocation'
```

Although not all programs support the `--help` option, it is worth attempting as it often provides similar usage information, even if it results in an error message.

## The `man` Command

Note that the command from man is by default only available on Unix OS. Most command-line executable programs offer comprehensive documentation known as a manual or man page. The "man" command enables us to view these pages conveniently. Usage of the "man" command is as follows:

```sh
man program
```

Replace `program` with the name of the command to access its manual page. Man pages typically include a title, a synopsis of the command's syntax, a description of its purpose, and a list and explanation of each option. However, they are primarily designed as references rather than tutorials. Let's view the man page for the `ls` command:

```sh
man ls
```

On most Linux systems, the `man` command employs the `less` program to display the manual page, allowing the use of familiar `less` commands for navigation.

By utilizing the `help`, `--help`, and `man` commands, we can access comprehensive documentation for each command type, enabling us to leverage the full potential of Linux command line tools. These resources facilitate efficient command usage, ensuring optimal productivity within the Linux environment.

### Note

On your system, various software packages are installed, each accompanied by documentation files located in the /usr/share/doc directory. These files primarily exist in plain text format, which can be easily accessed and viewed using the 'less' command. However, there are instances where certain files are in HTML format, enabling them to be conveniently viewed using a web browser. It is worth noting that some files in this directory may be compressed with the gzip compression program, denoted by the ".gz" extension. To handle such compressed text files, the gzip package provides a specialized version of 'less' called 'zless', which allows the contents of gzip-compressed files to be displayed seamlessly.

## References

- [Hashnode](https://blog.techstackmedia.com/files-manipulation)
- [Dev.to](https://blog.techstackmedia.com/mastering-linux-command-line)

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
