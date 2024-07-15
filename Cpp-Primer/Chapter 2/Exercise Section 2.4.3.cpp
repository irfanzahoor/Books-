// Exercises Section 2.4.3
// Exercise 2.30: For each of the following declarations indicate whether the
// object being declared has top-level or low-level const.

const int v2 = 0; int v1 = v2;
high level const

int *p1 = &v1, &r1 = v1;
low level const

const int *p2 = &v2, *const p3 = &i, &r2 = v2;
p2 low level const, p3 high level const


// Exercise 2.31: Given the declarations in the previous exercise determine
// whether the following assignments are legal. Explain how the top-level or
// low-level const applies in each case.

r1 = v2;
legal; low level const;

p1 = p2; p2 = p1;
legal; high level const;

p1 = p3; p2 = p3;
illegal;l low level cosnt;


