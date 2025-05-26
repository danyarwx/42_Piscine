# 🧠 42 Piscine — My Journey Through the Fire

> “If you're going through hell, keep going.” — Winston Churchill

Welcome to my 42 Piscine archive. This is a collection of all the exercises, projects, and brain-melting challenges I survived during the infamous **4-week bootcamp** at [42 Coding School](https://42.fr/).

No grades, no teachers. Just coding problems, very smart people and the lessons that came with it.

---

### 🗂 Repo Contents

Inside the `C/` folder, you’ll find:
- `C00 - C04` – Reinventing the wheel of standard library functions
- `C05` – Different math functions
- `C06` – Argc & Argv
- `C07` – Malloc & Free
- `C08` – Header files & Macros

Inside the `Rush/` folder, you'll find the group projects:
- `Rush00` – Fun project to print out different shapes
- `Rush01` – Backtracking hell...

Inside the `Shell/`, you can find how we learned Mac Terminal:
- `Shell00` – Moving around, creating folders & changing access rights
- `Shell01` – More fun with bash

## 🧱 Week 1–3: C Programming – From Zero to Stack Overflow

The C portion of the Piscine was like being thrown into a cold ocean and learning to swim by *drowning a little less each day*.

### 🧩 Topics Covered:

- **Conditions & Loops**  
  `if`, `else`, `while`, `for` — and knowing exactly when to avoid each one

- **Memory Management**  
  `malloc`, `free`, and how to screw up your heap in under 5 minutes

- **Pointers & Addresses**  
  Learning what `*********ptr` really means—and why it haunts you

- **Functions & Recursion**  
  Calling yourself again and again…

- **Working with `argc` and `argv`**  
  Command-line arguments: the gateway to real user input

- **Header Files, Macros & Modular Code**  
  Breaking the monolith, organizing logic, reusing components

- **Makefiles**  
  Writing your own build automation before it was cool

- **Backtracking**  
  Don't even get me started...

- **Arrays & Strings**  
  Manipulating characters one buffer overflow at a time

- **Custom Libs**  
  Rewriting the wheel with your own `ft_strlen`, `ft_putchar`, `ft_strcpy`, etc.

- **Norminette**  
  A French robot that taught us pain, precision, and why beauty matters

### 💥 My Experience

You don’t learn C during the Piscine.  

You **absorb** it, one compiler error at a time.  

Every conversation with a peer ***level higher*** taught me more than any YouTube tutorial ever could.

Every conversation with a peer ***level lower*** made me remember and understand on a deeper level.

By week 3, you’re no longer scared of segfaults - you *expect* them.

> _"It doesn't compile. Can you come take a look...?"  
> — Every Pisciner, 2:37am_

---

## 🐚 Shell & Git – Welcome to the Real World

This part was about **knowing your tools**.

### 🔧 What We Learned:

- **Terminal Navigation**  
  `cd`, `ls`, `cat`, `find`, `grep` — basically becoming one with the shell

- **File Permissions**  
  `chmod 755` or die trying

- **Pipes & Redirections**  
  Learning that `>` can ruin your day, fast

- **Git & Version Control**  
  Cloning, branching, pushing, fixing merge conflicts like a goddamn surgeon

- **Vim**  
  `:wq` or rage quit

### ⚡ The Takeaway

You start out lost in the terminal.  

But a few hundred commands later… *it’s your home*.  

Now, I can't even imagine creating a folder manually in Finder...

and **Git** showed us how to never lose work again (unless you really try).

---

## 🧠 The Final Boss: The Core Game

At the end of the Piscine, we were thrown into the **CORE Game** - a real-time strategy coding battle where teams compete by writing bots that control warriors, gather resources, and destroy enemy cores.

This wasn’t a simple simulation. It was a war. And a lot of fun :)

To the point where the assistant team had to come work on Sunday, because of people trying to break the game on purpose and abuse system bugs to win against other bots 😆

### 🕹 The Objective

Write a fully autonomous C program—your **bot** that controls units in real-time using a provided game engine. The battlefield is a grid. 

Each team owns a **Core**, and victory means keeping yours alive while demolishing your opponent's.

You control your units via a loop function that executes **50 times per second**, constantly deciding:

- Should we build?
- Should we move?
- Who do we attack?
- How do we survive?

> _"CORE?"_
> — _"GAME!"_

### 💡 What It Taught Me

- **State machines** and tight control loops
- **Game theory and resource optimization**
- **Memory-safe design under live constraints**
- Writing code that doesn’t just work—it *fights*

But the most important:

**Memory leaks are real** and `malloc` is a loaded gun (always use `free`).

### 🗂 Repo Contents

Inside the `Core_Bot/` folder, you’ll find:
- `src/` – My full implementation
- `ft_user_loop.c` – The core logic
- `strategy.c` – Unit behavior logic
- `team_helpers.c` – Utilities for positioning, targeting, and economy
- `README.md` – How to run it


### If you read till here...

The 42 Piscine is unlike anything I have experienced before.

At one point, I was worried, how am I going to learn, if there are no *traditional* teachers.

But the reality is...

Everyone is willing to help you, and you actually want to help others, too.

You very quickly learn what `RTFM` means and how to Google information before asking.

But apart from the amount of new things I learned, I have met a lot of interesting people, 

Which made the experience so enjoyable, despite the lack of sleep. 

Message me on LinkedIn if you have any more questions!
