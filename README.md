# Calculator Project
A simple calculator implemented in C++ that supports the following operations:
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Power (`^`)
- Root (`s`)
- Factorial (`!`)
## How to Compile and Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Aria-Mehr1/Simple-calculator-project.git
   cd Simple-calculator-project
2. Compile the project:
g++ src/main.cpp src/calculator.cpp -o main
3. Run the program:
./main
Features:
Manual algorithms for power, root, and factorial.
Simple user interface.
Notes:
Factorial calculation only works with non-negative integers.
The program currently has a limitation: entering unexpected inputs (e.g., char instead of a number) as the first or second value may cause issues.
There is an error of 0.0001 in taking the square root of an incomplete number.
Additional Information :
- The project includes a .gitignore file for ignoring unnecessary files during version control.