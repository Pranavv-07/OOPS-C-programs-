#include <iostream>
using namespace std;
int value=100;
namespace A{ int value=10; void show(){ cout<<"A::value="<<value<<"\n"; } }
int main(){ int value=1; cout<<"local="<<value<<"\n"; cout<<"global="<<::value<<"\n"; A::show(); }\n