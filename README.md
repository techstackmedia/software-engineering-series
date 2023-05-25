# Shell Navigation

## Common Commands

- `pwd` (print working directory), `cd` (change directory), `ls` (list file and directory)

## File system

- In a tree-like pattern of directory (folder)
- A directory may contain files and subdirectories
- The first directory in the file system is called the **root directory**

One important difference between Window and Unix-like os like Linux is that Linux does not employ the concept of drive letters. While windows drive letters split the file system into a series of different trees (one for each device), Linux always has a single tree.

### `pwd`

The directory we are standing in is called the working directory. To see the name of the working directory, we use the pwd command

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

The `.` notation refers to the working directory itself and `..` notation refers to the working directory's parent directory

```sh
cd ..
```

```sh
cd ../foldername
```

If we type `cd` followed by nothing, `cd` will change the working directory to our home directory.

A relative shortcut is to type `cd ~user_name`.

File names that begin with a period character are hidden. This only means that `ls` will not list them unless we say `ls -la`.

- Example is `.git`

File names in **Linux**, like Unix, are **case sensitive**. The file names _File1_ and _file 1_ refer to different files.

Linux has no concept of a **file extension** like Windows system. You may name files any way you like. However, while Linux itself does not care about file extensions, many application programs do.

Though **Linux supports long file names** which may contain embedded spaces and punctuation, limit the punctuation characters to period, dash and underscore. **Use underscores instead of spaces** to represent spaces between words in a file name.

### ls

#### `ls -l`

List the files in the working directory in long format

```sh
ls -l
```

#### `ls -l /etc /bin`

List the files in the /bin directory and the/etc directory in long format

```sh
ls -la ..
```

```sh
ls -la /foldername
```

List all files (even the ones with names beginning with a period character, which are normally hidden) in the parent of the working directory in long format.

Most commands operate like this:

```sh
command -option arguments
```

---

Click on the button dropdown to see my notes from chapter to chapter (branch to branch) and feel contribute. It is open source after all.

Feel free to contribute. You can edit this file

[Edit on GitHub](https://github.com/techstackmedia/software-engineering-series/edit/main/README.md)

---

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
