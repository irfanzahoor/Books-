//Exercise 1.2

//Exercise 1.3
#include<iostream>

int main（）
{
	std::cout<<"Hello, World"<<endl;
	return 0;
}

//Exercise 1.4

int main()
{
	int a = 3;
	int b = 4;
	int c = a + b;
	int d = a * b;
	
	std::cout<<c<<" "<<d<<endl;
	return 0;
}

//Exercise 1.5
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;

/* It's not legal, semicolon marks the end of cout, the rest code after the
 * first semicolon has no object to output to, so it is illegal. */