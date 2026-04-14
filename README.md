Blood Donor Management System in C (Version 3)

A menu-driven console application built in C that manages blood donor records using file handling. This project focuses on storing data permanently and applying real-world logic like eligibility and compatibility checks.

Overview

This system allows users to add, view, search, and manage donor data efficiently. Unlike basic programs that lose data after execution, this project uses file storage to maintain records across runs.


Key Features

• Add multiple donors with name, blood group, age, and last donation details  
• Store donor data permanently using file handling 💾  
• Display all stored donors in a structured format 📋  
• Search for eligible and compatible donors 🔍  
• Clear all donor data to reset the system ♻️  
• Simple and intuitive menu-driven interface  

System Workflow

1. Add Donor  
   Enter donor details. You can add multiple donors continuously.

2. Display All Donors  
   Shows all stored donor records in a clean tabular format.

3. Search Compatible Donors  
   Enter a required blood group. The system filters:
   • Blood compatibility  
   • Eligibility conditions  

4. Clear All Data  
   Removes all stored donor records and resets the system.

5. Exit  
   Terminates the application.


Blood Compatibility Logic 🩸

• O → Donates to all  
• A → A, AB  
• B → B, AB  
• AB → AB only  


Eligibility Criteria

A donor is considered eligible if:

• Age is 18 or above  
• At least 3 months since last donation  


Example Usage

Input:
Add donors with different blood groups and details

Output:
Displays all donors and filters only eligible & compatible donors based on user input


Technologies Used

• C Programming  
• File Handling (fopen, fscanf, fprintf)  
• Structures  
• Functions  
• String Handling  


What This Project Demonstrates

• Writing modular code using functions  
• Using file handling for persistent storage  
• Applying real-world conditions in logic  
• Designing a basic data management system  


Future Enhancements 🚀

• Support full names with spaces  
• Add edit and delete donor options  
• Implement input validation  
• Improve UI/UX for better readability  
• Convert into GUI or web-based application  


Author

Sushant Mathapati