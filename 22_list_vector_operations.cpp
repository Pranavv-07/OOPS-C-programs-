#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main(){ vector<int> v={1,2,3}; v.push_back(4); for(auto x:v) cout<<x<<" "; cout<<"\n"; list<string> L; L.push_back("one"); L.push_front("zero"); for(auto &s:L) cout<<s<<" "; cout<<"\n"; }\n