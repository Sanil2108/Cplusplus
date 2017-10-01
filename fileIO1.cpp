#include <fstream>
#include <iostream>

using namespace std;

int main(){
    fstream f("temp.sk", ios::out | ios::trunc);
    f<<"abcd\nabcde\nabcdef";

    f.close();
    
    ifstream ifs("temp.sk");
    string s;
    while(ifs){
        getline(ifs, s);
        cout<<s<<endl;
    }

    ifs.close();
}