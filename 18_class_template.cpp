#include <iostream>
#include <string>
using namespace std;
template<typename T> class Pair{ T a,b; public: Pair(T x,T y):a(x),b(y){} void show(){ cout<<a<<" , "<<b<<"\n"; } };
int main(){ Pair<int> p(1,2); p.show(); Pair<string> q("hi","bye"); q.show(); }\n