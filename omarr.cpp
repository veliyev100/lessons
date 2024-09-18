#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
	enum class color{white,red,blue,green};
		
int main(){
	//color color1=color::red;
	color color2=color::green;
	color color3=static_cast<color>(2);
	//int value = static_cast<int>(color3);
	std::cout<<color3;
	return 0;
}

