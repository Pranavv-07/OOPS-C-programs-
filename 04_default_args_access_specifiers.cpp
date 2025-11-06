#include <iostream>
using namespace std;
void greet(const string &name="Student", const string &title="Mr./Ms."){ cout<<"Hello "<<title<<" "<<name<<"\n"; }
class Person{ int age; protected: string name; public: Person(const string &n,int a):name(n),age(a){} void display(){ cout<<name<<" is "<<age<<"\n"; } };
int main(){ greet(); greet("Pranav","Mr."); Person p("Kiran",20); p.display(); }\n