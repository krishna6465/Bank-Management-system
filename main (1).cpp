#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class bank
{
   protected:
   char username[50];
   char id[10];
   int password;
   int amount=1000; //minimum balance
   
   public:
   void create()
   {
       cout<<"Enter your name: ";
       cin>>username;
       cout<<"create password: ";
       cin>>password;
   }
   void login()
   {  
       cout<<"\n\n\n";
       cout<<"***Login To Account*** ";
       Enter:
       char temp_user[50];
       int temp_pass;
     
       cout<<"\n\nEnter username: ";
       cin>>temp_user;
       cout<<"Enter password: ";
      cin>>temp_pass;
      if(temp_pass==password || temp_user==username)
      {
          cout<<"\nlogin sucessfully";
      }
      else 
      {
          cout<<"Wrong inputs \n Please Re-Enter your details\n";
          goto Enter;
      }
   }
   void choice()
   {
       int new_amt;
       int choice;
       cout<<"\n\nPlease Enter your choice:\n ";
      while(1)
     {
       cout<<"\nPress\n 1: Deposite\n 2: withdrawl\n 3: For Loan\n 4: Money transfer\n 5: for exit\n";
       cin>>choice;
     
       switch(choice)
       {
           case 1:
           cout<<"How much amount you want to Deposite: ";
           cin>>new_amt;
           amount= amount+new_amt;
           cout<<"New Amount: "<<amount;
           break;
           case 2:
           Re_enter:
           cout<<"\nHow much amount you want to withdraw: ";
           cin>>new_amt;
           if(new_amt>=1000)
           {
               cout<<"can't withdrawl more than limit";
               goto Re_enter;
           }
           else
           {
           amount=amount-new_amt;
           cout<<"Current status: "<<amount;
           }
           break;
           case 3:
           int ch;
           cout<<"Would you want to apply for loan:\n press 1\n or not press 2\n";
           cin>>ch;
           if(ch==1)
           {
               
               int apply,fd;
               char temp_user1[50];
               int temp_pass1;
               cout<<"\nHow much Amounted fixed Deposite you have in our bank: ";
               cin>>fd;
               if(fd>=50000)
               {
               cout<<"\nHow much amount you want to Apply ";
               cin>>apply;
               if(fd>apply)
               {
                   cout<<"\nEligible for loan";
                  cout<<"\nplease Re-Enter your details for further procedure: ";
                    cout<<"\n\nEnter username: ";
                     cin>>temp_user1;
                     cout<<"\nEnter password: ";
                    cin>>temp_pass1;
                    if(temp_pass1==password || temp_user1==username)
                    {
                        cout<<"\nloan is sucessfully credited in you A/c: ";
                        amount=amount+apply;
                        cout<<"\ncurrent balance: "<<amount;
                    }
                  
               }
               else
               {cout<<"\nnot eligible"; }
               }
             break;
           }
           case 4:
           char another_user[50];
           char Account_number[10];
           int money_transfer;
           cout<<"How much money you want to transfer ";
           cin>>money_transfer;
           if(amount>=money_transfer)
           {
               cout<<"Enter the person details you want to transfer money ";
               cout<<"User name: ";
               cin>>another_user;
               cout<<"Enter Account Number: ";
               cin>>Account_number;
               cout<<"Payment sucessfully Done 😍\n"; 
               amount=amount-money_transfer;
               cout<<"current balance: "<<amount;
               
           }
           else 
           {
               cout<<"not sufficient fund ";
           }
           break;
           case 5:  exit(5); break;
           default:
           cout<<"wrong inputs ";
           break;
       }
       
     }
       
   }
};
int main()
{
    bank c1;
    c1.create();
    c1.login();
    c1.choice();

    return 0;
}
