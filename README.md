# Keylogger in C++ 🖥️

## Description 📜
This project is a **minimalist keylogger** developed in C++ for educational purposes, aimed at understanding how to capture keystrokes using the Windows API. It detects pressed keys and logs them into a text file named `Record.txt`.

### Features
- Logs all keyboard inputs, including:
  - Letters and numbers.
  - Special keys like `<Tab>`, `<Return>`, `<Back>`.
  - Characters specific to keyboard layouts (e.g., `à`, `ç`, etc.).
- Handles special states: Caps Lock, Shift, Alt Gr, and Alt.

---

## Included Files 🗂️
- **Source Code (`keylogger.cpp`)**: Contains the complete keylogger code.
- **Executable (`main.exe`)**: Compiled binary ready for execution.

---

## VirusTotal Results 🛡️
The executable was scanned on **VirusTotal** and received a score of **4/72**, meaning its quite stealthy

---

## Usage ⚙️

### 1. Prerequisites
- Windows OS
- A C++ compiler (e.g., MinGW or Visual Studio) if you wish to compile the source code.

### 2. Execution
Run the `main.exe` executable. All keyboard inputs will be logged into the `Record.txt` file.

---

## Author ✍️
Created by [gorimaaa]. This project is meant to explore Windows API interactions and low-level functionality in C++. 😊
