#include <iostream>
using namespace std;
inline int add(int a,int b){ return a+b; } inline double add(double a,double b){ return a+b; }
int main(){ cout<<add(2,3)<<"\n"<<add(2.5,3.1)<<"\n"; }\n