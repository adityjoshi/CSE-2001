//
#include<iostream>
using namespace std;

class Counter{
    public:
    int no;
    Counter(){
        no = 0;
    }
    Counter(int o){
        no = o;
    }
    void increment(){
        no++;
    }
    int displayCount(){
        return no;
    }
};

int main(){
    Counter o1;
    Counter o2(5);
    o1.increment();
    cout<<"The No. Count is "<<o1.displayCount()<<endl;
    cout<<"The No. Count is "<<o2.displayCount()<<endl;
    return 0;
}
