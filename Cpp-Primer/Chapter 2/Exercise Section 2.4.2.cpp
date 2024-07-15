// Exercises Section 2.4.2
// Exercise 2.27: Which of the following initializations are legal? Explain why.
(a) int i = -1, &r = 0;
illegal;
(b) int *const p2 = &i2;
legal;
(c) const int i = -1, &r = 0;
illegal;
(d) const int *const p3 = &i2;
legal;
(e) const int *p1 = &i2;
legal;
(f) const int &const r2;
illegal;
(g) const int i2 = i, &r = i;
legal;
// Exercise 2.28: Explain the following definitions. Identify any that are illegal.
(a) int i, *const cp;
legal
(b) int *p1, *const p2;
legal
(c) const int ic, &r = ic;
legal
(d) const int *const p3;
legal
(e) const int *p;
legal
// Exercise 2.29: Uing the variables in the previous exercise, which of the
// following assignments are legal? Explain why.
(a) i = ic;
(b) p1 = p3;
(c) p1 = &ic;
(d) p3 = &ic;
(e) p2 = p1;
(f) ic = *p3;