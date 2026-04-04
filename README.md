# banking-management
🏦 Project Title

Banking Management System using CRUD Operations with Dynamic Memory Allocation in C

Team Members

Student 1: P.Keerthana

Student 2:D.Sai harshith Reddy

📌 Problem Statement

In traditional systems, managing bank records manually is inefficient, error-prone, and time-consuming. There is a need for a system that can efficiently store, retrieve, update, and delete customer account information dynamically without fixed memory limits.

This project aims to develop a menu-driven Banking Management System using linked lists and dynamic memory allocation to perform CRUD operations efficiently.

🌍 Real-world Application
Bank customer account management
ATM backend record handling
Small finance/business record systems
Student or employee database systems

This concept is widely used in database systems and real-time applications where data size is not fixed.

🧱 Data Structure Used
👉 Singly Linked List

Each node represents a bank account containing:

Account Number
Name
Balance
Pointer to next node
Why Linked List?
Dynamic size (no limit like arrays)
Efficient insertion and deletion
Memory allocated at runtime

⚙️ System Design
🔹 Components:
Node (struct Account)
Head Pointer
Functions:
Add Node (Create)
Display (Read)
Update Node
Delete Node
Search Node
🔹 Flow:
User selects operation from menu
Corresponding function is called
Linked list is modified dynamically

🧮 Algorithm
🔹 1. Add Node (Create)
Allocate memory using malloc()
Input account details
Insert node at beginning
Update head pointer
🔹 2. Display (Read)
Start from head
Traverse till NULL
Print each node
🔹 3. Update Node
Input account number
Traverse list
If found → update details
Else → show not found
🔹 4. Delete Node
Input account number
Traverse list with prev pointer
Adjust links
Free memory using free()
🔹 5. Search Node
Input account number
Traverse list
If found → display details
Else → not found


⚙️ Compilation and Execution Instructions

To run the Banking Management System program, a C compiler such as GCC is required. Follow the steps below:

1.Save the program file as main.c
2.Open terminal / command prompt and navigate to the folder where the file is stored
3.Compile the program using the command:
gcc main.c -o banking
4.Run the compiled program using:
./banking
(For Windows use: banking.exe)


💻 Implementation
Language: C
Concepts Used:
struct
Pointers
malloc() and free()
Linked List
Functions (modular programming)
Menu-driven logic


🖥️ Demo Output


<img width="466" height="806" alt="Screenshot 2026-03-27 150653" src="https://github.com/user-attachments/assets/a28edda3-0cf7-49e8-a709-e520f62dad97" />
<img width="561" height="738" alt="Screenshot 2026-03-27 150710" src="https://github.com/user-attachments/assets/c20d40a2-b9ee-44f6-a4e7-94be15cea1a4" />
<img width="522" height="463" alt="Screenshot 2026-03-27 150731" src="https://github.com/user-attachments/assets/8bc53002-d1e7-4e94-b5a5-73b046681fc5" />
<img width="419" height="537" alt="Screenshot 2026-03-27 150819" src="https://github.com/user-attachments/assets/17a72bb9-a8ec-4d8a-86ac-c547084ea70c" />
<img width="450" height="660" alt="Screenshot 2026-03-27 150835" src="https://github.com/user-attachments/assets/bfa645e8-08a0-49c8-b076-f5682e73cf8a" />
<img width="500" height="291" alt="Screenshot 2026-03-27 150846" src="https://github.com/user-attachments/assets/95217d3a-c068-4eda-a372-20ba1622b619" />


✅ Conclusion

This project successfully demonstrates the use of CRUD operations with dynamic memory allocation using a linked list in C. It eliminates the limitations of static memory and provides efficient data handling.

The system is:

Flexible
Memory efficient
Easy to modify and extend

It forms the foundation for advanced systems like databases and real-world banking software.
