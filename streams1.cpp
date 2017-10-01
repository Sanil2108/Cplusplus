#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream os;

    string s1;
    string s2;

    os<<"Hello, World";

    os>>s1;
    os>>s2;

    cout<<s1<<endl<<s2<<endl;

    //Converting strings into integers
    stringstream stringStream1;
    stringStream1<<"65";
    int a;
    stringStream1>>a;

    cout<<endl<<a<<endl;

    return 0;
}