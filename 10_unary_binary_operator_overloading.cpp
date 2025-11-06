#include <iostream>
using namespace std;
class Number{ int v; public: Number(int x=0):v(x){} Number operator-() const{ return Number(-v); } Number operator+(const Number &o) const{ return Number(v+o.v); } int get() const{ return v; } };
int main(){ Number a(5), b(3); Number c=a+b; Number d=-a; cout<<c.get()<<"\n"<<d.get()<<"\n"; }\n