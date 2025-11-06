#include <iostream>
using namespace std;
int main(){ try{ int ch; cin>>ch; if(ch==1) throw 10; else if(ch==2) throw "oops"; else throw 2.5; } catch(int x){ cout<<"int "<<x<<"\n"; } catch(const char* s){ cout<<"cstr "<<s<<"\n"; } catch(...){ cout<<"other\n"; } }\n