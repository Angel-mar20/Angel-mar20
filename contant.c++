#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

class contant{
    private:
    fname[50],lname[50],address[50],email[50];
    long long phNo;

    public:
   void createContant(){
        cout<<"Enter your first name: ";
        cin>>fname;

        cout<<"Enter your last name: ";
        cin>>lname;

        cout<<"Enter your phone number: ";
        cin>>phNo;

        cout<<"Enter your address:  ";
        cin>>address;

        cout<<"Enter your e-mail: ";
        cin>>email;
    }

    void showContact(){
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        cout<<"Phone: "<<phNo <<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Email: "<<email<<endl;
    }
}