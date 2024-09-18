#include <iostream>
enum class Color {white, red,orange,blue};

struct Point{
	double x = 0.0;
	double y = 0.0;
	double z = 0.0;
    Color color;
};
int main(){
	int a,b,c;
	Point point1;
	point1.color = Color::blue;
	Point point2 = {1.4,-2.2,-3.98,Color::red};
	point2.z = 32;
	point2.x += 2;
	a = sizeof(point1);
	std::cout<<a<<"\n";
	b = sizeof(double);
	std::cout<<b<<"\n";
	c = sizeof(Color);
	std::cout<<c<<"\n";
	
}
