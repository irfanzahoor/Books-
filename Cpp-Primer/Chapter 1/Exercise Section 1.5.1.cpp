//Exercise Section 1.5.1

//Exercise 1.20

#include<iostream>

#include "Sales_item.h"

int main()
{
	Sales_item item;
	
	while(cin >> item)
		cout << item << endl;
	
	return 0;
}

//Exercise 1.21

int main()
{
	Sales_item item1,item2;
	
	cin >> item1 >> item ;
	
	if(item1.isbn() == item2.isbn())
		cout << item1 + item2 << endl;
	
	return 0;
}

//Exercise 1.22

int main()
{
	Sales_item itemsum,item;
	
	cin >> itemsum;
	
	while(cin >> item )
		if(item.isbn() == itemsum.isbn())
			itemsum += item;
	
	cout << itemsum << endl;
	
	return 0;
}




























