#include <iostream>
#include <cmath>
using namespace std;
int main(){ double a,b,c; if(!(cin>>a>>b>>c)) return 0; double d=b*b-4*a*c; if(a==0){ cout<<"Not quadratic\n"; } else if(d>0){ cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/(2*a)<<"\n"; } else if(d==0){ cout<<-b/(2*a)<<"\n"; } else { cout<<-b/(2*a)<<" + "<<sqrt(-d)/(2*a)<<"i and "<<-b/(2*a)<<" - "<<sqrt(-d)/(2*a)<<"i\n"; } }\n