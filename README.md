# A Comprehensive Guide to Git: Understanding Basic Concepts and Essential Commands

![A Comprehensive Guide to Git: Understanding Basic Concepts and Essential Commands Cover](https://res.cloudinary.com/bizstak/image/upload/v1685360412/GitHub_Cover_weeg2n.png)

## Introduction

Git has revolutionized the way developers collaborate and manage their code. Whether you're a beginner or an experienced developer, understanding the basic concepts and essential commands of Git is crucial for efficient version control. In this blog post, we'll explore the fundamental concepts of Git, including push, merge, branches, and more. We'll also provide code snippets to illustrate how these commands are used in practice. Let's dive in!

## Installation

For detailed instructions on installing Git, please refer to the [official Git website](https://git-scm.com/). However, if you're a Windows user, I'll provide you with a few commands to help you install Git.

### Steps

To install Chocolatey and use it to install Git, follow these steps:

1. Search for PowerShell and run it as an administrator on Windows.
2. Go to the Chocolatey [installation page](https://chocolatey.org/install).
3. If this is your first time installing Chocolatey on your operating system, execute the following command in your terminal, based on the instructions provided on the installation page:

```powershell
Get-ExecutionPolicy
```

- If the output is "Restricted", enter one of the commands below:

```powershell
Set-ExecutionPolicy AllSigned
```

or

```powershell
Set-ExecutionPolicy Bypass -Scope Process
```

- Regardless of whether "Restricted" was the previous output or not, run the following command (copy and paste it into your terminal):

```powershell
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

- If there are no errors, check if Chocolatey was successfully installed by running the following command:

```powershell
choco
```

If the output displays the version of Chocolatey you are using, it means the installation was successful.

- Now, search for the package you need (in this case, Git) by visiting the [package search page](https://community.chocolatey.org/packages). Once you find the Git package, execute the following command:

```powershell
choco install git
```

### Basic Concepts

Before we delve into the commands, let's quickly review some basic concepts of Git:

#### ls -la

The `ls -la` command (or `ls` on Windows) lists all files and directories, including hidden ones, in the current directory. It helps you get a comprehensive view of the files present.

#### git commit -m "commit msg" -m "desc. msg"

The `git commit` command records change to the repository. By specifying a commit message (`-m` flag), you provide a concise description of the changes made. It's good practice to include both a short commit message and a more detailed description.

### Generating SSH Keys

You can generate SSH keys to securely connect with remote repositories, such as GitHub. Here's a step-by-step guide:

#### Generate the SSH key

Use the `ssh-keygen` command to generate a new SSH key. For example:

```sh
ssh-keygen -t rsa -b 4096 -C "email@gmail.com"
```

Its output will look like below:

```sh
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/TechstackMedia - Osagie/.ssh/id_rsa):
```

Where it asks you to enter a file name, you can enter any file name of your choice but for the case of this tutorial enter `testkey` and press `Enter` or `Return`.

Now you will probably get another question as shown below:

```sh
Enter passphrase (empty for no passphrase):
```

It is asking you to provide a passphrase for encryption or decryption purposes. It is used to protect sensitive data, such as private keys or encrypted files.

You may click enter meaning `empty for no passphase` but it is generally recommended to set a strong passphrase to enhance the security of your sensitive data.  

#### Locate the key file

After generating the key, you can find it using the `ls` command combined with `grep`. For instance:

```sh
ls | grep testkey
```

Here, `testkey` is the file name containing the SSH key.

Note the `testkey` without the .pub, its content should not be shared with anyone because it is the key you use to interact with GitHub.

#### Copy the public key

The public key (with a `.pub` extension) is the key you'll upload to your GitHub interface. Use the following command to copy it to your clipboard:

Now in the terminal run:

```sh
type testkey.pub | clip
```

Or

```sh
cat testkey.pub # copy the entire public key
```

Alternatively, you can simply run the command below:

```sh
pbcopy < testkey.pub
```

You might get the error shown below:

```sh
'pbcopy' is not recognized as an internal or external command,
operable program or batch file
```

If this is the case for you it means you are not using Linux or macOS to run the command. You must likely be on a Windows Operating System or any other Operating System not supporting the command. In such cases use the first method, `cat testkey.pub` and copy whatever is the output or run `type testkey.pub | clip`.

#### Add the SSH key on GitHub

Navigate to your GitHub account's settings, select ["SSH and GPG keys"](https://github.com/settings/ssh/new), and add a new SSH key. Paste the copied key into the designated field. Don't forget to fill in the "Title" field.

#### Configure the local Git command interface

To ensure ssh-agent is running run the command:

```sh
eval "$(ssh-agent -s)"
```

#### Update the SSH agent

Now add your SSH private key to the `ssh-agent` as show below:

```sh
ssh-add testkey
```

The command above ensures that the local Git command interface recognizes the new key, run the following command.

### Pushing Changes to a Remote Repository

To push your local repository to a remote repository (e.g., GitHub), follow these steps:

#### Identify the remote repository

Use the `git remote -v` command to view the remote repositories connected to your local repository.

#### Set the upstream repository

When pushing for the first time, set the upstream repository with the `-u` or `--set-upstream` flag:

```sh
git push -u origin master
```

This tells Git to push to the specified repository by default.

#### Subsequent pushes

For subsequent pushes, you can use the simpler command `git push`, as Git remembers the upstream repository.

### Branches

Branches allow for parallel development and isolating specific features or fixes. Let's explore some common branch-related commands:

#### Creating a new branch

To create a new branch, use the `git checkout -b` command followed by the branch name. For example:

```sh
git checkout -b feature-readme-instructions
```

The command above does two actions, it creates a new branch called `feature-readme-instructions` and then checks out to that branch.

Below is the command breakdown:

```sh
git branch feature-readme-instructions
```

```sh
git checkout feature-readme-instructions
```

#### Switching between branches

To switch to a different branch, use the `git checkout` command followed by the branch name. For instance:

```sh
git checkout master
```

#### Viewing changes between branches

To see the code differences between the two branches, use the `git diff` command followed by the branch names:

```sh
git diff branchname
```

The `git diff` command shows the differences between the current branch and the specified branch.

#### Merging branches

To merge changes from one branch into another, use the `git merge` command followed by the branch name. For example:

```sh
git merge branchname
```

#### Deleting a branch

To delete a branch, use the `git branch -d` command followed by the branch name. For instance:

```sh
git branch -d branchname
```

### Resolving Merge Conflicts

Sometimes, when merging branches, conflicts may arise when Git cannot automatically merge the changes. Here's how to handle merge conflicts:

#### Committing all modified files

Use the `git commit -am "commit message"` command to commit all modified files, including those added to the repository.

Note that `git commit -am "commit message"` is the same as combining the two commands below:

```sh
git add -A
```

```sh
git commit -m "commit message"
```

`git add -A` is the same as `git add --all`. Most developers prefer using period in place of `--all` or `-A`.

```sh
git add .
```

#### Unstaging and removing specific files

To unstage and remove specific files, use the `git reset <filename>` command. If no filename is specified, `git reset` will show the files to be reset.

#### Undoing a commit

If you need to undo a commit, use the `git reset HEAD~1` command to move the pointer (`HEAD`) to the previous commit.

#### Resetting to a specific commit

To reset to a specific commit, use the `git reset <commit hash>` command, replacing `<commit hash>` with the hash of the desired commit.

#### Removing all commits and untracked files

In some cases, you may want to completely remove all commits and untracked files. Use `git reset --hard <commit hash>` to accomplish this.

### Collaboration with Forks and Pull Requests

When collaborating on open-source projects, forks and pull requests facilitate contribution. Here's an overview:

#### Forking a repository

To contribute to a repository, you can create a fork of the original repository. This creates a copy of the repository under your account.

#### Making changes and creating a pull request

After forking the repository, make your desired changes in the forked repository. Then, create a pull request to propose your changes to the original repository.

### Additional Useful Commands

### git clone

When cloning a repository in Git, there are a few different ways to specify the source repository. Here are the common methods to clone a repository using the `git clone` command:

#### Cloning via HTTPS

```sh
git clone https://github.com/user/repo.git
```

This method uses the HTTPS protocol to clone the repository. You need to replace `user` with the username and `repo` with the name of the repository you want to clone.

#### Cloning via SSH

```sh
git clone git@github.com:user/repo.git
```

This method uses the SSH protocol to clone the repository. Again, replace `user` with the username and `repo` with the repository name.

#### Cloning via Git Protocol

```sh
git clone git://github.com/user/repo.git
```

The Git protocol is a lightweight protocol specifically for Git. This method clones the repository using the Git protocol.

#### Cloning via Subversion (SVN) Bridge

```sh
git svn clone svn://svn.example.com/repo
```

If the repository is a Subversion (SVN) repository, you can use the `git svn clone` command to clone it. Replace `svn://svn.example.com/repo` with the URL of the SVN repository.

#### Cloning a Local Repository

```sh
git clone /path/to/repository
```

If the repository is already on your local machine, you can specify the local path to clone it.

#### Cloning a Bare Repository

```sh
git clone --bare https://github.com/user/repo.git
```

The `--bare` option is used to clone a repository as a bare repository, which means it will not have a working directory. This is useful when you only need the repository's history and don't plan on making changes directly in the cloned repository.

These are the main methods to clone a repository using the `git clone` command. Choose the appropriate method based on the type and location of the repository you want to clone.

#### Cloning Private Repository

When cloning a private repository on GitHub, you can use a personal access token (PAT) to authenticate and include it in the URL when using the `git clone` command. This allows you to securely clone the repository without having to enter your GitHub username and password.

The syntax for cloning a repository using a personal access token is as follows:

```sh
git clone https://<token>@github.com/<username>/repo.git
```

Here's how to use it:

1. Generate a Personal Access Token (PAT) on GitHub:
   - Go to your GitHub account settings.
   - Navigate to "Developer settings" and click on "Personal access tokens".
   - Click on "Generate new token" and provide a meaningful description for the token.
   - Select the desired scopes/permissions for the token. For cloning a private repository, make sure to include the `repo` scope.
   - Click on "Generate token" and make a note of the generated token.

2. Clone the repository using the PAT:
   - In the `git clone` command, replace `<token>` with the personal access token you generated.
   - Replace `<username>` with your GitHub username.
   - Replace `repo.git` with the name of the repository you want to clone.

For example:

```sh
git clone https://your-token@github.com/your-username/repo.git
```

By including your personal access token in the URL, Git will use it to authenticate and allow you to clone the private repository without any manual authentication steps.

Remember to keep your personal access token secure and avoid sharing it with others, as it provides access to your GitHub account.

#### git add

The `git add` command is used to stage changes for the next commit. You can use it to specify individual files or directories to add. For example:

```sh
git add file1.txt
git add directory/
```

#### git log

The `git log` command displays a history of commits in reverse chronological order. It shows the commit hash, author, date, and commit message. You can use flags like `--oneline` for a more concise output or `--graph` for a graphical representation of branch history. For example:

```sh
git log --oneline
git log --graph
```

#### git diff

The `git diff` command shows the differences between the working directory and the staging area (changes not yet staged) or between the staging area and the repository (changes staged but not yet committed). It helps you review changes before committing. For example:

```sh
git diff              # Show unstaged changes
git diff --staged     # Show staged changes
```

#### git pull

The `git pull` command is used to fetch and integrate changes from a remote repository into the current branch. It combines the `git fetch` and `git merge` commands. For example:

```sh
git pull origin master
```

This command fetches changes from the `origin` remote repository and merges them into the current branch.

Note: The code snippets provided assume a Unix-based operating system. Windows users may need to adjust certain commands or use alternative commands specific to their environment. For Windows users [try installing a good terminal emulator like Git Bash](https://git-scm.com/downloads).

## References

- [Hashnode](https://blog.techstackmedia.com/a-comprehensive-guide-to-git)
- [Dev.to](https://dev.to/bello/a-comprehensive-guide-to-git-30a)

---

Click the button dropdown to explore my notes from chapter to chapter (branch to branch).

![GitHub Button Dropdown Showing Branches](https://res.cloudinary.com/bizstak/image/upload/v1685042613/github-button-dropdown_qu4m2l.jpg)
