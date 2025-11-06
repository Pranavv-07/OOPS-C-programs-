#include <iostream>
using namespace std;
class Box{ double w; public: Box(double ww):w(ww){} friend void printWidth(const Box &b); };
void printWidth(const Box &b){ cout<<"Width="<<b.w<<"\n"; }
int main(){ Box b(7.5); printWidth(b); }\n