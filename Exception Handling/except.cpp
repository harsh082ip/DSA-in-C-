#include<iostream>
using namespace std;
class Test{
    public:
    Test(){
        cout<<"Constructor calls"<<endl;
    }
    ~Test(){
        cout<<"Desctructor calls"<<endl ;
    }
};
int main(){
    try{
        Test t1;
        throw 10;
    }
    catch(int i){
        cout<<"Caught "<<i<<endl;
    }
}