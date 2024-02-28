//increment function using friend function
#include<iostream>
using namespace std;

class A{
    private:
        int a ;
    public:
        A(){
            a=10;
        }
    friend int increment(A x);
        
};
int increment(A x){
    x.a +=1;
    return x.a;
}

int main(){
    A s;
    int sum;
    sum = increment(s);
    cout<<"incremented value of a is "<<sum<<endl;
    return 0;
}
