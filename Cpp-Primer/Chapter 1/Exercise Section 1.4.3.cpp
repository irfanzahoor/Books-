//Sample 1.4.3

#include<iostream>

int main（）
{
	int sum = 0,value = 0;
	
	while(std::cin >> value)
		sum += value;
	
	std::cout << sum << std::endl;
	
	return 0;
}


