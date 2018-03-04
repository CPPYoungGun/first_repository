#include <iostream> 

class THello{
	
public:

/*static void Hello()
{
	std::cout << "Hello world\n";
}	
*/

void Hello()
{
	std::cout << "Hello world\n";
}
	
	
};

int main()
{
	//std::cout << "Hello world\n"; 
	//THello::Hello();
	THello ob1;
	ob1.Hello(); 
	
	return 0; 
}