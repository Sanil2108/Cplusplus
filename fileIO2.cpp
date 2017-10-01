#include <iostream>
#include <fstream>

using namespace std;

class Student{
    public:
    static int id;
    int m_id;
    string name;

    Student(string name){
        this->name=name;
        m_id=Student::id;
        Student::id++;
    }

    void writeToFile(){
        ofstream of("data.sk", ios::app);
        of<<this->m_id<<"\t"<<this->name<<endl;
        of.close();
    }
};

int Student::id=0;

int main(){
    Student s("Sanil");
    Student s2("Sanil2");
    Student s3("Sanil3");
    s.writeToFile();
    s2.writeToFile();
    s3.writeToFile();
}