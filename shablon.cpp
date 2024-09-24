#include <iostream>
#include <string>
#include <vector>
template <typename T>
T Max (const T& x,const T& y){
/*int Max(int x, int y)8{*/
	if (x > y)
		 return x;
	else
		 return y;
}
template <typename T>
const std::vector <T>& Max(const std:: vector<T>& v1,const std::vector<T>& v2)
{
	if (v1.size() > v2.size()){
		return v1;
	}else if (v1.size() < v2.size()){
		return v2;
	}else if (v1>v2){
		return v1;
	}else {
		return v2;
	}
}

int main (){
	std::cout<<Max(1,2)<<"\n";
	std::vector<int> v1 = {1,2,3};
	std::vector<int> v2 = {4,5};
	for (const int& x : Max(v1,v2)){
		std::cout<<x<<" ";
	}
	std::cout <<"\n";
	/*std::cout<<Max(3.14159,2.71828)<<"\n";
	std::string word1 = {"hello"};
	std::string word2 = {"world"};
	std::cout<<Max(word1,word2)<<"\n";*/
	return 0;
}
	
	
