# 🧠 42 Piscine — My Journey

> “If you're going through hell, keep going.” — Winston Churchill

Welcome to my 42 Piscine archive. This is a collection of all the exercises, projects, and brain-melting challenges I completed during the infamous **4-week bootcamp** at [42 Coding School](https://42.fr/).

I did my Piscine at [42 Heilbronn](https://www.42heilbronn.de/en/homepage) in the April 2025 batch.

---

### 🗂 Repo Contents

Inside the `C/` folder, you’ll find:
- `C00 - C04` – Reinventing the wheel of standard library functions
- `C05` – Different math functions
- `C06` – Argc & Argv
- `C07` – Malloc & Free
- `C08` – Header files & Macros

Inside the `Rush/` folder, you'll find the group projects:
- `Rush00` – Printing out different shapes
- `Rush01` – Backtracking algorithm

Inside the `Shell/`, you can find how we learned Mac Terminal:
- `Shell00` – Moving around, creating folders & changing access rights
- `Shell01` – More bash exercises

## 🧱 C Programming
### 🧩 Topics Covered:

- **Control Flow**  
  Mastery of `if`, `else`, `while`, and `for` constructs with an emphasis on precision and context.

- **Memory Management**  
  Direct interaction with memory via `malloc` and `free`, and understanding the cost of mismanagement.

- **Pointers & Addressing**  
  Deep dive into pointer arithmetic and multi-level dereferencing — beyond the basics.

- **Command-Line Arguments**  
  Using `argc` and `argv` to enable dynamic program input.

- **Modular Design & Macros**  
  Crafting scalable codebases with header files, macros, and logical separation.

- **Build Systems**  
  Introduction to `Makefiles` and automation of compilation workflows.

- **Backtracking Algorithms**  
  Implementation of recursive logic to explore solution spaces.

- **Arrays & String Manipulation**  
  Low-level character operations with an eye on buffer boundaries and efficiency.

- **Custom Libraries**  
  Re-implementing standard library functions — `ft_strlen`, `ft_putchar`, `ft_strcpy`, etc.

- **Norminette Compliance**  
  Enforcing rigorous code style for clarity, maintainability, and team cohesion.

## 👾 Shell & Git Fundamentals

### Key Concepts Covered

- **Terminal Navigation**  
  Efficient movement and file inspection using `cd`, `ls`, `cat`, `find`, and `grep`.

- **File Permissions**  
  Understanding and applying `chmod` to control access and execution rights.

- **Pipes & Redirection**  
  Building command chains and managing input/output with precision.

- **Git & Version Control**  
  Cloning, branching, committing, and resolving merge conflicts — a foundation for collaborative development.

- **Vim Editor**  
  Modal editing, navigation, and file management in a terminal environment.


## 🧠 The Core Game

At the end of the Piscine, we were thrown into the **CORE Game** - a real-time strategy coding battle where teams compete by writing bots that control warriors, gather resources, and destroy enemy cores.

### 🕹 The Objective

Write a fully autonomous C program—your **bot** that controls units in real-time using a provided game engine. The battlefield is a grid. 

Each team owns a **Core**, and victory means keeping yours alive while demolishing your opponent's.

You control your units via a loop function that executes **50 times per second**, constantly deciding:

- Should we build?
- Should we move?
- Who do we attack?
- How do we survive?

### 💡 What It Taught Me

- **State machines** and tight control loops
- **Game theory and resource optimization**
- **Memory-safe design under live constraints**

But the most important:

What **memory leaks are** and that with `malloc` you always need to use `free`.

### 🗂 Repo Contents

Inside the `Core_Bot/` folder, you’ll find:
- `src/` – My full implementation
- `ft_user_loop.c` – The core logic
- `strategy.c` – Unit behavior logic
- `team_helpers.c` – Utilities for positioning, targeting, and economy
- `README.md` – How to run it


### P. S.

The 42 Piscine is unlike anything I have experienced before.

At one point, I was worried, how am I going to learn, if there are no *traditional* teachers.

But the reality is...

Everyone is willing to help you, and you actually want to help others, too.

You very quickly learn what `RTFM` means and how to Google information before asking.

But apart from the amount of new things I learned, I have met a lot of interesting people, 

Which made the experience so enjoyable, despite the lack of sleep. 

Message me on LinkedIn if you have any more questions!
