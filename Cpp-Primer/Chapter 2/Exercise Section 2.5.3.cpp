// Exercises Section 2.5.3
// Exercise 2.36: In the following code, determine the type of each variable
// and the value each variable has when the code finishes:

int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;

// Exercise 2.37: Assignment is an example of an expression that yields a
// reference type. The type is a reference to the type of the left-hand operand.
// That is, if i is an int, then the type of the expression i = x is int&. Using
// that knowledge, determine the type and value of each variable in this code:

int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;


// Exercise 2.38: Describe the differences in type deduction between
// decltype and auto. Give an example of an expression where auto and
// decltype will deduce the same type and an example where they will deduce
// differing types.