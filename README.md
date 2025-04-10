### 🚌 Bus Booking System in C

A simple command-line-based Bus Booking System developed in C that allows users to book seats, view reservations, edit bookings, and print tickets. Data persistence is implemented through file handling.

## 📌 Features

- Book seats (up to 30 maximum)
- View all current reservations
- Edit existing reservations
- Print a ticket for a specific seat
- Save and load data using binary file I/O (`bookings.dat`)

## 🛠️ Tech Stack

- Language: C
- Compiler: GCC (or any standard C compiler)
- File Handling: Binary read/write (`fopen`, `fread`, `fwrite`)

## 📂 Project Structure

```
.
├── main.c               # Source code for Bus Booking System
├── bookings.dat         # Auto-generated file storing reservations
└── README.md            # Project documentation
```

## 🚀 Getting Started

### Prerequisites

Make sure you have a C compiler like GCC installed:

```bash
gcc --version
```

### Compilation

To compile the code:

```bash
gcc main.c -o bus_booking
```

### Run the Program

```bash
./bus_booking
```

## 🔧 How to Use

- Choose from the menu:
  - **1:** Book a new seat (checks if already taken)
  - **2:** View all existing reservations
  - **3:** Edit reservation by entering seat number
  - **4:** Print ticket for a specific seat
  - **5:** Exit the program

Data is automatically saved and loaded from `bookings.dat`.

## 🗃️ File Handling Notes

The program uses binary files (`bookings.dat`) to:
- Save all reservations when a seat is booked or edited
- Load existing reservations on startup

## 📎 Limitations

- Supports a maximum of **30 seats**
- Basic input validation only
- Not thread-safe (single-user, single-thread)

## 📈 Future Improvements

- Add cancellation feature
- Include date & time of travel
- Upgrade to graphical UI or web-based interface
- Enhance validation and error handling

## 🧑‍💻 Author

Developed by [Your Name].  
Feel free to contribute, report issues, or suggest improvements!

## 📄 License

This project is open-source and available under the [MIT License](LICENSE).
```

---

Let me know if you'd like this converted into a visually enhanced version (with badges, images, etc.), or if you're planning to expand it into a face detection project — I noticed your last line mentioned that!
