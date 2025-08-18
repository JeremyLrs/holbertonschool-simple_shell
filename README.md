# Simple Shell

**Simple Shell** is a minimalist Unix command-line interpreter written in C, developed as part of the Holberton School curriculum.

---
##  🚀 Description

This program reads user input, interprets it, and executes the requested program.  
It supports a few internal commands (`builtins`) and executes external programs found through the `PATH` environment variable.

---
##  📌 Features

- Displays a prompt and waits for user input.
- Supports commands with arguments.
- Searches executables using the `PATH` environment variable.
- Executes programs using `execve` with the current environment.
- Handles exit status codes (127 for “command not found”).
- Built-in commands:
  - `exit`
  - `env`

## ✅ Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl "betty-doc.pl")

---

## 🛠️ Build
``` sh
git clone https://github.com/JeremyLrs/holbertonschool-simple_shell
cd holbertonschool-simple_shell
```

## ⚙️ Compilation

Compile on **Ubuntu 20.04 LTS** with `gcc`:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

---
## 🕹️ Usage

- **Interactive mode**:
  ```bash
  ./hsh
  ($) ls
  file1  file2
  ($) env
  ...
  ($) exit
  ```
- **Non-interactive mode**:
  ```bash
  echo "ls" | ./hsh
  printf "/bin/echo Hello\nexit\n" | ./hsh
  ```

### Shortcuts
- `Ctrl+D`: terminates the shell (EOF).
- `exit`: exits the shell.
- `env`: displays the current environment variables.


##  🔍Examples

```bash
($) /bin/ls
main.c  shell.c  hsh
($) echo "Hello world"
Hello world
($) idontexist
shell: idontexist: command not found
($) exit
```

---
## 📖 Man page

To view the manual with colors :

```shell
sudo apt install groff 
groff -Tascii -man man_1_simple_shell
```

You can also use:

```shell
man -l man_1_simple_shell
```

---
## 📂 <span id="files-description">File description</span>

| **FILE**                                                                                                              | **DESCRIPTION**                                  |
| :-------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------ |
| [README.md](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/README.md "README.md")                | The `README.md` file.                            |
| [builtin.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/builtin.c "builtin.c")                | Detect if internal (exit, env) and execute       |
| [builtin_env.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/builtin_env.c "builtin_env.c")    | Displays environment variables (env)             |
| [builtin_exit.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/builtin_exit.c "builtin_exit.c") | Closes the shell properly (exit)                 |
| [errors.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/errors.c "errors.c")                   | Displays a clear error message                   |
| [execute.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/execute.c "execute.c")                | Execute the element in parse.c                   |
| [input.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/input.c "input.c")                      | Get what the user types (via getline)            |
| [loop.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/loop.c "loop.c")                         | Main shell loop                                  |
| [main.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/main.c "main.c")                         | Program entry point                              |
| [memory.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/memory.c "memory.c")                   | frees used memory                                |
| [parse.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/parse.c "parse.c")                      | Transforms the input into a usable element       |
| [path.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/path.c "path.c")                         | Searches for the executable and returns its path |
| [shell.h](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/shell.h "shell.h")                      | Header with prototype - lib and struct           |
| [signals.c](https://github.com/JeremyLrs/holbertonschool-simple_shell/blob/main/signals.c "signals.c")                | Handle interrupts                                |

---

## ⚛ Technology Stack
 [![GitHub](https://img.shields.io/badge/GitHub-%23121011.svg?logo=github&logoColor=white)](#)  [![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)](#) [![Vim](https://img.shields.io/badge/Vim-%2311AB00.svg?logo=vim&logoColor=white)](#) [![Git](https://img.shields.io/badge/Git-F05032?logo=git&logoColor=fff)](#)

---
## ❤️ Thanks

Thanks all the C27 from Holberton Toulouse but special thank for [Haitu](https://github.com/N-Haitu31) and [Moussa](https://github.com/MElisoltanov)

---
## 👷🏼‍♂️👷🏼‍♂️ <span id="authors">Authors</span>

**👷🏼‍♂️ Flora Salanson**
- GitHub: [@flor4](https://github.com/flor4)
- LinkedIn: [@flora-salanson](https://www.linkedin.com/in/flora-salanson/)

**👷🏼‍♂️ Jérémy LAURENS**
- GitHub: [@JeremyLrs](https://github.com/JeremyLrs)
- LinkedIn: [@jeremylrs](www.linkedin.com/in/jeremylrs)