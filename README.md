# Project: C - Simple Shell

## Resources

#### Read or watch:

* [Unix shell](https://intranet.alxswe.com/rltoken/f0YU9TAhniMXWlSXtb64Yw)
* [Thompson shell](https://intranet.alxswe.com/rltoken/7LJOp2qP7qHUcsOK2-F3qA)
* [Ken Thompson](https://intranet.alxswe.com/rltoken/wTSu31ZP1f7fFTJFgRQC7w)
* [Everything you need to know to start coding your own shell concept page]()

## Learning Objectives

### General

* Who designed and implemented the original Unix operating system
* Who wrote the first version of the UNIX shell
* Who invented the B programming language (the direct predecessor to the C programming language)
* Who is Ken Thompson
* How does a shell work
* What is a pid and a ppid
* How to manipulate the environment of the current process
* What is the difference between a function and a system call
* How to create processes
* What are the three prototypes of <code>main</code>
* How does the shell use the <code>PATH</code> to find the programs
* How to execute another program with the <code>execve</code> system call
* How to suspend the execution of a process until one of its children terminates
* What is <code>EOF</code> / “end-of-file”?

| Done Tasks  | Descriptions |
| ---- | ---- |
| 0. Betty would be proud |  Write a beautiful code that passes the Betty checks |
| 1. Simple shell 0.1 | Display a prompt and wait for the user to type a command line. |
| 2. Simple shell 0.2 | Handle command lines with arguments |
| 3. Simple shell 0.3 | Handle the PATH |
| 4. Simple shell 0.4 |  Implement the exit built-in, that exits the shell|
| 5. Simple shell 1.0 | Implement the env built-in, that prints the current environment |
| 6. Simple shell 0.1.1 | Write your own getline function  |
| 7. Simple shell 0.2.1 | You are not allowed to use strtok |
| 8. Simple shell 0.4.1 | handle arguments for the built-in exit |
| 9. setenv, unsetenv | Implement the setenv and unsetenv builtin commands |
| 10. cd | Implement the builtin command cd |

| File | Descrition |
| ---- | -----------|
| [sh.h](https://github.com/naanaa59/simple_shell/blob/master/sh.h) |      Header file          |
| [function_1.c](https://github.com/naanaa59/simple_shell/blob/master/function_1.c) | customized functions |
| [function_2.c](https://github.com/naanaa59/simple_shell/blob/master/function_2.c) | customized functions  |
| [function_3.c](https://github.com/naanaa59/simple_shell/blob/master/function_3.c) | customized functions        |
| [functions_4.c](https://github.com/naanaa59/simple_shell/blob/master/functions_4.c) |  customized functions               |
| [cd.c](https://github.com/naanaa59/simple_shell/blob/master/cd.c) |       change directory function         |
| [hsh.c](https://github.com/naanaa59/simple_shell/blob/master/hsh.c) |            Main function     |

