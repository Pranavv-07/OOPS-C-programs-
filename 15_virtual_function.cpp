#include <iostream>
using namespace std;
class Base{ public: virtual void show(){ cout<<"Base\n"; } void nv(){ cout<<"Base nonvirtual\n"; } };
class Derived: public Base{ public: void show() override{ cout<<"Derived\n"; } void nv(){ cout<<"Derived nonvirtual\n"; } };
int main(){ Base *b = new Derived(); b->show(); b->nv(); delete b; }\n