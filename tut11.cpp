#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice; //4 byte
    char car; //1  byte
    float pounds; //4 byte
};


int main(){

    enum meal{ breakfast, lunch, dinner};
    meal m1 = breakfast;
    cout<<(m1==2);
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;
    // harry.eid = 1;
    // harry.favchar = 'c';
    // harry.salary = 1200000;
    // cout<<"The value is "<<harry.eid<<endl;
    // cout<<"The value is "<<harry.favchar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    
    return 0;
}
