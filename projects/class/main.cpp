/* #include <iostream>
#include "time.h"

int main() {
    chron::Time t(13, 30, 0);  
    std::cout << t.GetHours() << ":"; 
    std::cout << t.GetMinutes()  << ":"; 
    std::cout << t.GetSeconds(); 
}
*/
#include "time.h"
bool IsAfternoonTime(const chron::Time& time) {
    return time.GetHours() >= 12;
}

#include <iostream>
int main() {
    chron::Time t(13, 30, 0);
    if (IsAfternoonTime(t)) {  
        std::cout << t.GetHours() - 12 << "PM\n";
    }
}
