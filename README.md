Blood Donor Management System in C (Version 3)

A console-based Blood Donor Management System built using C that simulates how a real system stores and manages donor data. Instead of temporary execution-only programs, this project focuses on persistent storage and structured logic.
About the Project
This project was developed to understand how real applications handle data beyond runtime. Donor details are stored in a file and can be accessed, searched, and managed anytime through a menu-driven interface.

Features

• Add multiple donors with details (name, blood group, age, last donation)

• Store donor data permanently using file handling 

• Display all donors in a structured format 

• Search for eligible & compatible donors 

• Clear all stored data to reset the system 

• Simple menu-driven interface for easy use

How the System Works
The program provides a menu with the following options:
1.Add Donor
2.Enter donor details and store them in a file. Multiple donors can be added in one session.
3.Display All Donors
4.Reads all stored data and displays it in a tabular format.
5.Search Compatible Donors
6Enter a required blood group. The system filters:
• Compatible donors
• Eligible donors based on conditions
Clear All Data
•Deletes all stored donor data and resets the system.
•Exit
•Terminates the program.

Blood Compatibility Logic 🩸
• O → Can donate to all
• A → A, AB
• B → B, AB
• AB → AB only
Eligibility Criteria
A donor is considered eligible only if:
• Age is 18 or above
• At least 3 months since last donation

Example Workflow
• Add multiple donors
• Display all stored donors
• Search using required blood group
• View only eligible and compatible donors
• Clear data and restart fresh

Technologies Used
• C Programming
• File Handling (fopen, fscanf, fprintf)
• Structures
• Functions
• String handling

What I Learned
• How to store and retrieve data using files 
• Difference between append and overwrite modes
• Structuring programs using functions
• Implementing real-world logic in code
• Debugging file and input issues

Future Improvements 
• Support names with spaces
• Add edit and delete functionality
• Improve input validation
• Convert into GUI or web-based system

Author
Sushant Mathapati