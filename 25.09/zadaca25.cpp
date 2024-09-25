#include <deque>
#include <iostream>
int main() {
	std::deque<int> d = {1,2,3,4};
	d.push_back(5);//dobavlyayet v konec
	d.push_back(6);
	d.pop_back();//udalyayet cislo v konce
	
	d.push_front(0);//dobovlyayet v nacalo cislo
	d.push_front(-1);
	d.pop_front();//udalyayet v nacale cislo
	
	for(size_t i = 0; i != d.size(); ++i) {// perviy sposob vivdoa
		std::cout << d[i] << "\n";
	}
	//for (int x : d) { //vtoroy sposob vivoda
		//std::cout << x << "\n";
	//}
}
