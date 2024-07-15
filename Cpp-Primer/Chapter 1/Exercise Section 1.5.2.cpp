//Exercise Section 1.5.2

//Exercise 1.23 

int  main()
{
	Sales_item total;
	
	if(cin >> total)
	{
		Sales_item item;
		
		while(cin >> item)
			if(item.isbn() == total.isbn())
				total += item;
			else
			{
				cout << total << endl;
				total = item;
			}
		
		cout << total;
	}
	
	return total;
}

// Exercise Section 1.6