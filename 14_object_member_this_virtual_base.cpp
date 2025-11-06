#include <iostream>
using namespace std;
class Inner{ int v; public: Inner(int x=0):v(x){} void show()const{ cout<<"Inner v="<<v<<"\n"; } };
class Outer{ Inner in; int id; public: Outer(int id_,int val):in(val),id(id_){} void show()const{ cout<<"Outer id="<<id<<" -> "; in.show(); } void printThis(){ cout<<this<<"\n"; } };
class VBase{ public: VBase(){ cout<<"VBase ctor\n"; } };
class V1: virtual public VBase{}; class V2: virtual public VBase{}; class VDerived: public V1, public V2{ public: VDerived(){ cout<<"VDerived ctor\n"; } };
int main(){ Outer o(1,50); o.show(); o.printThis(); VDerived vd; }\n