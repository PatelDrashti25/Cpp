#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x, int y) // This is a parameterized constructor as it accepts 2 parameters 
{
    a = x;
    b = y;
}

int main(){
    //Implicit call
    Complex a(4,6);

    //Explicit call
    Complex b(5,6);

    a.printNumber();
    b.printNumber();
    
    return 0;
}
