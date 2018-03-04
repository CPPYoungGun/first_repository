#include <iostream> 

class THello{
	
public:
static void Hello()
{
	std::cout << "Hello world\n";
}	
	
	
	
};

int main()
{
	//std::cout << "Hello world\n"; 
	
	THello::Hello();
	
	return 0; 
}