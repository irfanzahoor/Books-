// Exercises Section 3.2.3

// Exercise 3.6: Use a range for to change all the characters in a string to
// X.
	string str = "good good study";
	for(auto ch:str)
		ch = 'X';
	
// Exercise 3.7: What would happen if you define the loop control variable in
// the previous exercise as type char? Predict the results and then change your
// program to use a char to see if you were right.

// Exercise 3.8: Rewrite the program in the first exercise, first using a while
// and again using a traditional for loop. Which of the three approaches do
// you prefer and why?

	range for, easy
	
// Exercise 3.9: What does the following program do? Is it valid? If not, why
// not?
	string s;
	cout << s[0] << endl;
	not valid, string s is empty, the output is uncertain.
	
// Exercise 3.10: Write a program that reads a string of characters including
// punctuation and writes what was read but with the punctuation removed.

	string str;
	cin >> str;
	for(auto ch:str)
	{
		if(ispunct(ch))
			continue;
		
		cout << ch;
	}
	cout<<endl;
	
// Exercise 3.11: Is the following range for legal? If so, what is the type of
// c?

const string s = "keep out!";
for (auto &c : s) { /* ... */ }

c is a character