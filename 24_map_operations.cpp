#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){ map<string,int> mp; mp["apple"]=3; mp["banana"]=5; mp.insert(make_pair(string("cherry"),7)); for(auto &p:mp) cout<<p.first<<" -> "<<p.second<<"\n"; auto it=mp.find("banana"); if(it!=mp.end()) cout<<"Found banana: "<<it->second<<"\n"; }\n