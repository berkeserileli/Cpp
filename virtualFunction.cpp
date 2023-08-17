#include <iostream>
using namespace std;

class base{
public:
     //virtual void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "derived-2\n"; }
    //void fun_4(int x) { cout << "derived-4\n"; }
};
    class derived: public base{
    public:
        //void fun_1() { cout << "derived-1\n"; }
        void fun_2() { cout << "base-2\n"; }            //virtual fun_2() olsaydý, derived classtaki fun_2() fonksiyonu calisacakti.
        //virtual void fun_3() { cout << "base-3\n"; }
        //virtual void fun_4() { cout << "base-4\n"; }
    };
       
   

    int main() {
        base* p;
        derived obj1;
        derived* p2;
        derived obj2;

        base obj3;
        p = &obj2;
        

       // p->fun_1();
        //obj3.fun_1();
        //p2->fun_1();
        // Late binding (RTP)
        p->fun_2();

        // Late binding (RTP)
        //p->fun_3();

        // Late binding (RTP)
        //p->fun_4();

        // Early binding but this function call is
        // illegal (produces error) because pointer
        // is of base type and function is of
        // derived class
        // p->fun_4(5);

    };