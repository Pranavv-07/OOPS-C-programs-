#include <iostream>
using namespace std;
class Point{ int x,y; public: Point():x(0),y(0){} Point(int a,int b):x(a),y(b){} Point(int v):x(v),y(v){} void show(){ cout<<"("<<x<<","<<y<<")\n"; } };
int main(){ Point p1; Point p2(3,4); Point p3(5); p1.show(); p2.show(); p3.show(); }\n