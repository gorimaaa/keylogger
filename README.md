# Keylogger in C++ 🖥️

## Description 📜
This project is a **minimalist keylogger** developed in C++ for educational purposes, aimed at understanding how to capture keystrokes using the Windows API. It detects pressed keys and logs them into a text file named `Record.txt`.

### Features
- Logs all keyboard inputs, including:
  - Letters and numbers.
  - Special keys like `<Tab>`, `<Return>`, `<Back>`.
  - Characters specific to keyboard layouts (e.g., `à`, `ç`, etc.).
- Handles special states: Caps Lock, Shift, Alt Gr, and Alt.

⚠️ **Important Note**: This project is solely for educational purposes. Using software like this without proper authorization may violate laws. Always adhere to ethical and legal standards.

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

## Warnings ⚠️
- **Responsible Use Only**: This project is intended for learning purposes. Do not use it for unethical or illegal activities.
- **Antivirus Detection**: Antivirus software may flag this program as a threat, even in an educational context.
- **Test Environment Recommended**: Run this program only in a controlled environment, such as a virtual machine.

---

## Author ✍️
Created by [gorimaaa]. This project is meant to explore Windows API interactions and low-level functionality in C++. 😊
