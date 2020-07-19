# DYNAMIC PROGRAMMING
**1. Top-Down :** Start solving the given problem by breaking it down. If you see that the problem has been solved already, then just return the saved answer. If it has not been solved, solve it and save the answer. This is usually easy to think of and very intuitive. This is referred to as Memoization.

**2. Bottom-Up :** Analyze the problem and see the order in which the sub-problems are solved and start solving from the trivial subproblem, up towards the given problem. In this process, it is guaranteed that the subproblems are solved before solving the problem. This is referred to as Dynamic Programming.

_Note that divide and conquer is slightly a different technique. In that, we divide the problem in to non-overlapping subproblems and solve them independently, like in mergesort and quick sort._

Majority of the Dynamic Programming problems can be categorized into two types:
- Optimization problems.
- Combinatorial problems.

The optimization problems expect you to select a feasible solution, so that the value of the required function is minimized or maximized. Combinatorial problems expect you to figure out the number of ways to do something, or the probability of some event happening.


**3. HOW TO SORT BY NOT LOSING TRACK OF INITIAL INDEX**
Make pairs and store index and value. Sort by using the following function.
 ```c++
 bool byX(const Frog &a, const Frog &b)
{
	return a.x < b.x;
}
 ```
