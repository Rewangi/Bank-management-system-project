#include<iostream>
#include<stdio.h>
#include<cctype>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<direct.h>
#include<process.h>
#include<time.h>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <cctype>
#include <iomanip>
#include<windows.h>
using namespace std;
class customer
{
        char nm[20];
        long phno;
        long pano;
        char bg[10];
    public:
        void acceptc(){
            cout<<"\n Enter Customer Name      :  ";
                cin>>nm;
                cout<<"\n Enter Customer Phone No. :  ";
                cin>>phno;
                cout<<"\n Enter PAN no. :";
                cin>>pano;
                cout<<"\n Enter Customer Blood Group. : ";
                cin>>bg;
        }
    
        void dispc()
             {
                cout<<"\n Details of Customer \n";
                cout<<"\n ----------------------------------------\n";
                cout<<"\n Customer Name            :  "<<nm;
                cout<<"\n Customer Phone No.       :  "<<phno;
                cout<<"\n Customer PAN no. : "<<pano;
                cout<<"\n Customer Blood group. : "<<bg;   
        }
        
    
};
void registr();
void login();

class account
{
    int acno;
    char name[50];
    int deposit;
    char type;
public:
    void create_account();  
    void show_account() const;  
    void modify();  
    void dep(int);  
    void draw(int); 
    void report() const;    
    int retacno() const;    
    int retdeposit() const; 
    char rettype() const;   
};  

 class loan :public account
{
 public:
double amount;
double rates;
int years;

void inputFunction()
{
cout<<"\n Enter the amount of the loan: ";
cin>>amount;
if(amount > 100000)
{
cout<<"\n Error: Amount Exceeds $100,000.00";
return;

}
cout<<"\n Enter the annual interest rate (example 3 = 3%):";
cin>>rates;
if(rates > 22)
{
cout<<"\n Error: Rates Exceeds 22%";
return;

}
cout<<"\n Enter the Duration of the Loan in years:";
cin>>years;
if(years > 6)
{
cout<<"\n Error: Years Exceeds 6";
return;

}
}

void outputFunction()
{
 double emi = 0;
 double paybackamt = 0;
double interest = (amount*rates*years)/100;
paybackamt = amount + interest;
emi = paybackamt/(years*12);
cout<<"\n\n";
cout<<left<<"\tLoan Amount emi: "<<emi;
cout<<right;
}
};

void account::create_account()
{
    cout<<"\nEnter The account No. : "; cin>>acno;
    cout<<"\n\nEnter The Name of The account Holder : ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nEnter Type of The account (C/S) : "; cin>>type;
    type=toupper(type);
    cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
    cin>>deposit;
    cout<<"\n\n\nAccount Created..";
}
 
void account::show_account() const
{
    cout<<"\nAccount No. : "<<acno;
    cout<<"\nAccount Holder Name : ";
    cout<<name;
    cout<<"\nType of Account : "<<type;
    cout<<"\nBalance amount : "<<deposit;
}
 
 
void account::modify()
{
    cout<<"\nAccount No. : "<<acno;
    cout<<"\nModify Account Holder Name : ";
    cin.ignore();
    cin.getline(name,50);
    cout<<"\nModify Type of Account : "; cin>>type;
    type=toupper(type);
    cout<<"\nModify Balance amount : "; cin>>deposit;
}
 
     
void account::dep(int x)
{
    deposit+=x;
}
     
void account::draw(int x)
{
    deposit-=x;
}
     
void account::report() const
{
    cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}
     
int account::retacno() const
{
    return acno;
}
 
int account::retdeposit() const
{
    return deposit;
}
 
char account::rettype() const
{
    return type;
}
void write_account();  
void display_sp(int);   
void modify_account(int);   
void delete_account(int);   
void display_all();     
void deposit_withdraw(int, int); 
void intro();   
 

void date()
{
  time_t T= time(NULL);
  struct  tm tm = *localtime(&T);
  cout<<endl<<endl<<endl;
  printf("\t\t\t\t\t   Date :: %02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
}


void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void callExit()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t");
    fflush(stdin);
    printf("You are out of the System.");
    printf("\n\n");
    printf("\t\t\t\t");
    printf("   Press Enter to Continue Exit Program...");
    getchar();
    exit(0);
}

