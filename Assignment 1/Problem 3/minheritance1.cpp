#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public A
{
public:
  B()  { setX(10); }
};
 
class C:  public A  
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;

    /*  The printf function is ambiguous as the
        inheritance tree defines a print for each
        child class and the compiler does not know
        which one to call.
    */
    //d.print();

    /* You can specify which parent class you call
       the function from. This tells the compiler to
       print using the print function in the parent
       class B
    */
    d.B::print();
  
    return 0;
}