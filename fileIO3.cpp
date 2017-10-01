#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;


class Contact{
    public:
    string name;
    long number;
    int m_id;
    static int id;

    Contact(){}

    Contact(string name, long number){
        this->name=name;
        this->number=number;
        this->m_id=Contact::id;
        Contact::id++;
    }

    void store(){
        ofstream of("data.sk", ios::app);
        of<<this->m_id<<"\t"<<this->name<<"\t"<<this->number<<endl;
        of.close();
    }
};

class PhoneBook{
    private:
    static string filename;
    static int curr;
    public:
    Contact *contacts;

    PhoneBook(){
        contacts=new Contact[10];
    }

    void clear(){
        ofstream outf("data.sk", ios::trunc);
        outf.close();
    }

    void add(string name, long number){
        Contact c(name, number);
        contacts[curr%10]=c;
        PhoneBook::curr++;
    }

    void storeAll(){
        for(int i=0;i<PhoneBook::curr;i++){
            contacts[i].store();
        }
    }
};

string PhoneBook::filename="data.sk";
int Contact::id=0;
int PhoneBook::curr=0;

void printAllContacts(){
    ifstream f("data.sk");
    while(f){
        string s;
        getline(f,s);
        cout<<s<<endl;
    }
}

int main(){
    // PhoneBook p;
    // p.clear();
    // p.add("Sanil", 8860009569);
    // p.add("Sanil2", 123456789);
    // p.storeAll();

    Contact c("Sanil", 8860009569);
    Contact c1("Sanil2", 8860009570);
    Contact c2("Sanil2", 8860009571);
    Contact c3("Sanil2", 8860009572);
    Contact c4("Sanil2", 8860009573);
    c.store();
    c1.store();
    c2.store();
    c3.store();
    c4.store();

    printAllContacts();
}