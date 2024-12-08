#include <iostream>
using namespace std;
void sum(int num1,int num2)
{
    int sum = num1 + num2;
    cout<<"the sum is "<<sum<<endl;
}
main (){
    
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    
    sum(num1,num2);
    
    return 0;
}