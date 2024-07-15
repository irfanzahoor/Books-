// Exercises Section 2.4.4
// Exercise 2.32: Is the following code legal or not? If not, how might you
// make it legal?

int null = 0, *p = null;

//Illegal, null pointer can only be initialized directly from 0, initialising from a variable equals 0 is not correct
//Can be fixed by 

int *p = 0;