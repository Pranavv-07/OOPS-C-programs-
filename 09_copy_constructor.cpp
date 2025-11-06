#include <iostream>
using namespace std;
class Sample{ int *p; public: Sample(int v=0){ p=new int(v); cout<<"Constructed\n"; } Sample(const Sample &s){ p=new int(*s.p); cout<<"Copied\n"; } ~Sample(){ delete p; cout<<"Destroyed\n"; } void set(int v){ *p=v; } int get() const{ return *p; } };
int main(){ Sample s1(10); Sample s2 = s1; s2.set(20); cout<<"s1="<<s1.get()<<", s2="<<s2.get()<<"\n"; }\n