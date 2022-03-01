# AlgorithmTestingOne

## Contents

- [Introduction](#introduction)
- [Insertion Sort Algorithm Pseudocode](#Insertion-Sort-Algorithm-Pseudocode)
- [Project Notes](#Project-Notes)
- [Algorithm Execution Process](#Algorithm-Execution-Process)
- [Final Thoughts](#Final-Thoughts)

## Introduction

In this project, I studied the algorithm sorting type INSERTION-SORT. I managed to translate the below pseudocode to C++:

## Insertion Sort Algorithm Pseudocode

```
INSERTION-SORT (A)
1.  for j = 2 to A.length
2.      key = A[j]
3.      i = j - 1
4.      while i > 0 and A[i] > key
5.            A[i+1] = A[i]
6.            i = i - 1
7.      A[i+1] = key
```

## Project Notes

Some things to note:
- `A` is denoted as the "array" input.
- `A.length` is the array number quantity.
- `key` is the main variable used for insertion.
- `i` is used for comparing with the "key" value.

Another thing to note, you will see the following conditions:
- `for (int j = 2 - 1...`
- `while (i > 0 - 1...`

The reason for using "-1" is for the sake of sticking as close as possible to the original algorithm. As all programmers should know, array position starts with "0" as opposed to "1". I have also added a lot of cout's as a way to illustrate how each iteration and comparison is handled.

## Algorithm Execution Process

The algorithm itself is 7 lines of code to achieve sorting data in ascending order. This operation is done by iterations and comparisons of the array's values.

In one of the example inputs, we have the following array input as: { 6, 1, 3, 5, 2, 4 }.
Our desired sorting output would be: { 1, 2, 3, 4, 5, 6 }.

For this particular array input, it takes 5 iterations to complete the sorting process. To give an idea of what each stage iteration looks like:
Before 1st Iteration:
```
[0] [1] [2] [3] [4] [5]
6   1   3   5   2   4
```

After 1st Iteration:
```
[0] [1] [2] [3] [4] [5]
1   6   3   5   2   4
```

After 2nd Iteration:
```
[0] [1] [2] [3] [4] [5]
1   3   6   5   2   4
```

After 3rd Iteration:
```
[0] [1] [2] [3] [4] [5]
1   3   5   6   2   4
```

After 4th Iteration:
```
[0] [1] [2] [3] [4] [5]
1   2   3   5   6   4
```

After 5th (and final) Iteration:
```
[0] [1] [2] [3] [4] [5]
1   2   3   4   5   6
```

## Final Thoughts

I have learned a lot from studying this sorting algorithm. I aim to learn more algorithms and see what I can put to use for my own programs. I hope this has been insightful for you. On that note, happy coding and learning!
