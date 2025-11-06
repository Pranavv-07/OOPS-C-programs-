#include <iostream>
using namespace std;
template<typename T> T mymax(T a,T b){ return (a>b)?a:b; }
int main(){ cout<<mymax(3,7)<<"\n"<<mymax(2.5,1.1)<<"\n"; }\n