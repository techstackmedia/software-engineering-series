# Exploring File Contents with Common Commands in Linux

![Exploring File Contents with Common Commands in Linux Cover](https://res.cloudinary.com/bizstak/image/upload/v1685265836/GitHub_Cover_vn0xjy.png)

## Commands to Work with File Contents

In Linux, there are several commands you can use to examine the contents of text files. Let's take a closer look at these commands, their functionalities, and how they can be used effectively.

You can use the following commands to look at the contents of text files:

- `head`
- `tail`
- `cat`
- `less`
- `echo`
- `wc`
- `grep`

### `head`

The `head` command displays the first part of a file. By default, it shows the first 10 lines, but you can specify a different number using the `-n` flag.

```sh
head <filename>
```

```sh
head README.md
```

If you want to specify a different number `-n` of lines to show, run the code in the format

```sh
head -n <number of lines> <filename>
```

```sh
head -n 6 README.md
```

### `tail`

The `tail` command prints the last 10 lines of a file. You can also customize the number of lines to be displayed by using the `-n` flag. Additionally, the `-f` flag allows you to continuously monitor changes made to a file, which is useful for log files.

```sh
tail <filename>
```

```sh
tail README.md
```

If you want to specify a different number `-n` of lines to show, run the code in the format

```sh
head -n <number of lines> <filename>
```

```sh
tail -n 5 README.md
```

### `cat`

The `cat` command is versatile and can be used for multiple purposes. Primarily, it prints the content of a file to the standard output. It can also be used to concatenate files or create new ones.

Printing the content of a file:

```sh
cat <filename>
```

```sh
cat README.md
```

Concatenating multiple files into a new file:

```sh
cat doc.txt contribute.txt > combine.txt
```

Creating a new file:

```sh
cat > newfile.txt
```

### `less`

The `less` command provides an interactive and user-friendly way to view file content. It displays file contents in a paginated manner, allowing you to scroll, search, and navigate easily.

```sh
less README.md
```

Useful commands within less:

- b: Scroll up one page
- G: Go to the end of the file
- g: Go to the beginning of the file
- q: Quit the command

### `echo`

The `echo` command prints the argument passed to it to the output.

```sh
echo 'Hello world'
```

### `wc`

The `wc` command, short for word count, provides information about a given input, such as the number of lines, words, and bytes in the content.

Options for `wc`:

`-l`: Prints the newline count
`-m`: Prints the character count
`-c`: Prints the byte count
`-w`: Prints the word count

For example:

```sh
wc -l README.md
```

### `grep`

The `grep` command is a powerful text manipulation tool that allows you to filter the content of a file based on a specific pattern. It displays only the lines that match the given pattern.

For instance, if you want to see all lines in a file that include the word "command," you can use `grep` in combination with `cat`:

```sh
cat README.md | grep command
```

In this command, the output of `cat README.md` is piped (`|`) to `grep command` for further filtering.

These commands provide a solid foundation for examining and manipulating file content in Linux. With their flexibility and varied functionalities, you can efficiently navigate and process text files according to your needs.

Please note that the examples provided here are simplified, and there are many more options and use cases for each command. Further exploration and practice will enhance your understanding and proficiency in working with these commands.

Let me know if you have any questions or need further assistance!

---

## References

- [Hashnode](https://blog.techstackmedia.com/exploring-file-contents-with-common-commands-in-linux)
- [Dev.to](https://dev.to/bello/exploring-file-contents-with-common-commands-in-linux-3jop)

---

Click on the button dropdown to see my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
