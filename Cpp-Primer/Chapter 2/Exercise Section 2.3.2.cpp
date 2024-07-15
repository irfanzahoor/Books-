//Exercises Section 2.3.2

// Exercise 2.18: Write code to change the value of a pointer. Write code to
// change the value to which the pointer points.
int i = 0;
int *p = &i;

p++;
*p++;

// Exercise 2.19: Explain the key differences between pointers and references.
pointer is a object that holds the address of a another object;

reference is the alias of another object;


// Exercise 2.20: What does the following program do?
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;

i = 42*42;


// Exercise 2.21: Explain each of the following definitions. Indicate whether
// any are illegal and, if so, why.
int i = 0;
(a) double* dp = &i;	//data type not match
(b) int *ip = i;		//data type not match
(c) int *p = &i;		//legal


// Exercise 2.22: Assuming p is a pointer to int, explain the following code:
if (p) // ...
If p is null pointer, then the if condition is false

if (*p) // ...
If the int variable  p points to is 0, then the if condition is false

// Exercise 2.23: Given a pointer p, can you determine whether p points to a
// valid object? If so, how? If not, why not?
yes, determine by comparing data type and valid format;


// Exercise 2.24: Why is the initialization of p legal but that of lp illegal?
// Click here to view code image
int i = 42; void *p = &i; long *lp = &i;

data type doesn't match