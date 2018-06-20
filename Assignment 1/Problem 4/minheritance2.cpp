#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; }
  //Default constructor for A needs to be called
  //x needs to be initialised with a default value
  //otherwise we get a garbage value
  A(){x = 5;};
  void print() { cout << x; }
};
 
class B: virtual public A
{
public:
  B():A(10) {  }
};
 
class C: virtual public A 
{
public:
  C():A(10) {  }
};
 
class D: virtual public B, virtual public C {
};
 
int main()
{
    D d;
    d.print();

    return 0;
}