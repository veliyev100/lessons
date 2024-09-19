#include <iostream>
#include <vector>
int main(){
	int x = 42;
	int& ref = x;
	const int& cref = x;
	++x;
	++ref;
	//++cref nelzya
	int* ptr = &x;
	const int* cptr=&x;
	++*ptr;
	//++cptr nelzya
	std::cout<<x;
	std::cout<<ref;
}

