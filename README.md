# CppPrimePredecessorFinder

## Overview
The CppPrimePredecessorFinder is a C++ program that calculates the largest prime number smaller than a user-provided positive integer. It showcases the use of mathematical algorithms and C++ programming constructs to solve a classic problem in number theory.

## How to Use
To compile and run this program, follow these steps:

1. Clone the repository:
git clone https://github.com/mht83/CppPrimePredecessorFinder.git
2. Navigate to the cloned directory:
cd CppPrimePredecessorFinder
3. Compile the program with a C++ compiler (e.g., g++):
g++ -o PrimePredecessorFinder main.cpp -lm
4. Run the program:
./PrimePredecessorFinder

Enter a positive integer when prompted, and the program will output the largest prime number that is smaller than the given number.

## Program Details
The program uses a function `check_prime` to determine if a number is prime. It iterates through all numbers smaller than the given number to find the largest prime.

## Contributing
If you'd like to contribute to the CppPrimePredecessorFinder, please fork the repository, make your changes, and submit a pull request.
