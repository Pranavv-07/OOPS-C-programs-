#include <iostream>
using namespace std;
class Shape{ public: virtual double area() const=0; virtual ~Shape(){}; };
class Circle: public Shape{ double r; public: Circle(double rr):r(rr){} double area() const override{ return 3.1415926535*r*r; } };
int main(){ Circle c(2.5); cout<<c.area()<<"\n"; }\n