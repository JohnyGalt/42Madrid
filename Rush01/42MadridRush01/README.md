# Rush01 - 42Madrid Piscine

— Rush01 project

---

## Description

This program solves the Rush01 puzzle:

- It receives **16 numbers** as input: the "views" (clues) for each side of the 4x4 grid.
- It fills the grid with numbers 1..4 in each row and column — no repeats.
- The solution must match all the views.
- If there is a solution — the grid is printed.
- If no solution — "Error" is printed.

---

## How it works

1️⃣ `main()` prepares the grid and reads input.

2️⃣ `solve()` function fills the grid — moving cell by cell — trying numbers 1 to 4.

3️⃣ `is_valid()` ensures no repeats in row or column.

4️⃣ If the grid is full — `check_views()` checks if the views match the input.

5️⃣ If correct — grid is printed.  
If not — the robot backtracks and tries another combination.

---

## Files

- **rush01.c** → main function + solve() robot.
- **check.c** → functions to check the views.
- **parse.c** → function to read input string.
- **print.c** → functions to print the grid.

---

## What is a "view"?

It is how many towers are visible from each side:

Example row:

```
1 2 3 4
```

- View from left = 4 (all towers visible)
- View from right = 1 (big tower 4 hides the rest)

---

## How to run

```bash
cc -Wall -Wextra -Werror -o rush01 *.c

./rush01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

---

## Example output

```
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

---
## Other sequences

Grid:
1 3 4 2
4 2 1 3
3 1 2 4
2 4 3 1

Concatenated Sequence (Top + Bottom + Left + Right): 
2 2 1 3 3 1 2 2 3 1 2 2 2 2 1 3

## How to run 2

```bash
cc -Wall -Wextra -Werror -o rush01 *.c

./rush01 "2 2 1 3 3 1 2 2 3 1 2 2 2 2 1 3"


## What is "backtracking"?

The "robot" tries to fill grid:

- If stuck → goes back to previous cell and tries new number.
- Repeats until solution is found, or prints "Error".

---

## How to explain at eval

- The program builds grid matching **16 input views**.
- The "robot" moves from top-left to bottom-right.
- Tries numbers 1..4.
- If stuck — backtracks.
- If grid is full and views match — prints grid.
- If no solution — prints "Error".

---

**By...team 
