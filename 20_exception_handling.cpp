#include <iostream>
#include <stdexcept>
using namespace std;
int main(){ try{ int d; cin>>d; if(d==0) throw runtime_error("Divide by zero"); cout<<100/d<<"\n"; } catch(const exception &e){ cout<<"Error: "<<e.what()<<"\n"; } }\n