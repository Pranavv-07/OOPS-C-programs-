#include <iostream>
using namespace std;
class Demo{ public: Demo(){ cout<<"Ctor\n"; } ~Demo(){ cout<<"Dtor\n"; } };
int main(){ cout<<"Before\n"; Demo d; cout<<"After\n"; }\n