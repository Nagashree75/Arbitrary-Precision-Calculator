# Arbitrary-Precision-Calculator
APC
📌 Overview The Arbitrary Precision Calculator (APC) is a C-based application designed to perform arithmetic operations on very large numbers that exceed the limits of standard data types like int, long, or long long. Instead of relying on built-in numeric limits, this calculator stores numbers digit by digit using linked lists, enabling calculations on numbers of any length.

✨ Features Supports large integers of unlimited size Performs arithmetic operations: ➕ Addition ➖ Subtraction ✖️ Multiplication ➗ Division Handles positive and negative numbers Command-line based input No use of built-in big integer libraries

🧠 Why Arbitrary Precision? Standard C data types have fixed size limits: Data Type Max Value int 2,147,483,647 long long 9,223,372,036,854,775,807

This project removes those limits by representing numbers as linked lists, making it ideal for: Cryptography concepts Compiler & OS learning Data structures practice Embedded & systems programming

🏗️ Internal Representation Each digit of a number is stored in a node Numbers are stored in a Doubly Linked List Least Significant Digit (LSD) is stored at the tail Operations are performed digit-by-digit with carry/borrow handling

Example Number: 12345 Head → [1] ⇄ [2] ⇄ [3] ⇄ [4] ⇄ [5] ← Tail

🛠️ Project Structure APC/ │ ├── main.c // Handles input & operation selection ├── apc.h // Structure definitions & macros ├── addition.c // Addition logic ├── subtraction.c // Subtraction logic ├── multiplication.c // Multiplication logic ├── division.c // Division logic ├── dll.c // Doubly linked list functions ├── display.c // Output formatting └── README.md

⚙️ Compilation

Use GCC to compile the project:

gcc *.c -o apc

▶️ Execution Run the program using:

./apc

Example ./apc 123456789123456789 + 987654321987654321

Output Result: 1111111111111111110

🧪 Supported Operators Operator Operation

Addition
Subtraction
Multiplication / Division
⚠️ Error Handling Invalid operators are detected Division by zero is handled safely Leading zeros are removed automatically Proper sign handling (+ / -)

📚 Learning Outcomes Deep understanding of linked lists Manual implementation of arithmetic logic Carry and borrow propagation Real-world simulation of Big Integer arithmetic Memory management using malloc and free

🚀 Future Enhancements Modulus operation (%) Floating-point support Expression parsing ((a+b)*c) File-based input/output Performance optimizations
