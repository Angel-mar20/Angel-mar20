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

    void writeOnFile(){
        char ch;
        ofstream f1;
        fi.open("CMS.dat", ios::binary | ios::app );

        do {
            createContant();
            f1.write(reinterpret_cast<char*>(this), sizeof(*this));
            cout << "Do you have next data?(y/n)";
            cin>>ch;
        }while(ch=='y');

        cout<<"contact has been succefully created...";
        f1.close();
    } 

   void readFromFile(){
    ifstream f2;
    f2.open("CMS.dat",ios::binary);

     cout<<"\n======================================\n";
     cout<<"LIST OF CONTACT";
     cout<<"\n======================================\n";
     while (!f2.eof()) 
        {
            if(f2.read(reinterpret_cast<char*>(this), sizeof(*this))){
              showContant();
              cout<<"\n====================================\n";
            }
        }
     f2.close();
   } 

   void searchOnFile (){
    ifstream f3;
    long long phone; 
    cout<<"Enter phone no: ";
    cin>>phone;
    f3.open("CMS.dat", ios::binary);

     while(!f3.eof()){
         if(f3.read(reinterpret_castchar*>(this),sizeof(*this))){
              if(phone == phNo){
                  showContact();
                  return;
                }
            }
        }
        cout<<"\n\nNo record found" ;
        f3.close();
    }
}