void mainpage()
{
    system("Color B5");

  int process=0;
  system("cls");
  date();
  cout<<endl;
  printf("\t\t\t\t    ---------------------------\n");
  printf("\t\t\t\t     |Welcome to Rewangi's Bank |\n");
  printf("\t\t\t\t    ---------------------------\n");
  cout<<endl<<endl<<endl;
  printf("\t\t\t\t");
  printf("Prepared By    :");
  printf("   Rewangi Taragi");
  printf("\n\n");
  printf("\t\t\t\t");
  printf(" Project    :");
  printf("   Bank Management System");

  printf("\n\n");
  printf("\t\t\t\t");
  printf("\n\n");
  printf("\t\t\t\t    Press Enter to continue......");
  printf("\n\n");
  getchar();
  printf("\t\t\t\tLoading");

  for(process=0;process<25;process++)
  {
    delay(150);
    printf(".");
  }

}
 fun()
 {
     int choice;

        cout<<"***********************************************************************\n\n\n";

        cout<<"                      Welcome to login page                               \n\n";

        cout<<"*******************        MENU        *******************************\n\n";

        cout<<"1.LOGIN"<<endl;

        cout<<"2.REGISTER"<<endl;

        cout<<"3.Exit"<<endl;

        cout<<"\nEnter your choice :";

        cin>>choice;

        cout<<endl;

        switch(choice)

        {
             case 1:

                 login();

                 break;

                case 2:

                     registr();

                     break;
                 case 3:

                        cout<<"Thanks for using this program";

                        break;

                default:

                        system("cls");

                        cout<<"You've made a mistake , Try again..\n"<<endl;

                        fun();

        }

 }
 choice(){
     customer c;
        cout<<"\n\n\n\t CUSTOMER DETAILS";
        c.acceptc();
        c.dispc();
        loan l;

    char ch;
    int num;
    do
    {
        system("cls");
       cout<<"\n\n\t. MAIN MENU";
        cout<<"\n\n\t01. NEW ACCOUNT";
        cout<<"\n\n\t02. DEPOSIT AMOUNT";
        cout<<"\n\n\t03. WITHDRAW AMOUNT";
        cout<<"\n\n\t04. BALANCE ENQUIRY";
        cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout<<"\n\n\t06. CLOSE AN ACCOUNT";
        cout<<"\n\n\t07. MODIFY AN ACCOUNT";
        cout<<"\n\n\t08. Loan Amount ";

        cout<<"\n\n\t09. EXIT";
        cout<<"\n\n\tSelect Your Option (1-9) "; cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
            write_account();
            break;
        case '2':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            deposit_withdraw(num, 1);
            break;
        case '3':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            deposit_withdraw(num, 2);
            break;
        case '4': 
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            display_sp(num);
            break;
        case '5':
            display_all();
            break;
        case '6':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            delete_account(num);
            break;
         case '7':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            modify_account(num);
            break;
            case '8':
            cout<<"\n\ntEnter loan amount:";
            l.inputFunction();
            l.outputFunction();
            break;

         case '9:':
            cout<<"\n\n\tThanks for using bank managemnt system";
            break;
         default :cout<<"\a";
        }
        cin.ignore();
        cin.get();
    }while(ch!='8');
 }
 
int main()

{  
     mainpage();
    fun();

    return 0;
}
 
void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("account.dat",ios::binary|ios::app);
    ac.create_account();
    outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
    outFile.close();
}
 
void display_sp(int n)
{
    account ac;
    bool flag=false;
    ifstream inFile;
    inFile.open("account.dat",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    cout<<"\nBALANCE DETAILS\n";
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()==n)
        {
            ac.show_account();
            flag=true;
        }
    }
    inFile.close();
    if(flag==false)
        cout<<"\n\nAccount number does not exist";
}
void login()
{
        int count;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;
        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)
                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello"<<user<<endl<<"\n<LOGIN SUCCESSFUL>\nThanks for logging in..\n";
                cin.get();
                cin.get();
                choice();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                fun();
        }
}
void registr()
{
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;
        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";
        fun();
         system("Color E4");
  
}
 
 
  
 
void modify_account(int n)
{
    bool found=false;
    account ac;
    fstream File;
    File.open("account.dat",ios::binary|ios::in|ios::out);
    if(!File)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    while(!File.eof() && found==false)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));
        if(ac.retacno()==n)
        {
            ac.show_account();
            cout<<"\n\nEnter The New Details of account"<<endl;
            ac.modify();
            int pos=(-1)*static_cast<int>(sizeof(account));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(account));
            cout<<"\n\n\t Record Updated";
            found=true;
          }
    }
    File.close();
    if(found==false)
        cout<<"\n\n Record Not Found ";
}
 
 
 
void delete_account(int n)
{
    account ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open("account.dat",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    outFile.open("Temp.dat",ios::binary);
    inFile.seekg(0,ios::beg);
    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()!=n)
        {
            outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
        }
    }
    inFile.close();
    outFile.close();
    remove("account.dat");
    rename("Temp.dat","account.dat");
    cout<<"\n\n\tRecord Deleted ..";
}
 
 
void display_all()
{
    account ac;
    ifstream inFile;
    inFile.open("account.dat",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    cout<<"\n\n\t\tACCOUNT HOLDER LIST\n\n";
    cout<<"====================================================\n";
    cout<<"A/c no.      NAME           Type  Balance\n";
    cout<<"====================================================\n";
    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        ac.report();
    }
    inFile.close();
}
 
 
void deposit_withdraw(int n, int option)
{
    int amt;
    bool found=false;
    account ac;
    fstream File;
    File.open("account.dat", ios::binary|ios::in|ios::out);
    if(!File)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    while(!File.eof() && found==false)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));
        if(ac.retacno()==n)
        {
            ac.show_account();
            if(option==1)
            {
                cout<<"\n\n\tTO DEPOSITE AMOUNT ";
                cout<<"\n\nEnter The amount to be deposited"; cin>>amt;
                ac.dep(amt);
            }
            if(option==2)
            {
                cout<<"\n\n\tTO WITHDRAW AMOUNT ";
                cout<<"\n\nEnter The amount to be withdraw"; cin>>amt;
                int bal=ac.retdeposit()-amt;
                if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
                    cout<<"Insufficience balance";
                else
                    ac.draw(amt);
              }
            int pos=(-1)*static_cast<int>(sizeof(ac));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(account));
            cout<<"\n\n\t Record Updated";
            found=true;
           }
         }
    File.close();
    if(found==false)
        cout<<"\n\n Record Not Found ";
}