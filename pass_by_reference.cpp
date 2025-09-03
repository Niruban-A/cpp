#include<iostream>
using namespace std;
void Pass_by_reference(string &n){
    n="A Niruban";
    
}
int main(){
    string name="niruban";
string &ref=name;
    ref="hello";
    cout<<ref<<endl;
    cout<<name<<endl;
    Pass_by_reference(name);
    cout<<name;
    return 0;
}