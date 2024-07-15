//Exercise Section 1.4.1

//Exercise 1.9

void main（）
{
	int num = 50;
	int sum = 0;
	
	while(num <= 100)
		sum += num;
	
	cout<<sum<<endl;
}

//Exercise 1.10

void main()
{
	int num = 10;
	
	while(num >= 0)
	{
		cout<<num<<endl;
		num--;
	}
}

//Exercise 1.11

void main()
{
	int start,end;
	
	cout<<"input start:";
	cin>>start;
	cout<<"input end:";
	cin>>end;
	cout<<endl;
	
	while(start <= end)
	{
		cout<<start<<endl;
		start++;
	}
}