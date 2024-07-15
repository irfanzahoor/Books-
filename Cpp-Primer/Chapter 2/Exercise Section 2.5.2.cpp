// Exercises Section 2.5.2
// Exercise 2.33: Using the variable definitions from this section, determine
// what happens in each of these assignments:

a = 42; b = 42; c = 42;
d = 42; e = 42; g = 42;

// Exercise 2.34: Write a program containing the variables and assignments
// from the previous exercise. Print the variables before and after the
// assignments to check whether your predictions in the previous exercise were
// correct. If not, study the examples until you can convince yourself you know
// what led you to the wrong conclusion.


// Exercise 2.35: Determine the types deduced in each of the following
// definitions. Once you’ve figured out the types, write a program to see
// whether you were correct.

const int i = 42;
auto j = i; const auto &k = i; auto *p = &i;
const auto j2 = i, &k2 = i;