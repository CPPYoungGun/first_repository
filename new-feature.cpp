#include <iostream> 

class THello {

public:

	/*static void Hello()
	{
	std::cout << "Hello world\n";
	}
	*/

	void Hello()
	{
		std::cout << "Hello world\n";
		counter += 2 ; 
	}

	void getCounter() const
	{
		std::cout << counter << std::endl; 
	}

private:
	static int counter;

};

 int THello::counter = 0;


int main()
{
	//std::cout << "Hello world\n"; 
	//THello::Hello();
	THello ob1;
	ob1.Hello();
	ob1.getCounter();

	THello ob2;
	ob2.Hello();
	ob2.getCounter();
	
	//test change

	return 0;
}