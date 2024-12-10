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

    void deleteFromFile() {
        long long phone;
        int flag = 0;
        ofstream f4;
        ifstream f5;

        f5.open("CMS.dat", ios::binary);
        f4.open("temp.dat", ios::binary);

        cout<<"Enter phone no. to delete:: ";
        cin>>phone;

        while(!fs.eof()){
            if(f5.read(reinterpret_cast<char*>(this), sizeof(*this))){
                if(phNo !=phone){
                    f4.write(reinterpret_cast<char*>(this), sizeof(*this));
                }
                else flag = 1;
            }
        }
        f5.close();
        f4.close();
        remove("CMS.dat");
        rename("temp.dat", "CMS.dat");

        flag == 1 ?;
        cout<<"\tcontact Delete....";
        cout<<"\tcontact Not found...";
    } 

    void editContact(){
        long long phone;
        fstream f6;

        cout<<"Edit contact";
        cout<<"\n============================\n";
        cout<<"Enter the phone number to be edit: ";
        cin>>phone;

        f6.open("CMD.dat",ios::binary|ios::out|ios::in);

        while(!f6.eof()){
            if(f6.read(reinterpret_cast<char*>(this), sizeof(*this))){
                if(phone == phNo){
                    cout<<"Enter new record\n";
                    createContact();

                    int pos = -1*sizeof(*this);
                    f6.seekp(pos, ios::cur);
                    f6.write(reinterpret_cast<char*>(this), sizeof(*this));
                    cout<<endl<<endl<<"\tContact Successfully updated....";
                    return;
                }
            }
        }
        cout<<"\n\nNo Record found";
        f6.close;
    } 
}

