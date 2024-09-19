#include <iostream>
#include <vector>
int main(){
	const int cx=42;
	//int& ref = cx;nelzya
	const int& cref = cx;
	//int* ptr = &cx;nelzya
	const int* cptr = &cx;
}
