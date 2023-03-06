# Activities

## Task 1

- Refer to the following link. Discuss how the
  Recursive Factorial works:
  https://www.cs.usfca.edu/~galles/visualization/RecFact.html
  
  > Factorial is the product of all the positive integers from 1 to n. Recursive factorial function calls itself to repeat the steps in the code until the solution is completed. 
 

- Refer to the following link. Discuss how the Recursive Fibonacci works:
  https://www.cs.usfca.edu/~galles/visualization/DPFib.html

 >

## Task 2

There are `n` stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. There is a simple implementations in `./src/` folder. Discuss how the code works.

> Main function calls for function number_of_paths(int n) that checks if the variable n is less than 1, 1 or 2. Then it returns to Main with return number_of_paths(n - 1) + number_of_paths(n - 2).

## Task 3

- There are `n` stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs or **3 stairs** at a time. Write a program that counts the number of ways, the person can reach the top. You can use the following program as a starter `./src/staircase1.cpp`. Also the link below might useful:
  https://www.includehelp.com/cpp-programs/stair-case-program-to-solve-the-staircase-problem.aspx

> In staircase1.cpp


## Task 4: Individual (at home)

- What are the pros/cons of recursive over iterative Programming?
> Some problems are solved more efficiently with recursion. Recursive programs take more memory space.

- Difference between recursion and induction. Refer to the [links](#links) section below.
> Recursion is a process where the recursive function calls itself over and over again and keeps on going until an end condition is met. Induction is a way of proving a mathematical statement. 


## Links

- https://cpp.sh/
- [Difference Between Recursion and Induction](https://www.geeksforgeeks.org/difference-between-recursion-and-induction/)
- [Recursion vs Iterative Programming](https://www.softwaretestinghelp.com/recursion-in-cpp/)
