<div align="center">

![Codeforces problem-solving journal](assets/banner.svg)

# Codeforces Problems

**One problem at a time. One concept at a time.**

My personal collection of Codeforces solutions in C++, documenting the problems I solve and the ideas I learn along the way.

![C++](https://img.shields.io/badge/Language-C%2B%2B17-60a5fa?style=for-the-badge&logo=cplusplus&logoColor=white)
![Solutions](https://img.shields.io/badge/Solutions-13-34d399?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Codeforces-fbbf24?style=for-the-badge&logo=codeforces&logoColor=white)

[Browse solutions](#-problem-index) · [Run locally](#-run-a-solution) · [GitHub profile](https://github.com/Uttkarshchambiyal)

</div>

---

## 📚 Problem index

Each entry links to the original problem and my source code.

| ID | Problem | Concepts practiced | My solution |
| :--- | :--- | :--- | :---: |
| **50A** | [Domino Piling](https://codeforces.com/problemset/problem/50/A) | Arithmetic, integer division | [C++ ↗](A_Domino_piling.cpp) |
| **96A** | [Football](https://codeforces.com/problemset/problem/96/A) | Strings, consecutive runs | [C++ ↗](A_Football.cpp) |
| **112A** | [Petya and Strings](https://codeforces.com/problemset/problem/112/A) | Strings, case conversion, lexicographic comparison | [C++ ↗](A_Petya_and_Strings.cpp) |
| **160A** | [Twins](https://codeforces.com/problemset/problem/160/A) | Greedy, sorting, prefix sums | [C++ ↗](A_Twins.cpp) |
| **236A** | [Boy or Girl](https://codeforces.com/problemset/problem/236/A) | Strings, sets, distinct characters, parity | [C++ ↗](A_Boy_or_Girl.cpp) |
| **263A** | [Beautiful Matrix](https://codeforces.com/problemset/problem/263/A) | Matrices, Manhattan distance | [C++ ↗](A_Beautiful_Matrix.cpp) |
| **281A** | [Word Capitalization](https://codeforces.com/problemset/problem/281/A) | Strings, character conversion | [C++ ↗](A_Word_Capitalization.cpp) |
| **318A** | [Even Odds](https://codeforces.com/problemset/problem/318/A) | Arithmetic, indexing, 64-bit integers | [C++ ↗](A_Even_Odds.cpp) |
| **339A** | [Helpful Maths](https://codeforces.com/problemset/problem/339/A) | Strings, sorting, output formatting | [C++ ↗](A_Helpful_Maths.cpp) |
| **580A** | [Kefa and First Steps](https://codeforces.com/problemset/problem/580/A) | Arrays, longest nondecreasing segment | [C++ ↗](A_Kefa_and_First_Steps.cpp) |
| **734A** | [Anton and Danik](https://codeforces.com/problemset/problem/734/A) | Strings, counting, comparison | [C++ ↗](A_Anton_and_Danik.cpp) |
| **977A** | [Wrong Subtraction](https://codeforces.com/problemset/problem/977/A) | Simulation, loops, last-digit operations | [C++ ↗](A_Wrong_Subtraction.cpp) |
| **1030A** | [In Search of an Easy Problem](https://codeforces.com/problemset/problem/1030/A) | Input scanning, flags, early exit | [C++ ↗](A_In_Search_of_an_Easy_Problem.cpp) |

## 💡 Ideas behind the solutions

- **Domino Piling:** Each domino covers two cells, so the maximum count is the board area divided by two, rounded down.
- **Football:** Track consecutive equal characters and report danger when a run reaches seven.
- **Petya and Strings:** Convert both strings to lowercase, then compare characters until the first difference.
- **Twins:** Take coins from largest to smallest until their sum exceeds the sum of the remaining coins.
- **Boy or Girl:** Count distinct characters using a set, then choose the output based on whether that count is even or odd.
- **Beautiful Matrix:** Find the `1` and add its horizontal and vertical distances from the center.
- **Word Capitalization:** Convert the first character to uppercase while preserving the rest of the word.
- **Even Odds:** Locate the position in the odd-number or even-number block and calculate its value directly.
- **Helpful Maths:** Extract the digits, sort them, and print them with plus signs between adjacent numbers.
- **Kefa and First Steps:** Count each nondecreasing contiguous segment and keep the longest length.
- **Anton and Danik:** Count each player's wins and compare the totals.
- **Wrong Subtraction:** Repeat the operation: remove a trailing zero by dividing by ten; otherwise subtract one.
- **In Search of an Easy Problem:** Print `HARD` if any participant reports `1`; otherwise print `EASY`.

## 🚀 Run a solution

You need Git and a C++ compiler with C++17 support, such as GCC or Clang.

```bash
git clone https://github.com/Uttkarshchambiyal/codeforces-problems.git
cd codeforces-problems
```

Compile and run any solution independently:

```bash
g++ -std=c++17 -O2 A_Domino_piling.cpp -o solution
./solution
```

For example, enter `3 3` to get `4`. You can also pipe input directly:

```bash
printf '3 3\n' | ./solution
```

Every `.cpp` file has its own `main()` and reads from standard input. Compile one file at a time.

## 🌱 About this journal

I'm using this repository to build consistency in competitive programming, strengthen my C++ fundamentals, and make my progress easy to explore. New solutions will be added as I solve more problems.

The index reflects the source files in this repository. All 13 solutions were compiled with C++17 and passed all 31 saved sample cases locally. Codeforces submission verdicts are not tracked here.

<div align="center">

---

**Solve · Learn · Repeat**

Built with curiosity by [Uttkarsh](https://github.com/Uttkarshchambiyal)

</div>
