// Exercises Section 2.6.1
// Exercise 2.39: Compile the following program to see what happens when
// you forget the semicolon after a class definition. Remember the message for
// future reference.

struct Foo { /* empty */ } // Note: no semicolon
int main()
{
	return 0;
}

// Exercise 2.40: Write your own version of the Sales_data class.

struct Sales_data
{
	std::string item_name;
	int item_price;
	int num_of_item_sold;
};


