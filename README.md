# 📝 Task Tracker CLI

This project is a terminal-based, dynamic Task Tracking (To-Do List) application developed in C++. It allows users to add and delete their daily tasks, update their status in a `[X]` or `[ ]` format, and store this data persistently in the background of their computer.

The project process was completed in approximately 10 commit steps using version control systems (Git/GitHub).

## 🚀 Key Features and Algorithm Logic

The main flow of the application is controlled via a `switch-case` menu structure. Each feature is designed in accordance with C++ memory and data management rules:

- **Add Task:** Tasks received from the user are added into a `std::vector`. To ensure tasks containing multiple words (e.g., "Review C++ topics") are captured without losing data, the **`getline()`** function was used instead of the standard `cin`.
- **List Tasks:** The algorithm first checks whether the list is empty. If it is, it informs the user. If not, it checks the parallel "status" vector and prints the tasks to the screen along with `[X]` (Completed) or `[ ]` (Pending) checkboxes.
- **Delete Task:** Deleting data from memory (`.erase()`) requires a "physical coordinate" that machine language can understand, rather than a simple number. This structure can be likened to a **train car**. Using the `begin()` function, the algorithm goes to the front of the train, and using a `0`-based index logic, the desired car (task) is derailed and completely deleted.
- **Complete Task:** Unlike the deletion process, the goal here is not to destroy a physical car but to directly change the data inside it. Therefore, an iterator (coordinate) was not used; instead, the status was updated by accessing the index directly using the `(secilenNo - 1)` formula.
- **Persistent Memory (File I/O):** The `<fstream>` library was integrated to ensure that the added data is not lost when the console is closed. While `ofstream` writes the data to a `.txt` file, `ifstream` automatically restores this data every time the program is opened.

## 🛠️ Technologies and Data Structures Used

- **Language:** C++
- **Libraries:** `<iostream>`, `<string>`, `<vector>`, `<fstream>`
- **Data Structure (`vector`):** Dynamic vectors were used in the project instead of static arrays. Vectors operate on the principle of an **"apple bag"** that stretches as more data is thrown into it. However, due to Type Safety, only text data can be inserted into a bag defined as a string.

## 👨‍💻 Developer Notes

This project has been a serious learning and reinforcement process in C++ memory management, dynamic arrays, and file operations (File I/O). Intervening directly with the computer's disk using `ifstream` / `ofstream` patterns and grasping the iterator concept was challenging but equally visionary.

Next week, with the experience gained from this project, I will set sail for new projects that will further deepen similar algorithms. KEEP MOVING FORWARD...

**Developer:** Sefa Yusuf Kütük
