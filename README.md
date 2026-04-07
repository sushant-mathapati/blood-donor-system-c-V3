🩸 Blood Donor Management System (C) – V3

📌 Overview

This project is a simple blood donor management system built in C.  
It helps find **eligible and compatible donors** based on real-world conditions like age, blood group, and last donation time.

I started with a basic version that only checked blood compatibility, and then improved it by adding **eligibility checks and file handling**, so the data is stored and reused instead of being lost every time the program runs.

---

🚀 What This Program Can Do

- Add new donors with details (name, blood group, age, last donation)
- Check if a donor is eligible:
  - Age should be 18 or above  
  - At least 3 months since last donation  
- Find donors compatible with a required blood group
- Display all stored donors
- Store data permanently using file handling
- Run using a simple menu-based interface

---

⚙️ How It Works

The program stores all donor details in a file (`donors.txt`).

From the menu, you can:
1. Add a donor  
2. View all donors  
3. Search for compatible donors  

While searching, the program:
- First checks if the donor is eligible  
- Then checks if the blood group is compatible  

Only donors satisfying both conditions are shown.

---

🧠 Blood Compatibility Logic

| Recipient | Can Receive From |
|----------|----------------|
| O        | O              |
| A        | A, O           |
| B        | B, O           |
| AB       | A, B, AB, O    |

---

🛠️ How to Run

Compile
```bash
gcc blood_donor_v3.c -o donor
```
Run
```bash
./donor
```

---

📊 Example

```
Enter required blood group: A

Eligible & Compatible Donors:
Rahul (O, Age: 25, Last Donation: 4 months)
Amit (A, Age: 30, Last Donation: 5 months)
```

---
🔮 What I Can Improve Next

- Add phone/contact details  
- Allow editing or deleting donors  
- Make it menu-driven with more options  
- Convert this into a GUI or web app  
- Use a database instead of a text file  

---

👨‍💻 Author

Sushant Mathapati

---

💡 What I Learned

- How to move from a basic program to a small system  
- Using file handling to store real data  
- Writing logic based on real-world conditions  
- Structuring code properly instead of writing everything in `main()`