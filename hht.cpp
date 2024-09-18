#include <iostream>
#include <string>
int main(){
	std::string  s="some string";
	s +=' ';
	s +="functions";
	std::cout<<s<<"\n";
	//std::string sub1=s.substr(5,6);
	//std::string sub2=s.substr(12);
	//std::cout<<sub1<<' ';
	//std::cout<<sub2<<' ';
	//size_t  pos1=s.find(' ');
	//size_t  pos2=s.find(' ',pos1+1);
	size_t  pos3=s.find("str");
	//size_t  pos4=s.find("#");
   // std::cout<<pos1<<' ';
	//std::cout<<pos2<<' ';
    std::cout<<pos3<<' ';
   // std::cout<<pos4<<' ';
    
	return 0;
}
