# banking-management
🏦 Project Title

Banking Management System using CRUD Operations with Dynamic Memory Allocation in C

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
<img width="500" height="291" alt="Screenshot 2026-03-27 150846" src="https://github.com/user-attachments/assets/1865610c-312c-47e8-8ba2-bf4d1a2a59ac" />
<img width="450" height="660" alt="Screenshot 2026-03-27 150835" src="https://github.com/user-attachments/assets/cde1b5d2-dd4b-45a6-88b5-bfddd874c5b6" />
<img width="419" height="537" alt="Screenshot 2026-03-27 150819" src="https://github.com/user-attachments/assets/3ec34867-fc37-4da3-81a4-7fe3a7a0cca3" />
<img width="522" height="463" alt="Screenshot 2026-03-27 150731" src="https://github.com/user-attachments/assets/9eb87b1e-8616-4f1b-8539-d88cb160ed0c" />
<img width="561" height="738" alt="Screenshot 2026-03-27 150710" src="https://github.com/user-attachments/assets/cd02d8f7-3711-41db-bfdc-002ae17a54ca" />
<img width="466" height="806" alt="Screenshot 2026-03-27 150653" src="https://github.com/user-attachments/assets/f83375a9-99c3-4ec7-882b-b2cbf56f2f81" />

✅ Conclusion

This project successfully demonstrates the use of CRUD operations with dynamic memory allocation using a linked list in C. It eliminates the limitations of static memory and provides efficient data handling.

The system is:

Flexible
Memory efficient
Easy to modify and extend

It forms the foundation for advanced systems like databases and real-world banking software.
