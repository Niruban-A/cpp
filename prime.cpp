#include<iostream>
using namespace std;
int main(){int num;
    int count=0;
    cout<<"enter the number:)";
    cin>>num;
    for (int i=1;i<=num;i++){
        if (num%i==0)
        count+=1;
        
    }
    if (count==2)
    cout<<"it is the prime number"<< endl;
    else
    cout<<"it is not a prime number"<< endl;
    


}