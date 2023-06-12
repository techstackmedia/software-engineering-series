# Shell Navigation

![Shell Navigation Cover](https://res.cloudinary.com/bizstak/image/upload/v1685174291/GitHub_Cover_Image_jvvxr9.png)

## Installation

Search **terminal** on your Operating system, but if you are using Windows, don't use the default Windows terminal. Check out the [video on how to install a terminal emulator](https://www.youtube.com/watch?v=N-Eu7g8Zv7o&t=2s). For Mac users, you don't need installation, use the default terminal.

Common terminals to use are:

- [Cmder](https://cmder.app)
- [Git Bash](https://git-scm.com/downloads)
- [Hyper](https://hyper.is/#installation)
- [iTerm2](https://iterm2.com/downloads.html)

## Common Commands

- `pwd` (print working directory) 
- `cd` (change directory)
- `ls` (list file and directory)
- `touch`

## File system

- In a tree-like pattern of the directory (folder)
- A directory may contain files and subdirectories
- The first directory in the file system is called the **root directory**

One important difference between Windows and Unix-like OS like Linux is that Linux does not employ the concept of drive letters. While Windows drive letters split the file system into a series of different trees (one for each device), Linux always has a single tree.

### `pwd`

The acronym **PWD** stands for _Present Working Directory_. It is commonly used in the context of command-line interfaces and operating systems to refer to the current directory in which a user is working. The `pwd` command is often used to retrieve and display the full path of the current directory. That is the directory we are standing in is called the working directory. To see the name of the working directory, we use the `pwd` command.

### `cd`

1. Absolute pathname
2. Relative pathname

#### Absolute pathname

Example

```sh
cd /user/bin
```

```sh
cd /foldername
```

#### Relative pathname

The `.` notation refers to the working directory itself and `..` notation refers to the working directory's parent directory.

```sh
cd ..
```

```sh
cd ../foldername
```

If we type `cd` followed by nothing, `cd` will change the working directory to our home directory.

A relative shortcut is to type `cd ~user_name`.

File names that begin with a period character are hidden. This only means that `ls` will not list them unless we say `ls -la`.

- Example is `.git`.

File names in **Linux**, like Unix, are **case sensitive**. The file names _File1_ and _file 1_ refer to different files.

Linux has no concept of a **file extension** like Windows system. You may name files any way you like. However, while Linux itself does not care about file extensions, many application programs do.

Though **Linux supports long file names** which may contain embedded spaces and punctuation, limit the punctuation characters to period, dash and underscore. **Use underscores instead of spaces** to represent spaces between words in a file name.

### `ls`

#### `ls -l`

List the files in the working directory in long format.

```sh
ls -l
```

#### `ls -l /etc /bin`

List the files in the `/bin` directory and the `/etc` directory in long format.

```sh
ls -la ..
```

```sh
ls -la /foldername
```

List all files (even the ones with names beginning with a period character, which are normally hidden) in the working directory's parent in a long format.

Most commands operate like this:

```sh
command -option arguments
```

#### A Closer Look at Long Format

For example, try `ls -la`, you will get more information about the file.

![show ls -la command possible information](https://res.cloudinary.com/bizstak/image/upload/v1685049199/ls-la-command-info_kgiglf.png)

If you run the command `ls -l` you will get the output that looks like this:

```sh
total 4
-rw-r--r-- 1 TechstackMedia - Osagie 197610 3092 May 25 14:28 README.md
```

Let's break down the output:

1. `total 4`: This line represents the total number of 1KB blocks used by the files listed below it. In this case, the total size is 4KB.

2. `-rw-r--r-- 1 TechstackMedia - Osagie 197610 3092 May 25 14:28 README.md`: This line represents the details of a specific file called README.md. Let's analyze each part:
   - `-rw-r--r--`: This section represents the file permissions. In this example, it indicates that the file is readable and writable by the owner (`rw-`), readable by the group (`r--`), and readable by others (`r--`).
   - `1`: The number 1 represents the number of hard links to the file. In this case, there is only one hard link pointing to the file.
   - `TechstackMedia`: This is the owner of the file. In this case, the file is owned by the user `TechstackMedia`.
   - `-`: This hyphen represents the group associated with the file. In this case, the group is not explicitly specified.
   - `Osagie`: This represents the group associated with the file. In this example, the group is `Osagie`.
   - `197610`: This indicates the file size in bytes. In this case, the file `README.md` is 3092 bytes.
   - `May 25 14:28`: This represents the file's last modification date and time.
   - `README.md`: This is the name of the file.

### `touch`

The `touch` command is a versatile and powerful tool that allows you to create and modify files with ease in various operating systems, including Linux, macOS, and Unix. Its simplicity and efficiency make it a fundamental command for managing files and timestamps.

One of the primary functions of the touch command is to create a new file. Using the command is as simple as typing touch followed by the desired filename. For example, to create a file called _example.txt_, you would execute the following command: 

```sh
touch example.txt
```

You can also specify the timestamp. In the example below a file named _custom.txt_ with a specific timestamp of _December 31, 2022, at 12:30 PM_, you would execute the following command:

```sh
touch -t 202312311230 custom.txt
```
In the `touch` command, the timestamp for the `-t` option follows a specific format: `[[CC]YY]MMDDhhmm[.ss]`.

Here's a breakdown of each component:

- `CC`: Represents the first two digits of the year (century).
- `YY`: Represents the last two digits of the year.
- `MM`: Represents the month (01-12).
- `DD`: Represents the day of the month (01-31).
- `hh`: Represents the hour in 24-hour format (00-23).
- `mm`: Represents the minute (00-59).
- `.ss`: (Optional) Represents the second (00-61).

In your example, the timestamp `202312311230` corresponds to the following components:

- `CC`: Not specified, assuming it is the current century.
- `YY`: `22` (indicating the year 2023).
- `MM`: `12` (indicating December).
- `DD`: `31` (indicating the 31st day of the month).
- `hh`: `12` (indicating 12 PM).
- `mm`: `30` (indicating 30 minutes).

This command will set the modification and access times of the `custom.txt` file to the specified timestamp, allowing you to manually define the file's timestamp.

### `less`

less is a program that lets us view text files. This is very handy since many of the files used to control and configure Linux are human-readable.

Click `q` to quit or keep clicking enter till you are done reading the file.

```sh
less text_file
```

```sh
less README.md
```

---

### References

[GitHub Repository](https://github.com/techstackmedia/software-engineering-series/tree/01-shell-navigation)

---



## References

- [Hashnode](https://blog.techstackmedia.com/shell-navigation)
- [Dev.to](https://dev.to/bello/shell-navigation-4j0f)

---

Click on the button dropdown to see my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
