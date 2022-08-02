#include<bits/stdc++.h>
using namespace std;

class Calculators{
    public:
        double a;
        double b;
        string type_of_operation;
        
        void setter(){
            cin>>a;
            cin>>b;
            cin>>type_of_operation;
        }
        
        void operation(){
            if(type_of_operation == "+"){
                cout<<a+b;
            }
            else if(type_of_operation == "-"){
                cout<<a-b;
            }
            else if(type_of_operation == "*"){
                cout<<a*b;
            }
            else if(type_of_operation == "/"){
                cout<<a/b;
            }
        }
};

int main(){
    Calculators cal;
    cal.setter();
    cal.operation();
}
