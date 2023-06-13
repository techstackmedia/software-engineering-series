# Linux Command Cheat Sheet: Essential Commands for Beginners

![Linux Command Cheat Sheet: Essential Commands for Beginners Cover](https://res.cloudinary.com/bizstak/image/upload/v1686564123/GitHub_Cover_a6uyuc.png)

## Vagrant and Virtual Installation

To practice and execute these common commands, you can [set up a virtual machine using Vagrant and VirtualBox](https://github.com/techstackmedia/software-engineering-series/tree/11-getting-started-to-vagrant-and-virtualbox). Here's a step-by-step guide on how to proceed:

1. Install Vagrant and VirtualBox on your machine. You can find the installation instructions for your operating system on the respective websites:

   - Vagrant: [vagrantup.com](https://www.vagrantup.com)
   - VirtualBox: [virtualbox.org](https://www.virtualbox.org)

2. Open a terminal or command prompt on your machine.

3. Create a new directory where you want to set up the Vagrant project, e.g., `/home/user/vagrant-project`.

4. Change to the newly created directory:

   ```sh
   cd /home/user/vagrant-project
   ```

5. Initialize the Vagrant project by creating a `Vagrantfile`

   ```sh
   vagrant init ubuntu/focal64
   ```

6. Edit the `Vagrantfile` using a text editor of your choice, and configure the virtual machine settings. For example, you can specify the base box, CPU and memory allocation, network settings, etc.

7. Save the changes to the `Vagrantfile` and exit the text editor.

8. Start the virtual machine:

   ```sh
   vagrant up
   ```

9. Once the virtual machine is up and running, you can connect to it using SSH:

   ```sh
   vagrant ssh
   ```

10. You are now inside the virtual machine, and you can run the Linux commands mentioned below:

    **Note**:

    If you want more help or information about a command use the `man` or `--help` command:

```sh
man [command]
```

```sh
[command] --help
```

**Navigation:**

- Change directory:

  - `cd /home/user/Documents`

- List files and directories:

  - `ls` or `ls -l`

- Print working directory:

  - `pwd`

- Make directory:

  - `mkdir mydir`

- Remove files and directories:

  - `rm myfile.txt` or `rm -r mydir`

- Copy files and directories:

  - `cp file1.txt file2.txt` or `cp -r dir1 dir2`

- Move or rename files and directories:

  - `mv file1.txt file2.txt` or `mv myfile.txt newdir/myfile.txt`

- Search for files and directories:

  - `find /home/user -name myfile.txt`

- Search for patterns in files:

  - `grep "keyword" myfile.txt`

- Concatenate and display file content:

  - `cat myfile.txt`

- View file content with pagination:

  - `less myfile.txt`

- Output the beginning of a file:

  - `head myfile.txt`

- Output the end of a file:

  - `tail myfile.txt`

- Create links between files:

  - `ln -s myfile.txt mylink`

- Change file permissions:
  - `chmod 644 myfile.txt`

**File Manipulation:**

- Create an empty file:

  - `touch myfile.txt`

- Text editor (nano):

  - `nano myfile.txt`

- Text editor (vi/vim):

  - `vim myfile.txt`

- Determine file type:

  - `file myfile.txt`

- Word, line, character, and byte count:

  - `wc myfile.txt`

- Archive files:

  - `tar -cvf archive.tar file1.txt file2.txt`

- Compress files:

  - `gzip myfile.txt`

- Decompress files:

  - `gunzip myfile.txt.gz`

- Package and compress files:

  - `zip archive.zip file1.txt file2.txt`

- Extract files from a zip archive:
  - `unzip archive.zip`

**Process Management:**

- Display running processes:

  - `ps aux`

- Monitor system activity and processes:

  - `top`

- Terminate processes:

  - `kill PID`

- Run a process in the background:

  - `command &`

- Bring a background process to the foreground:

  - `fg`

- Display current jobs:
  - `jobs`

**System Information:**

- Print system information:

  - `uname -a`

- Print the current user:

  - `whoami`

- Print the hostname:

  - `hostname`

- Disk space usage:

  - `df -h`

- Estimate file and directory space usage:

  - `du -sh /path/to/directory`

- Display memory usage:

  - `free -m`

- System uptime:

  - `uptime`

- Network configuration:
  - `ifconfig` or `ip addr show`

**Package Management:**

- Package handling utility (Debian-based systems):

  - `sudo apt-get install package_name`

- Package manager (RHEL-based systems):

  - `sudo yum install package_name`

- Package manager (Arch Linux):
  - `sudo pacman -S package_name`

**Networking:**

- Send ICMP echo requests to a network host:

  - `ping www.example.com`

- Download files from the web:

  - `wget https://example.com/file.txt`

- Transfer data using various protocols:

  - `curl https://example.com`

- Secure shell client:

  - `ssh user@hostname`

- Securely copy files between hosts:

  - `scp myfile.txt user@hostname:/path/to/destination`

- File Transfer Protocol (FTP) client:

  - `ftp hostname`

- Secure FTP client:

  - `sftp user@hostname`

- Network configuration:

  - `ifconfig` or `ip addr show`

- Network statistics:
  - `netstat`

**User Management:**

- Create a new user:

  - `sudo adduser newuser`

- Delete a user:

  - `sudo deluser username`

- Change user password:

  - `sudo passwd username`

- Switch to another user:

  - `su username`

- Grant administrative privileges:
  - `sudo usermod -aG sudo username`

**System Maintenance:**

- Update package lists and upgrade installed packages:

  - `sudo apt-get update && sudo apt-get upgrade`

- Restart the system:

  - `sudo reboot`

- Shutdown the system:

  - `sudo shutdown now`

- View system logs:

  - `tail /var/log/syslog`

- Check system disk usage:

  - `df -h`

- Check system memory usage:

  - `free -m`

- Monitor system resources and processes:
  - `top`

These are just a few examples of commonly used Linux commands. There are many more commands available with various options and functionalities. It's always a good idea to refer to the documentation or online resources for more detailed information about specific commands.

---
