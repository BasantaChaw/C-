/***
The project aims at developing an inventory management system using the C language
 that enables an organization to maintain its inventory.
**/
/*****
Application: Inventory Management System
The Programs is Coded By: Basanta_Chaudhary
*****/
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<cmath>
using namespace std;
class About
{
public:
    void description()
    {
        cout<<endl<<endl<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO INVENTORY MANAGEMNET SYSTEM PROJECT IN C/C++"<<endl;
    }
};
int main()
{
    string user_name,user_pass,user_re_pass;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t USER_NAME   ";
    cin>>user_name;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t USER_PASS   ";
    cin>>user_pass;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\tUSER_RE_PASS ";
    cin>>user_re_pass;
    cout<<endl;
    if(user_name=="admin"&&user_pass=="admin"&&user_re_pass=="admin")
    {
        system("cls");
        cout<<endl;
        About a;
        a.description();
    }
    else
    {
        cout<<"\t\t\t\t\t\t\t\t\tInvalid Pass & User";
    }

    return 0;
}
