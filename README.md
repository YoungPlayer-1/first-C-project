# Student Record Filter System

A C program that manages student records stored in a file (`student.dat`) and filters out entries based on specific criteria (e.g., removing records of students living in Kathmandu).

## Features
- Prompts the user for student records (Roll Number, Name, and Address).
- Saves initial record entries into a file stream (`student.dat`).
- Processes student addresses, converting strings to uppercase to handle case variations (`Kathmandu`, `kathmandu`, `KATHMANDU`).
- Rewrites filtered results back to `student.dat` using temporary file processing.

## Tech Stack
- **Language:** C
- **Compiler:** GCC / OnlineGDB / MSVC
- **Concepts Used:** File Handling (`fopen`, `fprintf`, `fscanf`, `rewind`), String Manipulation (`toupper`, `strcmp`), Pointers, Dynamic I/O.


