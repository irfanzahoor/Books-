// Exercises Section 2.4
// Exercise 2.26: Which of the following are legal? For those that are illegal,
// explain why.
(a) const int buf;
illegal,const object has to be initialised
(b) int cnt = 0;
correct;
(c) const int sz = cnt;
correct;
(d) ++cnt; ++sz;
illegal,cnt is a const object, can not be changed during run time;