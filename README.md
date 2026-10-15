# N-Queens Solver

A simple N-Queens puzzle solver made in C++ using **backtracking**.

## Features

- Solves the N-Queens problem for a given board size.
- Uses backtracking to find a valid arrangement.
- Checks column and diagonal conflicts.
- Prints the solution as a 0s and 1s grid.
- Reports when no solution exists.
- Measures execution time.

## How to Run

Compile the program:

```bash
g++ main.cpp -o main
```

Run it:

```bash
./main
```

Enter the board size (`N`) when prompted.

## Example

For `N = 4`, one possible solution is:

```text
0  1  0  0
0  0  0  1
1  0  0  0
0  0  1  0
```

- `1` represents a queen.
- `0` represents an empty square.

## Built With

- C++
- `vector`
- Recursion
- Backtracking
- `chrono` for execution-time measurement
