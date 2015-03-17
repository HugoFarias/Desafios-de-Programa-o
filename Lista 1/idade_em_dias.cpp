#include <iostream>
 
using namespace std;
 
int main() {
 	int age;
    cin >> age;
    std::cout << age/365 << " ano(s)" << endl;
    age %= 365;
    std::cout << age/30 << " mes(es)" << endl;
    age %= 30;
    std::cout << age << " dia(s)" << endl;
    return 0;
}