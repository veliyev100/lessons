#include <iostream>
void Swap(int&x,int& y){
	int z = x;
	x = y;
	y = z;
}
int main(){
	int a = 1;
	int b = 2;
	Swap(a,b);
	std::cout<<a<<" "<<b<<" ";
}
