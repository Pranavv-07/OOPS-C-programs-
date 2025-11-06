#include <iostream>
using namespace std;
long long fact(int n){ long long r=1; for(int i=2;i<=n;++i) r*=i; return r; }
int main(){ int n; if(!(cin>>n)) return 0; if(n<0){ cout<<"NA\n"; return 0;} cout<<fact(n)<<"\n"; }\n