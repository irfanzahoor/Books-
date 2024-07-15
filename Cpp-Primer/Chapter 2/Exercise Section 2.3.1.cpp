//Exercise Section 2.3.1

//Exercise 2.15
(a) int ival = 1.01;	//valid, ival = 1, truncated
(b) int &rval1 = 1.01;	//not valid, must refer to a object
(c) int &rval2 = ival;	//valid, ival = 1, rval2 refer to ival;
(d) int &rval3;			//not valid, reference must be initialzied

//Exercise 2.16
int i = 0, &r1 = i; double d = 0, &r2 = d;
(a) r2 = 3.14159;	//valid
(b) r2 = r1;		//
(c) i = r2;
(d) r1 = d;
//Exercise 2.17

10 10