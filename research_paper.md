# 📊 C++ Data Structures and Memory Management

This document examines the fundamental architectural decisions regarding how data is stored and managed in software projects. Data structures (Array vs. Vector) and storage units (RAM vs. HDD/SSD) are compared under two main headings.

---

## PART 1: Data Sizing (Array vs. Vector)

The choice between these two basic structures used to keep data in memory is determined by the project's data size and the need for flexibility.

### 1. Certainty of Data Size
* **Array (Static Array):** Its size must be determined before the program is compiled and can never be changed later. 
  > *Example Scenario:* In algorithmic projects like "Finding the Largest Number" (e.g., if it is known that only 10 numbers will be compared), using an Array is fast and logical.
* **Vector (Dynamic Array):** Its size is variable. It automatically expands in memory as data is added into it.
  > *Example Scenario:* As in the "Task Tracking System" project, using a Vector is mandatory when it is not known in advance how many tasks the user will enter into the system (when dynamic flexibility is required).

### 2. Memory Management and Performance
* **Array Performance:** It allocates space in memory as a single fixed block. The operating speed is very high, but if more space is allocated than needed, it leads to memory waste.
* **Vector Flexibility:** It dynamically manages memory in the background. As data increases, it allocates new space for itself. In large systems where terabytes of data are processed, this flexible memory management is of vital importance.

---

## PART 2: Persistence (Keeping in Memory vs. Saving to File)

Where and for how long a program will keep data is the most important factor determining the purpose of that program. 

### 1. Keeping Data in Memory (Temporary Memory - RAM)
It is the keeping of data on **RAM (Random Access Memory)** only while the program is running.
* **Working Logic:** The console opens, codes are read, a temporary space is allocated from RAM, operations are performed, and output is given. The moment the console (program) is closed, RAM clears that space and the data is deleted forever.
* **Use Case:** Used in small-scale projects that require only instant calculations and do not need historical records (e.g., basic algorithm exercises from previous weeks).

### 2. Saving Data to a File (Persistent Memory - File I/O)
It is the writing of data to the computer's persistent storage units (**HDD or SSD**) as a physical file (e.g., `.txt`).
* **Working Logic:** The program not only keeps the data in RAM but also engraves it onto the hard disk. Even if the program or computer is turned off, the data remains there and can be read again whenever desired.
* **Use Case:** Used in projects where the user needs to access their past data again. (e.g., as in the `task-tracker-cli` project we developed this week, where every step is saved and restored when the program is reopened).

**In Summary:** Memory (RAM) is our space for instant thinking and processing, while the File (HDD/SSD) is our notebook that never forgets anything.

---
**Developer:** Sefa Yusuf Kütük
