#include <iostream>
using namespace std;
class Base{ public: Base(){ cout<<"Base ctor\n"; } ~Base(){ cout<<"Base dtor\n"; } };
class Derived: public Base{ public: Derived(){ cout<<"Derived ctor\n"; } ~Derived(){ cout<<"Derived dtor\n"; } };
class A{ public: A(){ cout<<"A ctor\n"; } ~A(){ cout<<"A dtor\n"; } };
class B{ public: B(){ cout<<"B ctor\n"; } ~B(){ cout<<"B dtor\n"; } };
class Multi: public A, public B{ public: Multi(){ cout<<"Multi ctor\n"; } ~Multi(){ cout<<"Multi dtor\n"; } };
int main(){ { Derived d; } cout<<"---\n"; { Multi m; } }\n