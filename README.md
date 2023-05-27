# Files Manipulation

![Files Manipulation](https://res.cloudinary.com/bizstak/image/upload/v1685178632/GitHub_Cover_ezue6o.png)

When working with files and directories, there are basic commands that can be used for manipulation. These commands include:

- `cp` (copy)
- `mv` (move)
- `rm` (remove)
- `mkdir` (make directory)

Before we delve into these commands, let's create a new file. Name it `filename.txt` and add some random text to it. Make sure you navigate to its directory using your terminal.

## `cp` - Copy

The `cp` command is used to copy files or directories from one location to another. It creates a duplicate of the specified file or directory, which can be placed in the same directory or a different one. The common format for the `cp` command is:

```sh
cp <file_name> <new_file_name>
```

For example, in the code below, `README.md` already exists. We will create `contribute.md` and copy all the contents from `README.md` into `contribute.md`:

```sh
cp README.md contribute.md
```

The `cp` command can also be used to copy multiple files. Make sure `file_name1`, `file_name2`, etc., exist:

```sh
cp  <file_name1> <file_name2> ...<new_file_name2> 
```

In the code below, `README.md` and `contribute.md` already exist:

```sh
cp  README.md contribute.md support.md 
```

If you want to copy all the contents from all the `.md` files in a directory to a destination file, you can use the wildcard `*`:

```sh
cp *.md <destination_file_name>
```

For example:

```sh
cp *md teams.md
```

To copy a file to a specific directory, create a new directory or folder in your root directory and run the command in the following format:

```sh
cp <file_name> <directory/new_file_name>
```

For example:

```sh
cp README.md folder/contribute.md
```

Just like the commands above, you can add the `-i` flag to the cp command. When used, it prompts for confirmation before overwriting an existing file.

To create a new file and put content in it, which is different from an already existing file:

```sh
cp -i <file_name1> <file_name2>
```

For example:

```sh
cp -i README.md contribute.md
```

When you run the above code in your terminal, you will be prompted if you want to overwrite the file (if `<file_name2>`already exists). You can enter `y` (or `yes`) to override the content of `<file_name2>` with the content of `<file_name1>`. Enter `n` (or `no`) or just click the enter button if you do not want to overwrite it.

```sh
cp: overwrite 'support.md'? 
```

When you need to copy the contents of an existing directory `<dir1>` to a new directory `<dir2>`, including all subdirectories and files, you can utilize the `cp` command with the `-R` flag. This flag enables recursive copying, ensuring that the entire directory structure is preserved.

Here's how you can accomplish this:

```sh
cp -R <dir1> <dir2>
```

In this command, `<dir1>` represents the source directory whose contents you want to copy, and `<dir2>` is the destination directory where you want to create the copied contents.

The `-R` flag tells the `cp` command to perform a recursive copy, ensuring that all subdirectories and files within `<dir1>` are copied to `<dir2>`. If `<dir2>` does not exist, it will be created during the copying process.

It's important to note that the `-R` flag is crucial when you want to copy directories, as it allows for the copying of both the directory's contents and its subdirectories.

By utilizing the `cp` command with the `-R` flag, you can efficiently copy the entire contents of one directory to another, preserving the structure and ensuring that all files and subdirectories are successfully copied.

Suppose you have an existing directory named `documentation`, and you want to move all of its files and subdirectories to a new directory called `reserve`. You can achieve this by using the `cp` command with the `-R` flag for recursive copying.

```sh
cp -R documentation reserve
```

## `mv` - Move

The `mv` command not only allows you to move individual files but also provides the flexibility to move multiple files into another directory (folder) simultaneously.

To move multiple files to a destination directory, you can use the following syntax:

```sh
mv <file1> <file2> <destination_directory>
```

In this example, both `<file1>` and `<file2>` will be moved to `<destination_directory>`. The files will no longer exist in their original location and will be consolidated in the specified `<destination_directory>`.

For instance, consider the command:

```sh
mv file1 file2 destination_folder
```

After executing this command, both `file1` and `file2` will be moved to the `destination_folder`. These files will no longer be present in their original location, ensuring a streamlined organization of your files.

The `mv` command's ability to move multiple files simultaneously simplifies the process of managing and rearranging files within your system.

Note you can use the wildcard pattern `*` and the `i` flag if you wish to:

```sh
mv -i *.txt backup
```

Using the wildcard pattern * in combination with the mv command allows for efficient and streamlined file movements, especially when dealing with large numbers of files.

```sh
mv doc/accordion.md documentation
```

In this case, the file `accordion.md` located in the doc directory will be moved to the `documentation` directory. The file will be deleted from the `doc` directory, and if the `documentation` directory does not exist, it will be created automatically.

The `mv` command is a versatile tool for organizing files and directories within your system. It allows you to seamlessly move files between directories, ensuring that your file structure remains well-organized and up-to-date.

## `rm`- Remove

The `rm` command is used to delete files and directories from your system. It is important to exercise caution when using this command, as deleted files or folders cannot be recovered.

To remove a single file, use the following command:

```sh
rm <file_name>
```

Alternatively, you can use the -i flag to be prompted for confirmation before deleting a file or folder:

```sh
rm -i <file_name>
```

For example, to remove the file "accordion.md" located in the "doc" directory, you can run:

```sh
rm -i doc/accordion.md
```

The prompt will ask the following question:

```sh
rm: remove regular file 'doc/accordion.md'? 
```

If you type `y` (or `yes`), the file will be deleted.

To delete an entire folder or directory, you need to use the -r flag, which stands for "recursive":

```sh
rm -r <dir>
```

For instance, to delete the "folder1" directory and its contents, you can execute:

```sh
rm -r folder1
```

If you wish to delete multiple folders or directories, you can use either the `-r` or `-rf` flag:

```sh
rm -r <dir1> <dir2> ...
```

```sh
rm -rf <dir1> <dir2> ...
```

It's important to note that the `rm -rf` command is more aggressive and powerful than `rm -r`. It bypasses confirmation prompts and forcefully removes directories and their contents. This option should be used with caution to prevent accidental data loss.

Remember to double-check your commands before executing them to ensure you are deleting the intended files or directories.

## `mkdir` - Make Directory

The `mkdir` command is used to create a new directory.

To create a single directory, use the following command:

```sh
mkdir <dir_name>
```

For example, to create a directory named "folder", you can run:

```sh
mkdir folder
```

You can also create multiple directories at once by specifying their names:

```sh
mkdir <dir1> <dir2> ...
```

For example, to create directories named "folder1", "folder2", and "folder3", you can execute:

```sh
mkdir folder1 folder2 folder3
```

It is important to note that if a directory with the same name already exists, the `mkdir` command will generate an error. To avoid this, you can use the `-p` flag, which stands for "parents" and allows the creation of nested directories. This way, if any intermediate directories are missing, they will be created as well.

```sh
mkdir -p <dir_path>
```

For instance, to create a directory named "nested" inside a directory named "parent" (assuming "parent" doesn't exist yet), you can use:

```sh
mkdir -p parent/nested
```

This will create both the "parent" and "nested" directories.

Remember to choose meaningful and descriptive names for your directories to keep your file system organized and easily navigable.

---

## References

- [Hashnode](https://blog.techstackmedia.com/files-manipulation)
- [Dev.to](https://dev.to/bello/files-manipulation-50j7)

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)

