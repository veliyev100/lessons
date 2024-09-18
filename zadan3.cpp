#include <iostream>
#include <utility>
int main(){
	std::pair<std::string,int>p={"Hello",42};
	auto [word,freq] = p;
	//(auto)sam podobral elemti iz pari p
	std::cout<<word<<freq;
}
		
		
