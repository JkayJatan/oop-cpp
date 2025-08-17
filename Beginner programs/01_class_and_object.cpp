//Class & Object (student details)
#include<iostream>
using namespace std;
int main(){
    class student{
    //scope    
    public: 
        //properties or atributes
        string name;
        int rollno;  
        //member function
        void display(){
            cout<<"Name = "<<name<<"\n"<<"Roll no = "<<rollno;
        }  
    };
    student s1;
    s1.name="John";
    s1.rollno=24;
    s1.display();
    return 0;
}