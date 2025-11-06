#include <iostream>
#include <string>
using namespace std;
template<typename T, typename U> class Duo{ T a; U b; public: Duo(T aa,U bb):a(aa),b(bb){} void show(){ cout<<a<<" and "<<b<<"\n"; } };
int main(){ Duo<int,string> d(10,"ten"); d.show(); }\n