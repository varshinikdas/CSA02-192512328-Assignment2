# CSA02 – C Programming Assignment 2

- **Name:** Sri Varshini K.
- **Register Number:** 192512328
- **Course:** C Programming (CSA02)
- **Compiler/IDE:** Dev-C++
- **Operating System:** Windows
- **Assignment:** Assignment 2 – Questions Q1 to Q7

## About the Assignment

This repository contains the C programs developed for Assignment 2. The programs demonstrate fundamental C programming concepts, including arithmetic operations, operator precedence, short-circuit evaluation, bitwise operations, decision-making statements, loops, algorithm optimisation, and loan repayment calculations.

The assignment includes seven questions, with a separate C source file for each question.

## Programs Included

| Question | Program | Description                     | Concepts Used                                                          |
| -------- | ------- | ------------------------------- | ---------------------------------------------------------------------- |
| Q1       | `Q1.c`  | Pharmacy Billing System         | Arithmetic operators, precedence, associativity, conditional operator  |
| Q2       | `Q2.c`  | Railway Concession Verification | Logical operators, short-circuit evaluation, function-call counting    |
| Q3       | `Q3.c`  | Device State Management         | Bitwise AND, OR, XOR, shifts and bit masks                             |
| Q4       | `Q4.c`  | University Grade Classification | `switch`, `if-else`, boundary testing                                  |
| Q5       | `Q5.c`  | Prime Number Verification       | Loops, divisibility checks, algorithm optimisation                     |
| Q6       | `Q6.c`  | Loan Repayment Schedule         | Loops, interest calculations, input validation, termination conditions |
| Q7       | `Q7.c`  | Prime Verification Redesign     | Diagnosis, redesign, performance comparison and validation             |

## Software Requirements

- Dev-C++ IDE
- C compiler compatible with standard C
- Windows operating system

## How to Compile and Run

1. Download or clone this repository.
2. Open Dev-C++.
3. Open the required `.c` source file.
4. Compile the program.
5. Run the executable.
6. Enter the requested inputs, if applicable.
7. Verify the output against the expected results in the report.

### Compilation Using GCC

If GCC is installed and available in the command prompt, compile a program using:

```bash
gcc Q1.c -o Q1.exe -Wall -Wextra
```

## Testing and Validation

Each program should be tested using valid inputs, boundary values and invalid inputs where applicable.

- **Q1:** Verify billing calculations and the conditional reduction.
- **Q2:** Check short-circuit behaviour and function-call counts.
- **Q3:** Verify bitwise operations and register values.
- **Q4:** Test grade boundaries and invalid marks.
- **Q5:** Compare prime classifications and divisibility-check counts.
- **Q6:** Verify interest calculations, repayment schedules and termination conditions.
- **Q7:** Compare the original and redesigned prime-checking methods using measurable check counts.

The `Screenshots` folder contains the program output evidence, and the assignment report explains the test cases and comparative analysis.

## Complexity Analysis

| Question |                                      Main Analysis                                       |
| -------- | ---------------------------------------------------------------------------------------- |
| Q1       | O(1) time for the fixed three-bill program; O(1) auxiliary space                         |
| Q2       | O(N) time for N simulated passengers; O(1) auxiliary space                               |
| Q3       | O(1) time for individual bit operations; O(1) auxiliary space                            |
| Q4       | O(1) time for the fixed set of grading conditions; O(1) auxiliary space                  |
| Q5       | Basic method: O(n) time; improved method: O(√n) time; both use O(1) auxiliary space      |
| Q6       | O(M) time for M repayment months; O(1) auxiliary space                                   |
| Q7       | Original method: O(n) time; redesigned method: O(√n) time; both use O(1) auxiliary space |

## Learning Outcomes

Through this assignment, the following concepts are demonstrated:

- Understanding operator precedence and associativity.
- Using logical operators and short-circuit evaluation.
- Applying bitwise operators to manage device states.
- Implementing decision-making statements.
- Improving loop efficiency through algorithm redesign.
- Performing financial calculations with validation and controlled termination.
- Comparing alternative designs using test results and complexity analysis.

## Conclusion

This assignment provides practical experience in C programming, testing, debugging, algorithm optimisation and complexity analysis. The programs demonstrate how different programming techniques can affect correctness, execution efficiency, memory usage and maintainability.
