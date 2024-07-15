// Exercises Section 3.2.2
// Exercise 3.2: Write a program to read the standard input a line at a time.
// Modify your program to read a word at a time.

	void main()
	{
		string str;
		str = getline();
		cin >> str;
	}
	
// Exercise 3.3: Explain how whitespace characters are handled in the string
// input operator and in the getline function.

	in string input operator, whitespace is handled as end of input stream;
	
	in getline function, whitespace is handled as character ' ';


// Exercise 3.4: Write a program to read two strings and report whether the
// strings are equal. If not, report which of the two is larger. Now, change
// the program to report whether the strings have the same length, and if
// not, report which is longer.

	void main()
	{
		string s1,s2;
		
		cin >> s1 >> s2;
		
		if(s1 > s2)
			cout << "s1 is larger" << endl;
		else
			cout << "s2 is larger" << endl;
		
		if(s1.length() > s2.length())
			cout << "s1 is longer" << endl;
		else
			cout << "s2 is longer" << endl;
	}


// Exercise 3.5: Write a program to read strings from the standard input,
// concatenating what is read into one large string. Print the concatenated
// string. Next, change the program to separate adjacent input strings by a
// space.

void main()
{
	string str = "";
	string ss;
	while(cin >> ss)
		str += ss;
}