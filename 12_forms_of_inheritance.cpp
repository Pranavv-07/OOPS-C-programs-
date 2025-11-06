#include <iostream>
using namespace std;
// single, multilevel, multiple demonstrated
class Base{ public: void fb(){ cout<<"Base\n"; } };
class Single: public Base{};
class A{ public: A(){ cout<<"A\n"; } };
class B: public A{ public: B(){ cout<<"B\n"; } };
class C: public B{ public: C(){ cout<<"C\n"; } };
class X{ public: void fx(){ cout<<"X\n"; } }; class Y{ public: void fy(){ cout<<"Y\n"; } };
class Multiple: public X, public Y{};
int main(){ Single s; s.fb(); C c; Multiple m; m.fx(); m.fy(); }\n