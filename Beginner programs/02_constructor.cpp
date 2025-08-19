#include<iostream>
using namespace std;
int main(){
    class car{
    public:    
        string brand;
        int year;
        car(string a,int b){ //constructor
            brand=a;
            year=b;
        }
        void display(){
            cout<<brand<<"-"<<year<<"\n";
        }
    };
    car c1("Toyota",2021);
    c1.display();
    car c2("BMW",1996);
    c2.display();
    return 0;
}