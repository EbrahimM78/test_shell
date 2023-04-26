# Simple Shell
****

## What is the shell?

Creating a simple shell that can accept input and run commands.
It is a command line interpreter, which takes the most basic commands and executes them.

## How Do I compile it?

This shell works by compiling with versions of GCC 4.8.5 or later, it can be compiled
using

`gcc -Wall -Werror -Wextra -pedantic *.c -o shell`


## Essential Functionalities of the Simple Shell:

> Displays a prompt "#cisfun$ " and waits for user input.\
> Runs all commands of type "executable program" (ls and /bin/ls).\
> Handles commands with arguments.\
> Handles the PATH global variable.\
> Handles The EOF (End Of File) condition.\
> Handles the Ctrl + C signal -> It doesn't exit the shell

## Usage

* `./hsh` : Opens program in Interactive Mode.
* `echo "ls" | ./hsh` : Opens program in Non-Interactive Mode.
* `./hsh < file` : Runs file in Non-Interactive Mode.


## List of useful commands

* `cat` - prints and concatenates files to the standard output
* `cp` -copies a file into another file
* `grep` - helps to search for a file in a specific pattern
* `less` - will let you go backward and forward in the files
* `ls` - will list all files and directories in current working directory
* `mv` - helps to move one file into another file
* `pwd` - given you the current working directory


## List of allowed functions and system calls for this project
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Author's
[Ebrahim Mangera](https://github.com/EbrahimM78)

[Edet Hillary Effiong](https://github.com/Edetmanchi)