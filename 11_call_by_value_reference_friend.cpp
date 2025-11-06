#include <iostream>
using namespace std;
class S{ int x; public: S(int v):x(v){} friend void mv(S s); friend void mr(S &s); void show()const{ cout<<x<<"\n"; } };
void mv(S s){ s.x=100; cout<<"inside mv\n"; } void mr(S &s){ s.x=200; cout<<"inside mr\n"; }
int main(){ S obj(10); obj.show(); mv(obj); obj.show(); mr(obj); obj.show(); }\n