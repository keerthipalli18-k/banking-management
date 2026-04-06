# banking-management
🏦 Banking System using Linked List in C

📌 Project Title

Banking System using Linked List and File Handling in C




👨‍💻 Team Members

Student 1:P.Keerthana

Student 2:D.Sai harshith Reddy





❓ Problem Statement

To design and implement a simple banking system that allows users to:

* Create new accounts
* Delete accounts
* Update account details
* Search for accounts
* Display all records

The system should also store data permanently using file handling so that records are not lost after program execution.




 🧠 Data Structure Used

* Singly Linked List

  * Each node represents a bank account
  * Stores:

    * Account Number
    * Name
    * Balance
  * File Handling (Binary File)

  * Used to store account data permanently in `accounts.dat`




⚙️ Algorithm Explanation

1. Add Account

* Create a new node
* Take input (Account No, Name, Balance)
* Insert at beginning of linked list
* Save all records to file

2. Delete Account

* Search for account by account number
* Remove node from linked list
* Update file

3. Update Account

* Search account
* Modify name and balance
* Save updated list to file

 4. Search Account

* Traverse linked list
* Compare account numbers
* Display details if found

 5. Display All Accounts

* Traverse entire linked list
* Print all records

6. File Handling

* **Save:** Write all nodes into binary file
* **Load:** Read file and recreate linked list at program start





💻 Compilation Instructions
Step 1: Compile the program

```bash
gcc banking.c -o banking
```

### Step 2: Run the program

```bash
./banking
```

*(On Windows use `banking.exe` instead of `./banking`)*




 <img width="497" height="351" alt="Screenshot 2026-04-06 130525" src="https://github.com/user-attachments/assets/559e9066-6077-41ec-96ab-48a3dbb6fe24" />
<img width="499" height="349" alt="Screenshot 2026-04-06 130534" src="https://github.com/user-attachments/assets/79bf082a-5398-4f31-85d1-191556bf57ee" />
<img width="486" height="298" alt="Screenshot 2026-04-06 130543" src="https://github.com/user-attachments/assets/9a6ae129-d070-4267-89dd-e943bbfed3d4" />
<img width="513" height="350" alt="Screenshot 2026-04-06 130552" src="https://github.com/user-attachments/assets/7d5010c4-37c0-4394-ac4d-6fd93bb7cc1c" />
<img width="558" height="397" alt="Screenshot 2026-04-06 130604" src="https://github.com/user-attachments/assets/3bab8707-9647-4a4c-bcc9-ad95ad77761b" />
<img width="527" height="495" alt="Screenshot 2026-04-06 130622" src="https://github.com/user-attachments/assets/1bcfc19f-24d6-45e5-a9b5-8e5011dffb5a" />
<img width="514" height="253" alt="Screenshot 2026-04-06 130632" src="https://github.com/user-attachments/assets/86988e33-d63c-4951-8488-137c9e41e542" />





🎥 Demo Video Link






 📂 File Used

* `accounts.dat` → Stores account data permanently





🚀 Features

* Linked List implementation
* File persistence
* CRUD operations
* Simple menu-driven interface






✅ Conclusion

This project demonstrates how data structures like linked lists combined with file handling can be used to build a simple and efficient banking system in C.

