#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

struct adlogin

{
    char aname[100];
    char alname[20];
    char adnid[20];
    char adpass[100];
    char regnu[50];
    char location[60];
    char adphone[50];


};
struct adlogin ad;
struct login

{
    char Firstname[50];
    char Lastname[20];
    char username[20];
    char password[20];
    char nid[50];
    char Vehicle[60];
    char Phone[50];
    char Pin[10];
    char Pay[20];
    char pass[20];
    char VeN[50];


};
struct login l;
char VeN[50];
char REGVN[30];
void login();
void Register();
void forgot();
void viewrecord();
void adp();
void monthlys();
void paymenthistory();
void mainmenu();
void adminmenu();
void PaymentandTollPlaza();
void customer();
void admainmenu();
void updateinfo();
void admin();
void paymentrecord();
void paymentmethode();
void payment();
void addrecord();
void SearchRe();
void admininfo();
void success();
void Card();
void Bkash();
void Nogod();
void Rocket();
void Cash();
void details();
void aboutus();
void administerad();
void ADRegester();
void Profile();
void adProfile();
void user();
void admininfoupdate();
void adminlr();
void adlogin();
void Buspayment();
void Truckpayment();
void MiniTruckpayment();
void Privetpayment();
void Micropayment();
void Bikepayment();
void adaboutus();
int Bmul;
int mul;
int MTmul;
int PCmul;
int Mmul;
int Bimul;

int VN;
double BUS = 2000.00;
double Truck = 2800.00;
double MINITRUCK = 1600.00;
double PRIVATECAR = 750.00;
double MICRO = 1300.00;
double MOTORBIKE = 100.00;

FILE *fp,*Bu;
int main()
{






    system("cls");
    system("color f0");
    int my;
    cout<<endl<<endl<<endl;
    cout<<"                  |-----------------------Bangladesh Road Transport Authority(BRTA)-----------------|"<<endl;
    cout<<"                  |-----------------------                MAIN                     -----------------|"<<endl;
    cout<<"\n\n\n\n                  1.Join As Admin (Officer)"<<endl;
    cout<<endl<<"                  2.Join As User (User)"<<endl;
    cout<<endl<<"                   3.Exit "<<endl<<endl;
    cout<<"                  Your Choice Sir :  ";

    cin>>my;
    switch(my)
    {
    case 1:
        system("CLS");
        adminlr();
        break;

    case 2:

        system("CLS");
        user();
        break;

    case 3:

        system("CLS");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        break;
    }
}

void user()
{

    system("cls");
    cout<<"\n              -----------------------Bangladesh Road Transport Authority-----------------";
    cout<<"\n\n              -----------------------Please Register or Login First(User) -----------------";
    cout<<"\n\n\n\n \t\t\t\t\t 1. Press '1' For Registration \n";
    cout<<"\n \t\t\t\t\t 2. Press '2' For Login \n"<<endl;
    cout<<" \t\t\t\t\t 3. Press '3' For Return Main \n"<<endl;
    cout<<" \t\t\t\t\t 4. Exit "<<endl<<endl;
    cout<<" \t\t\t\t\t Your Choice Sir :  ";

    int u;
    cin>>u;

    switch(u)
    {
    case 1:
        system("CLS");
        Register();
        break;

    case 2:

        system("CLS");
        login();
        break;

    case 3:

        system("CLS");
        main();
        break;

    case 4:

        system("CLS");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        break;


    }
}

void adminlr()
{
    system("CLS");

    cout<<"\n              -----------------------Bangladesh Road Transport Authority-----------------";
    cout<<"\n\n              -----------------------[ADMIN] Register & Login  -----------------";
    cout<<"\n\n\n\n \t\t\t\t\t 1. Press 1 For Registration \n";
    cout<<"\n \t\t\t\t\t 2. Press 2 For Login \n";
    cout<<"\n \t\t\t\t\t 3.Press 3 For Return Main "<<endl;
    cout<<"\n \t\t\t\t\t 4.Exit "<<endl<<endl;
    cout<<"\n                                 Your Choice Sir :  ";
    int adm;
    cin>>adm;
    switch(adm)
    {

    case 1:
        system("CLS");
        ADRegester();
        break;

    case 2:

        system("CLS");
        adlogin();
        break;

    case 3:

        system("CLS");
        main();
        break;

    case 4:

        system("CLS");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        break;

    }
}
void login()
{
    char username[100];
    char password[20];
    FILE * Log;
    Log=fopen("Login&Register.txt","r");
    struct login l;
    cout<<"\n\n\n\n              -----------------------Bangladesh Road Transport Authority-----------------";
    cout<<"\n\n              -----------------------Please Enter Your User name and Password -----------------";

    cout<<"\n\n\n\n               Your User Name : ";
    cin>>username;
    cout<<"\n               Your User Password : ";
    cin>>password;

    while(fread(&l,sizeof(l),1,Log))

    {


        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            cout<<"\n";
        }



        else
        {


                cout<<("\n\n              Worrng!!!!User Name and Password!!!!!!! \n");
                cout<<("\n              Please Enter correct user Name and Password Again \n");



            cout<<endl;
            cout<<"              A. Press '1' to back login ."<<endl<<endl;
            cout<<"              B. Press '2' to back login register (if you not register before) ."<<endl<<endl;
            cout<<endl<<endl<<"              Your choice sir : ";
            int by;
            cin>>by;
            switch(by)
            {

            case 1:
                system("CLS");
                login();
                break;
            case 2:
                system("CLS");
                user();
                break;
            }
        }
        cout<<"\n\n\n\n          "<<username<<"     You Login  Succesfully  "<<endl;
        cout<<"\n                 Press Enter any Key to go to Main Menu.";
        if(getch())
            mainmenu();
    }
    getch();
}
void Register()
{
    FILE *Log;
    Log=fopen("Login&Register.txt","w");
    struct login l;
    cout<<"\n\n\n\n                -----------------------Bangladesh Road Transport Authority-----------------";
    cout<<"\n\n                    Enter Your First Name : ";
    cin>>l.Firstname;

    cout<<"\n                    Enter Your Last name  : ";
    cin>>l.Lastname;

    cout<<"\n\n                    Enter Your UserName         : ";
    cin>>l.username;

    cout<<"\n                    Enter Your Password          : ";
    cin>>l.password;

    cout<<"\n                    Enter Your National Identity Number or Driving licence  number      : ";
    cin>>l.nid;

    cout<<"\n                    Enter Your Vehicle type      : ";
    cin>>l.Vehicle;

    cout<<"\n                    Enter Your Payment Methode   : ";
    cin>>l.Pay;

    cout<<"\n                    Enter Your "<<l.Pay<<" Number   : ";
    cin>>l.Phone;
    if(strlen(l.Phone)==11)

        cout<<"";

    else
    {
        cout<<"              It's not correct  Number "<<endl;
        cout<<"              Please Enter a valuable Number "<<endl;

    cout<<"\n                    Enter Your "<<l.Pay<<" Number   : ";
    cin>>l.Phone;
        }


     cout<<"\n                    Enter Your "<<l.Pay<<" Pin     : ";
     cin>>l.Pin;
    fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
    cout<<"\n\n                Your Full name is   : "<<l.Firstname<<" "<<l.Lastname;
    cout<<"\n                 Your User name is   : "<<l.username;
    cout<<"\n                 Your password is    : "<<l.password;
    cout<<"\n                 Your National Identity Number or Driving licence  number : "<<l.nid;
    cout<<"\n                 Your Vehicle is a   : "<<l.Vehicle;
    cout<<"\n                 Your "<<l.Pay<<" Number is : "<<l.Phone;
    cout<<"\n                 Your "<<l.Pay<<" Number is : "<<l.Pin;
    cout<<"\n\n\n                 For  remember all those information you can take a screenshort "<<endl;
    cout<<"                 For  Login with User name and Password, Enter any key"<<endl;
    getch();
    system("CLS");
    login();

}


void adlogin()
{
    system("cls");
    char aname[100];
    char adpass[100];
    FILE * aLog;
    aLog=fopen("Login&Registeradmin.txt","r");
    struct adlogin ad;
    cout<<"\n\n\n\n              -----------------------Bangladesh Road Transport Authority-----------------";
    cout<<"\n\n              -----------------------Please Enter Your User name and Password -----------------";

    cout<<"\n\n\n\n               Your First Name : ";
    cin>>aname;
    cout<<"\n               Your User Password : ";
    cin>>adpass;

    while(fread(&ad,sizeof(ad),1,aLog))

    {


        if(strcmp(aname,ad.aname)==0 && strcmp(adpass,ad.adpass)==0)

{     cout<<"\n";

}



        else
        {
                cout<<"\n\n              Worrng!!!!User Name and Password!!!!!!! \n";
                cout<<"\n              Please Enter correct user Name and Password Again \n";
            getch();

            system("CLS");
            adlogin();
        }

    }
            cout<<"\n\n\n               "<<aname<<"  You Login  Succesfully\n\n"<<endl;
        cout<<"\n              Press Enter any Key to go to Main Menu.";
        if(getch())
            adminmenu();

}



void ADRegester()
{

    FILE *aLog;
    aLog=fopen("Login&Registeradmin.txt","w");
    struct adlogin ad;
    cout<<"\n\n\n\n                -----------------------Bangladesh Road Transport Authority (ADMIN)-----------------";
    cout<<"\n\n                    Enter Your First Name : ";
    cin>>ad.aname;

    cout<<"\n                    Enter Your Last name  : ";
    cin>>ad.alname;

    cout<<"\n\n                    Enter Your Nid Number      : ";
    cin>>ad.adnid;

    cout<<"\n                    Enter Your Password          : ";
    cin>>ad.adpass;

    cout<<"\n                    Enter Toll Plaza Registration Number (From BRTA)      : ";
    cin>>ad.regnu;

    cout<<"\n                    Enter Toll Plaza Location      : ";
    cin>>ad.location;

    cout<<"\n                    Enter Your Phone Number        : ";
    cin>>ad.adphone;
        if(strlen(ad.adphone)==11)
{
   cout<<"";
}


    else
    {
        cout<<"              It's not correct  Number "<<endl;
        cout<<"              Please Enter a valuable Number "<<endl;

    cout<<"\n                    Enter Your  Number   : ";
    cin>>ad.adphone;
        }


    fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
    cout<<"\n\n                Your Full name is                 : "<<ad.aname<<" "<<ad.alname;
    cout<<"\n                 Your password is                  : "<<ad.adpass;
    cout<<"\n                 Your Toll Plaza Registration Number : "<<ad.regnu;
    cout<<"\n                 Your National Identity Number     : "<<ad.adnid;
    cout<<"\n                 Your Toll Plaza Location          : "<<ad.location;
    cout<<"\n                 Your Phone Number                 : "<<ad.adphone;

    cout<<"\n\n\n                 For  remember all those information you can take a screenshort "<<endl;
    cout<<"\n     Enter any key to Login ";
    adlogin();

}




void adProfile()
{
    system("cls");
     cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                    Admin Profile                          |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<"                                A. Press 1 to see Information\n\n                                B. Press 2 to Update Information\n\n                                C.Press 3 to return\n\n";

    int Pr;
    cout<<"                      Enter Your Choice Please : ";
    cin>>Pr;
    switch(Pr)
    {
    case 1:
        admininfo();
        break;
    case 2:
        admininfoupdate();
        break;
    case 3:
        adminmenu();
        break;

    }



}


void adminmenu()
{
    system("CLS");
    cout<<"\n\n\n                            |**************************************************************************|"<<endl;
    cout<<"                            |                       WELCOME TO Bangladesh Road Transport Authority     |"<<endl;
    cout<<"                            |                              Road Toll Managment System (Admin)          |"<<endl;
    cout<<"                            |**************************************************************************|\n\n\n";
    cout<<"\t\t\t\t\t 1. Paid Toll History  \n\n \t\t\t\t\t 2. Profile \n\n       ";
    cout<<"\t\t\t\t\t 3. About Us \n\n \t\t\t\t\t 4. Exit"     <<endl<<endl;
    cout<<"             Enter Your Choice Sir : ";
    int cad;
    cin>>cad;
    switch(cad)
    {
    case 1:
        administerad();
        break;
    case 2:

         adProfile();
        break;

    case 3:

        adaboutus();

        break;
    case 4:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;
    }

}

void mainmenu()
{

    system("CLS");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                  WELCOME TO Bangladesh Road Transport Authority(User)     |\n");
    cout<<("                              |                             Road Toll Payment System                      |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<("          1. Pay Toll  \n\n          2. Profile \n\n          3. ABOUT US \n\n          4. Payment History \n\n          5. Monthly Statement     \n\n          6. Exit\n\n\n            Enter Your Choice Sir : ");
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        PaymentandTollPlaza();
        break;
    case 2:

        Profile();
        break;

    case 3:

        SearchRe();
        break;
    case  4:

        paymentrecord();
        break;

    case  5:

            addrecord ();
    if(getch())
        mainmenu();
        break;
case 6:
        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;
    }
}
void PaymentandTollPlaza()
{
    system("cls");
    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                                Welcome To Padma Setu                          |\n");
    cout<<("                              |                                      Toll Plaza                               |\n");
    cout<<("                              |                                Please Pay the Amount                          |\n");
    cout<<("                              |*******************************************************************************|\n");

    cout<<"\n                              Select a Payment Method : ";

    cout<<"\n                              1. Bkash. \n                              2. Nogod. \n                              3. Rocket.\n                              4. Return Menu.\n                              5. Exit."<<endl;
    cout<<"\n\n\n                Your choice Sir : ";
    int p;
    cin>>p;

    switch(p)
    {
    case 1:
        Bkash();
        break;

    case 2:

        Nogod();
        break;

    case 3:

        Rocket();
        break;


    case 4:
        mainmenu();
        break;

    case 5:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;


    }
}


void Bkash()
{
    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                             Bkash Toll Payment System                     |\n");
    cout<<("                              |***************************************************************************|\n");
    cout<<"\n\n                                                 Please Fill all information to complete payment.   ";

     FILE *Log;
    Log=fopen("Login&Register.txt","r");
     while(fread(&l,sizeof(l),1,Log))

        {
    cout<<"\n\n                                                    Your  Bkash Number :  "<<l.Phone;
    }

     char Pin[20];
       FILE *PLog;
     struct login l;

    cout<<"\n\n                                                    Enter Your Bkash Pin    :  ";
    cin>>Pin;
PLog=fopen("Login&Register.txt","r");
    while(fread(&l,sizeof(l),1,PLog))
    {


        if(strcmp(Pin,l.Pin)==0)
        {
            cout<<"\n";
        }

        else

            {

                    cout<<("\n\n                                                 Worrng!!!!Enter your right Pin !!!!!!! \n");
                    cout<<"                                                 Enter Your Bkash Pin    :  ";
                    cin>>Pin;
}
     }
     fclose(PLog);



    cout<<"                                                    Enter Number Of Vehicle :  ";
    cin>>VN;
    cout<<"\n                                                    Enter your "<<l.Vehicle<< " Number  :   ";
    cin>>VeN;
    cout<<"\n\n\t\t\t\t\t\t\t    Please Select Your Vehicle Type "<<endl;
    cout<<("\n \t\t\t\t\t\t\t 1.Bike--100\n \t\t\t\t\t\t\t 2.Car Mini--750\n \t\t\t\t\t\t\t 3.Bus --2000\n \t\t\t\t\t\t\t 4.Micro--1300\n \t\t\t\t\t\t\t 5.Truck(mini)--1600\n \t\t\t\t\t\t\t 6.Truck*(Big)--2880\n\n\t\t\t\t--- Your choice :.....    ");

    int Bp;
    cin>>Bp;
    cout<<"\n\n\n       Press Any Key To Go Back."<<endl;
    switch(Bp)
    {
    case 1:
        success();
        if(getch())
            Bikepayment();
        break;

    case 2:
        success();
        if(getch())
            Privetpayment();
        break;

    case 3:
        success();
        if(getch())
            Buspayment();
        break;

    case 4:
        success();
        if(getch())
            Micropayment();
        break;

    case 5:
        success();
        if(getch())
            MiniTruckpayment();
        break;


    case 6:
        success();
        if(getch())
            Truckpayment();
        break;

    case 7:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;


    }
}
void Nogod()
{
system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                             Nogad Toll Payment System                     |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<"\n\n                                                 Please Fill all information to complete payment.   ";

          FILE *Log;
    Log=fopen("Login&Register.txt","r");
     while(fread(&l,sizeof(l),1,Log))

        {
    cout<<"\n\n                                                    Your  Nogad Number :  "<<l.Phone;
    }

     char Pin[20];
       FILE *PLog;
     struct login l;

    cout<<"\n\n                                                    Enter Your Nogad Pin    :  ";
    cin>>Pin;
PLog=fopen("Login&Register.txt","r");
    while(fread(&l,sizeof(l),1,PLog))
    {


        if(strcmp(Pin,l.Pin)==0)
        {
            cout<<"\n";
        }

        else

            {

                    cout<<("\n\n                                                 Worrng!!!!Enter your right Pin !!!!!!! \n");
                    cout<<"                                                 Enter Your Nogad Pin    :  ";
                    cin>>Pin;
}
     }
fclose(PLog);
    cout<<"                                                 Enter Number Of Vehicle :  ";
    cin>>VN;
  //  cout<<"\n\n                           Please Select Your Vehicle Type "<<endl;
       cout<<"\n                                                    Enter your "<<l.Vehicle<< " Number  :   ";
    cin>>VeN;
    cout<<("\n \t\t\t\t\t\t\t\t\t 1.Bike--100\n \t\t\t\t\t\t\t\t\t2.Car Mini--750\n \t\t\t\t\t\t\t\t\t 3.Bus --2000\n \t\t\t\t\t\t\t\t\t 4.Micro--1300\n \t\t\t\t\t\t\t\t\t 5.Truck(mini)--1600\n \t\t\t\t\t\t\t\t\t 6.Truck*(Big)--2880\n\n\t\t\t\t\t\t--- Your choice :.....    ");

   int Bp;
    cin>>Bp;
    cout<<"\n\n\n       Press Any Key To Go Back."<<endl;
    switch(Bp)
    {
    case 1:
        success();
        if(getch())
            Bikepayment();
        break;

    case 2:
        success();
        if(getch())
            Privetpayment();
        break;

    case 3:
        success();
        if(getch())
            Buspayment();
        break;

    case 4:
        success();
        if(getch())
            Micropayment();
        break;

    case 5:
        success();
        if(getch())
            MiniTruckpayment();
        break;


    case 6:
        success();
        if(getch())
            Truckpayment();
        break;

    case 7:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;


    }
}
void Rocket ()
{
    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                             Rocket Toll Payment System                    |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<"\n\n                                                 Please Fill all information to complete payment.   ";

         FILE *Log;
    Log=fopen("Login&Register.txt","r");
     while(fread(&l,sizeof(l),1,Log))

        {
    cout<<"\n\n                                                    Your  Rocket Number :  "<<l.Phone;
    }

     char Pin[20];
       FILE *PLog;
     struct login l;

    cout<<"\n\n                                                    Enter Your Rocket Pin    :  ";
    cin>>Pin;
PLog=fopen("Login&Register.txt","r");
    while(fread(&l,sizeof(l),1,PLog))
    {


        if(strcmp(Pin,l.Pin)==0)
        {
            cout<<"\n";
        }

        else

            {

                    cout<<("\n\n                                                 Worrng!!!!Enter your right Pin !!!!!!! \n");
                    cout<<"                                                 Enter Your Rocket Pin    :  ";
                    cin>>Pin;
                    cout<<endl;
}
     }
     fclose(PLog);



    cout<<"                                                 Enter Number Of Vehicle :  ";
    cin>>VN;

   cout<<"\n                                                    Enter your "<<l.Vehicle<< " Number  :   ";


    cin>>VeN;
    fclose(Log);
    cout<<("\n \t\t\t\t\t\t\t\t\t 1.Bike--100\n \t\t\t\t\t\t\t\t\t 2.Car Mini--750\n \t\t\t\t\t\t\t\t\t 3.Bus --2000\n \t\t\t\t\t\t\t\t\t 4.Micro--1300\n \t\t\t\t\t\t\t\t\t 5.Truck(mini)--1600\n \t\t\t\t\t\t\t\t\t 6.Truck*(Big)--2880\n\n\t\t\t\t\t\t--- Your choice :.....    ");

  int Bp;
    cin>>Bp;
    cout<<"\n\n\n       Press Any Key To Go Back."<<endl;
    switch(Bp)
    {
    case 1:
        success();
        if(getch())
            Bikepayment();
        break;

    case 2:
        success();
        if(getch())
            Privetpayment();
        break;

    case 3:
        success();
        if(getch())
            Buspayment();
        break;

    case 4:
        success();
        if(getch())
            Micropayment();
        break;

    case 5:
        success();
        if(getch())
            MiniTruckpayment();
        break;


    case 6:
        success();
        if(getch())
            Truckpayment();
        break;

    case 7:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;


    }
}

void adp()

{

}
void success()
{
    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                            Toll Payment Check                             |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<"\n\n\t\t\t\tPlease wait..........Loding\n";
    for(int i=0; i<100; i++)
    {
        Sleep(20);
        printf("%c",219);
    }
    cout<<"\n\n                             ******Your Payment Was Success*******"<<endl;
    cout<<"\n              Press Enter any Key";
}
void paymenthistory()
{



}

void Profile()
{

    system("CLS");
        cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                    Profile(user)                          |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<("\n\n\n\n\n\n                                1.View user Details    \n\n                                2. Update Informtion \n\n                                3.Return Main Menu\n\n                                  Enter any key-------");
    int n;
    cin>>n;

    switch(n)
    {
        case 1:


            viewrecord();
            break;



        case 2:



        updateinfo();
        break;

        case 3:

        mainmenu();
break;
}}
void admininfo()


{
        system("cls");
     cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                    Admin Information                      |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    FILE *aLog;
    aLog=fopen("Login&Registeradmin.txt","r");
    while(fread(&ad,sizeof(ad),1,aLog)==1)

cout<<endl;
    cout<<"\n \t\t\t\t  Your Full name is                 : "<<ad.aname<<" "<<ad.alname<<endl;
    cout<<"\n \t\t\t\t  Your password is                  : "<<ad.adpass<<endl;
    cout<<"\n \t\t\t\t  Your Toll Plaza Registration Number : "<<ad.regnu<<endl;
    cout<<"\n \t\t\t\t  Your National Identity Number     : "<<ad.adnid<<endl;
    cout<<"\n \t\t\t\t  Your Toll Plaza Location          : "<<ad.location<<endl;
    cout<<"\n \t\t\t\t  Your Phone Number                 : "<<ad.adphone<<endl;

 fclose(aLog);
 cout<<endl<<endl<<endl<<"              Press any key to return";
if(getch())
       adProfile();

}


void admininfoupdate()
{
    system("cls");
     cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                    Admin Update Information               |\n");
    cout<<("                              |***************************************************************************|\n\n");


    cout<<" \t\t\t\t\t     Select which info you want to update : "<<endl;
    cout<<" \t\t\t\t\t 1.First Name \n\n \t\t\t\t\t 2.Last Name  \n\n \t\t\t\t\t 3.Phone\n\n  ";
    cout<<" \t\t\t\t\t 4.Nid Number \n\n \t\t\t\t\t 5.Password  \n\n";
    cout<<" \t\t\t\t\t 6.Location \n\n \t\t\t\t\t 7.Plaza Register Number\n\n\" \t\t\t\t\t 8.Press 8 to Return \n";




int auu;
    cout<<"\n\n                      Enter Your Choice Please : ";
cin>>auu;
FILE *aLog;
    struct adlogin ad;
    aLog=fopen("Login&Registeradmin.txt","r");
    while(fread(&ad,sizeof(ad),1,aLog)==1)
{

switch(auu)
{
case 1:
     aLog=fopen("Login&Registeradmin.txt","r");
      cout<<"\n\n \t\t\t\t\t     Your First name is   : "<<ad.aname;


    cout<<"\n\n \t\t\t\t\t     Enter New First name is   : ";
    cin>>ad.aname;
      cout<<" \t\t\t\t\t     Update Successfully  ";
if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
    break;

case 2:


     cout<<"\n \t\t\t\t\t     Your Last name is   : "<<ad.alname;
    aLog=fopen("Login&Registeradmin.txt","r");

     cout<<"\n \t\t\t\t\t     Enter New Last name is   : ";
     cin>>ad.alname;
     cout<<" \t\t\t\t\t     Update Successfully  ";
     if(getch())
       adProfile();
         fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;

case 3:


        cout<<"\n \t\t\t\t\t     Your  Number is : "<<ad.adphone;
    aLog=fopen("Login&Registeradmin.txt","r");

    cout<<"\n \t\t\t\t\t     Enter New  Phone Number  : ";
    cin>>ad.adphone;
     if(strlen(ad.adphone)==11)
    {
        cout<<"";
    }
    else
    {
        cout<<"              It's not correct  Number "<<endl;
        cout<<"              Please Enter a valuable Number "<<endl;

    cout<<"\n                    Enter Your New Number   : ";
    cin>>ad.adphone;
        }
        cout<<" \t\t\t\t\t     Update Successfully  ";
        if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;
     case 4:


cout<<"\n\n \t\t\t\t\t     Your National Identity Number   : "<<ad.adnid;
    aLog=fopen("Login&Registeradmin.txt","w");

    cout<<"\n \t\t\t\t\t     Enter  Your National Identity Number : ";
    cin>>ad.adnid;
    cout<<" \t\t\t\t\t     Update Successfully  ";
    if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;
       case 5:
 cout<<"\n \t\t\t\t\t     Your password is    : "<<ad.adpass;
    aLog=fopen("Login&Registeradmin.txt","w");

    cout<<"\n \t\t\t\t\t     Enter new password  : ";
    cin>>ad.adpass;
    cout<<" \t\t\t\t\t     Update Successfully  ";
if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;
            case 6:

        cout<<"\n \t\t\t\t\t      Your Current Location is : "<<ad.location;


    aLog=fopen("Login&Registeradmin.txt","w");


    cout<<"\n \t\t\t\t\t     Add New Location : ";
    cin>>ad.location;
    cout<<" \t\t\t\t\t     Update Successfully  ";
    if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;
    case 7:

        cout<<"\n \t\t\t\t\t     Your Current Registration Number is : "<<ad.regnu;
     aLog=fopen("Login&Registeradmin.txt","w");

    cout<<"\n \t\t\t\t\t     ADD NewRegistration Number : ";
    cin>>ad.regnu;
    cout<<" \t\t\t\t\t     Update Successfully  ";
    if(getch())
       adProfile();
        fwrite(&ad,sizeof(ad),1,aLog);

    fclose(aLog);
     break;
    case 8:

   adminmenu();
   break;

}
}
fclose(aLog);

}
void viewrecord()
{
    system("cls");
     cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                    User Information                       |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    FILE *Log;
    Log=fopen("Login&Register.txt","r");
    while(fread(&l,sizeof(l),1,Log)==1)
    {
        cout<<"\n\n                              Your Full name is   : "<<l.Firstname<<" "<<l.Lastname;
        cout<<"\n                              Your User name is   : "<<l.username;
        cout<<"\n                              Your password is    : "<<l.password;
        cout<<"\n                              Your National Identity Number or Driving licence  number : "<<l.nid;
        cout<<"\n                              Your Vehicle is a   : "<<l.Vehicle;
        cout<<"\n                              Your Payment Methode is : "<<l.Pay;
        cout<<"\n                              Your "<<l.Pay<<" Number is     : "<<l.Phone;
        cout<<"\n                              Your "<<l.Pay<<" Pin Number is : "<<l.Pin;

    }
 fclose(Log);
     cout<<"\n              Press Enter any Key to go back.";
    if(getch())
        Profile();
}

void updateinfo()
{
    system("cls");
         cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                                 Update User Information                   |\n");
    cout<<("                              |***************************************************************************|\n\n\n");


    cout<<"                               Select which info you want to update : "<<endl<<endl;
    cout<<"                                 1.First Name \n\n                                2.User name  \n\n                                3.Phone\n\n  ";
    cout<<"                               4.Last Name \n\n                                 5.Password  \n\n                                 6.Payment Methode\n\n  ";
    cout<<"                               7.Nid Number \n\n                                8.Pin  \n\n                                 9.Vehicle\n\n                                 10.Return\n\n  ";
    cout<<"                                 Press Any Key to Return \n";
int uu;
cin>>uu;

    FILE *Log;
    Log=fopen("Login&Register.txt","r");
    while(fread(&l,sizeof(l),1,Log)==1)
    {


switch(uu)
{
case 1:
       system("cls");
      cout<<"\n\n \t\t\t\t\t  Your First name is   : "<<l.Firstname;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n\n \t\t\t\t\t  Enter New First name is   : ";
    cin>>l.Firstname;
    cout<<" \t\t\t\t\t     Update Successfully  ";
        if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
    break;

case 2:

   system("cls");
     cout<<"\n \t\t\t\t\t  Your User name is   : "<<l.username;
    Log=fopen("Login&Register.txt","w");

     cout<<"\n \t\t\t\t\t  Enter New User name is   : ";
     cin>>l.username;
     cout<<" \t\t\t\t\t     Update Successfully  ";
             if(getch())
        Profile();
         fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;

case 3:
   system("cls");

        cout<<"\n \t\t\t\t\t  Your "<<l.Pay<<" Number is : "<<l.Phone;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t  Enter New  Phone Number  : ";
    cin>>l.Phone;

     if(strlen(l.Phone)==11)
    {
        cout<<"";
    }
    else
    {
        cout<<"              It's not correct  Number "<<endl;
        cout<<"              Please Enter a valuable Number "<<endl;

    cout<<"\n                    Enter Your "<<l.Pay<<" Number   : ";
    cin>>l.Phone;
        }
            cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;
     case 4:
   system("cls");

cout<<"\n\n \t\t\t\t\t  Your Last name is   : "<<l.Lastname;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t   Enter New Last name is : ";
    cin>>l.Lastname;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);


    fclose(Log);
     break;
       case 5:
              system("cls");
 cout<<"\n \t\t\t\t\t  Your password is    : "<<l.password;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t  Enter new password  : ";
    cin>>l.password;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;
            case 6:
                   system("cls");

        cout<<"\n \t\t\t\t\t  Your Payment Methode is : "<<l.Pay;


    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t  Add New Payment Methode : ";
    cin>>l.Pay;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;
    case 7:
   system("cls");
        cout<<"\n \t\t\t\t\t  Your National Identity Number or Driving licence  number : "<<l.nid;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t  ADD New National Identity Number or Driving licence  number : ";
    cin>>l.nid;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;

     case 8:
   system("cls");
        cout<<"\n \t\t\t\t\t  Your "<<l.Pay<<" Number is : "<<l.Pin;

    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t  Add New "<<l.Pay <<"  Pin  : ";
    cin>>l.Pin;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;

          case 9:
   system("cls");
   cout<<"\n \t\t\t\t\t  Your Vehicle is a   : "<<l.Vehicle;
    Log=fopen("Login&Register.txt","w");

    cout<<"\n \t\t\t\t\t   Add New Vehicle : ";
    cin>>l.Vehicle;
    cout<<" \t\t\t\t\t     Update Successfully  ";
            if(getch())
        Profile();
        fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
     break;

          case 10:
              if(getch())
              Profile();
              break;



}
    }   fclose(Log);





}

void Buspayment()
{
    system("cls");
    FILE*Log;
        Log=fopen("Login&Register.txt","r");


    Bmul = BUS*VN;
    FILE *Bu;
    Bu = fopen("BUS.txt","a");
    fprintf(Bu,"     ******Here is your Payment Slip******\n");
    fprintf(Bu,"     |***********************************|\n");
    fprintf(Bu,"     |          BANGLADESH ROAD          |\n");
    fprintf(Bu,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(Bu,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(Bu,"     *                                   |\n");
    fprintf(Bu,"     *                                   |\n");
    fprintf(Bu,"     |  Transaction No    :  Bus-00001   |\n");
    fprintf(Bu,"     |  Bus Reg. Number   :  %c     |\n",VeN);
    fprintf(Bu,"     |  Vehicle Type      :  BUS         |\n");
    fprintf(Bu,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(Bu,"     |  Amount            :  %d TK     |\n",Bmul);
    fprintf(Bu,"     |  Date              :  %s |\n",__DATE__);
    fprintf(Bu,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(Bu,"     *************************************\n\n\n");
    FILE *Tot;
Tot = fopen("Total.txt","a");
if(Bmul!=0)
    {

     cout<<Bmul;
      fprintf(Tot,"\t\t\t\t\t\tBUS             : %d TK\n\n",Bmul);

    }
    fclose(Tot);

    fclose(Bu);


    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Welcome To Padma Setu                             |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");

    cout<<"     ******Here is your Payment Slip******\n"<<endl;



    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  Bus-00001   |"<<endl;
    cout<<"     |  Bus Reg. Number   :  "<<VeN<<"     |"<<endl;
     fclose(Log);
    cout<<"     |  Vehicle Type      :  BUS         |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"           |"<<endl;
    cout<<"     |  Amount            :  "<<Bmul<<" TK     |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");



    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}

void Truckpayment()
{
    system("cls");
        FILE*Log;
        Log=fopen("Login&Register.txt","r");
    //int mul;
   mul = Truck*VN;
    FILE *cust;
    cust = fopen("Truck.txt","a");

    fprintf(cust,"     ******Here is your Payment Slip******\n");
    fprintf(cust,"     |***********************************|\n");
    fprintf(cust,"     |          BANGLADESH ROAD          |\n");
    fprintf(cust,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(cust,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(cust,"     *                                   |\n");
    fprintf(cust,"     *                                   |\n");
    fprintf(cust,"     |  Transaction No    :  Truck-00002 |\n");
    fprintf(cust,"     |  TRUCK Reg. Number :  %c     |\n",VeN);
    fprintf(cust,"     |  Vehicle Type      :  TRUCK       |\n");
    fprintf(cust,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(cust,"     |  Amount            :  %d TK     |\n", mul);
    fprintf(cust,"     |  Date              :  %s |\n",__DATE__);
    fprintf(cust,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(cust,"     *************************************\n\n\n");
FILE *Tot;
Tot = fopen("Total.txt","a");
if(mul!=0)
    {

     cout<<mul;
      fprintf(Tot,"\t\t\t\t\t\tTruck           : %d TK \n\n",mul);

    }
    fclose(Tot);

    fclose(cust);
    // cout<<("*******************************THANK YOU**************************************\n");

    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Have a Safe Journey                               |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");
    cout<<"     ******Your Payment Was Success*******"<<endl;
    cout<<"     ******Here is your Payment Slip******\n"<<endl;
    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  Truck-00002 |"<<endl;
    cout<<"     |  TRUCK Reg. Number :  "<<VeN<<"     |"<<endl;
     fclose(Log);
    cout<<"     |  Vehicle Type      :  TRUCK       |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"           |"<<endl;
    cout<<"     |  Amount            :  "<< mul<<" TK     |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");
    cout<<("*******************************THANK YOU**************************************\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");

    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}

void MiniTruckpayment()
{
    system("cls");
        FILE*Log;
        Log=fopen("Login&Register.txt","r");

    MTmul = MINITRUCK*VN;
    FILE *mini;
    mini = fopen("MiniTruck.txt","a");
    fprintf(mini,"     ******Here is your Payment Slip******\n");
    fprintf(mini,"     |***********************************|\n");
    fprintf(mini,"     |          BANGLADESH ROAD          |\n");
    fprintf(mini,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(mini,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(mini,"     *                                   |\n");
    fprintf(mini,"     *                                   |\n");
    fprintf(mini,"     |  Transaction No    :  MTruck-00003|\n");
    fprintf(mini,"     |  MINI TRUCK Reg.No. :  %c    |\n",VeN);
    fprintf(mini,"     |  Vehicle Type      :  MINI TRUCK  |\n");
    fprintf(mini,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(mini,"     |  Amount            :  %d TK     |\n",MTmul);
    fprintf(mini,"     |  Date              :  %s |\n",__DATE__);
    fprintf(mini,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(mini,"     *************************************\n\n\n");
FILE *Tot;
Tot = fopen("Total.txt","a");
if(MTmul!=0)
    {

     cout<<Bmul;
      fprintf(Tot,"\t\t\t\t\t\tMini Truck      : %d TK \n\n",MTmul);

    }
    fclose(Tot);

    fclose(mini);
    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Welcome To Padma Setu                             |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");
    cout<<"     ******Your Payment Was Success*******"<<endl;
    cout<<"     ******Here is your Payment Slip******\n"<<endl;
    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  MTruck-00003|"<<endl;\
    cout<<"     |  MINI TRUCK Reg.No. :  "<<VeN<<"     |"<<endl;
     fclose(Log);
    cout<<"     |  Vehicle Type      :  MINI TRUCK  |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"           |"<<endl;
    cout<<"     |  Amount            :  "<<MTmul<<" TK     |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");
    cout<<("*******************************THANK YOU**************************************\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}

void Privetpayment()

{
    system("cls");
        FILE*Log;
        Log=fopen("Login&Register.txt","r");
   // int PCmul;
    PCmul = PRIVATECAR*VN;
    FILE *PCar;
    PCar = fopen("PrivateCar.txt","a");
    fprintf(PCar,"     ******Here is your Payment Slip******\n");
    fprintf(PCar,"     |***********************************|\n");
    fprintf(PCar,"     |          BANGLADESH ROAD          |\n");
    fprintf(PCar,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(PCar,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(PCar,"     *                                   |\n");
    fprintf(PCar,"     *                                   |\n");
    fprintf(PCar,"     |  Transaction No    :  PCar-00004  |\n");
    fprintf(PCar,"     |  PRIVATE CAR Reg.No. :  %c   |\n",VeN);
    fprintf(PCar,"     |  Vehicle Type      :  PRIVATE CAR |\n");
    fprintf(PCar,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(PCar,"     |  Amount            :  %d TK     |\n",PCmul);
    fprintf(PCar,"     |  Date              :  %s |\n",__DATE__);
    fprintf(PCar,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(PCar,"     *************************************\n\n\n");
FILE *Tot;
Tot = fopen("Total.txt","a");
if(PCmul!=0)
    {

     cout<<PCmul;
      fprintf(Tot,"\t\t\t\t\t\tPRIVATE CAR     : %d TK \n\n",PCmul);

    }
    fclose(Tot);

    fclose(PCar);
    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Welcome To Padma Setu                             |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");
    cout<<"     ******Your Payment Was Success*******"<<endl;
    cout<<"     ******Here is your Payment Slip******\n"<<endl;
    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  PCar-00004  |"<<endl;
    cout<<"     |  PRIVATE CAR Reg.No. :  "<<VeN<<"   |"<<endl;
     fclose(Log);
    cout<<"     |  Vehicle Type      :  PRIVATE CAR |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"          |"<<endl;
    cout<<"     |  Amount            :  "<<PCmul<<" TK    |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");
    cout<<("*******************************THANK YOU**************************************\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}

void Micropayment()
{

    system("cls");
            FILE*Log;
        Log=fopen("Login&Register.txt","r");
    //int Mmul;
    Mmul = MICRO*VN;
    FILE *Mic;
    Mic = fopen("MICRO.txt","a");
    fprintf(Mic,"     ******Here is your Payment Slip******\n");
    fprintf(Mic,"     |***********************************|\n");
    fprintf(Mic,"     |          BANGLADESH ROAD          |\n");
    fprintf(Mic,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(Mic,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(Mic,"     *                                   |\n");
    fprintf(Mic,"     *                                   |\n");
    fprintf(Mic,"     |  Transaction No    :  Micro-00005 |\n");
    fprintf(Mic,"     |  MICRO Reg.No.     :  %c     |\n",VeN);
    fprintf(Mic,"     |  Vehicle Type      :  MICRO       |\n");
    fprintf(Mic,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(Mic,"     |  Amount            :  %d TK      |\n",Mmul);
    fprintf(Mic,"     |  Date              :  %s |\n",__DATE__);
    fprintf(Mic,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(Mic,"     *************************************\n\n\n");
FILE *Tot;
Tot = fopen("Total.txt","a");
if(Mmul!=0)
    {

     cout<<Mmul;
      fprintf(Tot,"\t\t\t\t\t\tMICRO           : %d TK \n\n",Mmul);

    }
    fclose(Tot);

    fclose(Mic);
    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Welcome To Padma Setu                             |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");
    cout<<"     ******Your Payment Was Success*******"<<endl;
    cout<<"     ******Here is your Payment Slip******\n"<<endl;
    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  Micro-00005 |"<<endl;
    cout<<"     |  MICRO Reg.No.     :  "<<VeN<<"   |"<<endl;
     fclose(Log);
    cout<<"     |  Vehicle Type      :  MICRO       |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"          |"<<endl;
    cout<<"     |  Amount            :  "<<Mmul<<" TK    |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");
    cout<<("*******************************THANK YOU**************************************\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}

void Bikepayment()
{
    system("cls");
                FILE*Log;
        Log=fopen("Login&Register.txt","r");
    Bimul = MOTORBIKE*VN;
    FILE *Bik;
    Bik = fopen("BIKE.txt","a");
    fprintf(Bik,"     ******Here is your Payment Slip******\n");
    fprintf(Bik,"     |***********************************|\n");
    fprintf(Bik,"     |          BANGLADESH ROAD          |\n");
    fprintf(Bik,"     |        TRANSPORT AUTHORITY        |\n");
    fprintf(Bik,"     |          MAWA TOLL PLAZA          |\n");
    fprintf(Bik,"     *                                   |\n");
    fprintf(Bik,"     *                                   |\n");
    fprintf(Bik,"     |  Transaction No    :  Bike-00006  |\n");
    fprintf(Bik,"     |  BIKE Reg.No.      :  %s    |\n",VeN);
    fprintf(Bik,"     |  Vehicle Type      :  BIKE        |\n");
    fprintf(Bik,"     |  Number Of Vehicle :  %d           |\n",VN);
    fprintf(Bik,"     |  Amount            :  %d TK      |\n",Bimul);
    fprintf(Bik,"     |  Date              :  %s |\n",__DATE__);
    fprintf(Bik,"     |  Time              :  %s    |\n",__TIME__);

    fprintf(Bik,"     *************************************\n\n\n");
FILE *Tot;
Tot = fopen("Total.txt","a");
if(Bimul!=0)
    {

     cout<<Bimul;
      fprintf(Tot,"\t\t\t\t\t\tBIKE            : %d TK \n\n",Bimul);

    }
    fclose(Tot);

    fclose(Bik);
    cout<<("\n\n\n                              |*******************************************************************************|\n");
    cout<<("                              |                  A big thank you from Bangladesh Road Transport Authority     |\n");
    cout<<("                              |                             Welcome To Padma Setu                             |\n");
    cout<<("                              |*******************************************************************************|\n\n\n");
    cout<<"     ******Your Payment Was Success*******"<<endl;
    cout<<"     ******Here is your Payment Slip******\n"<<endl;
    cout<<"     |***********************************|"<<endl;
    cout<<"     |          BANGLADESH ROAD          |"<<endl;
    cout<<"     |        TRANSPORT AUTHORITY        |"<<endl;
    cout<<"     |          MAWA TOLL PLAZA          |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     *                                   |"<<endl;
    cout<<"     |  Transaction No    :  Bike-00006  |"<<endl;
    cout<<"     |  BIKE Reg.No.      :  "<<VeN<<"   |"<<endl;
     fclose(Log);

    cout<<"     |  Vehicle Type      :  BIKE        |"<<endl;
    cout<<"     |  Number Of Vehicle :  "<<VN<<"           |"<<endl;
    cout<<"     |  Amount            :  "<<Bimul<<" TK      |"<<endl;
    cout<<"     |  Date              :  "<<__DATE__<<" |"<<endl;
    cout<<"     |  Time              :  "<<__TIME__<<"    |"<<endl;

    cout<<"     *************************************"<<endl;
    cout<<("\n");
    cout<<("*******************************THANK YOU**************************************\n");

    cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
    cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
}
void SearchRe()
{

}


void administerad ()

   {

    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                            Toll Payment History(Admin)                    |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
     //cout<<"                              *********Safe Journey and Please Drive Slowly***************\n\n";
    cout<<("\n                   1. Bike\n                   2. Private Car\n                   3. Bus\n                   4. Micro\n                   5. Truck(mini)\n                   6. Truck*(Big)\n\n         --- Your choice :.....    ");

    int ph;
    cin>>ph;
    switch(ph)
    {
    case 1:
       FILE *Biview;
    char Bik;
    Biview = fopen("BIKE.txt","rt");
    while((Bik=fgetc(Biview))!=EOF)
    {
        printf("%c",Bik);
    }

    fclose(Biview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        adminmenu();
        break;

    case 2:
    FILE *Pview;
    char Pca;
    Pview = fopen("PrivateCar.txt","rt");
    while((Pca=fgetc(Pview))!=EOF)
    {
        printf("%c",Pca);
    }
    fclose(Pview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        adminmenu();
        break;

    case 3:

     FILE *Buview;
    char Bs;
    Buview = fopen("BUS.txt","rt");
    while((Bs=fgetc(Buview))!=EOF)
    {
        printf("%c",Bs);
    }
    fclose(Buview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
      adminmenu();
        break;

    case 4:

   FILE *Mview;
    char Mic;
    Mview = fopen("MICRO.txt","rt");
    while((Mic=fgetc(Mview))!=EOF)
    {
        printf("%c",Mic);
    }
    fclose(Mview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
       adminmenu();
        break;
    case 5:

        FILE *Miview;
    char MI;
    Miview = fopen("MiniTruck.txt","rt");
    while((MI=fgetc(Miview))!=EOF)
    {
        printf("%c",MI);
    }
    fclose(Miview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
       adminmenu();
        break;



    case 6:

    FILE *view;
    char viw;
    view = fopen("Truck.txt","rt");
    while((viw=fgetc(view))!=EOF)
    {
        printf("%c",viw);
    }
    fclose(view);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
      adminmenu();
        break;

    case 7:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;
    }

}


void paymentrecord()
{

    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                            Toll Payment History(user)                     |\n");
    cout<<("                              |***************************************************************************|\n\n\n");
    cout<<"                              *********Safe Journey and Please Drive Slowly***************\n\n";
    cout<<("\n                   1. Bike\n                   2. Private Car\n                   3. Bus\n                   4. Micro\n                   5. Truck(mini)\n                   6. Truck*(Big)\n\n         --- Your choice :.....    ");

    int ph;
    cin>>ph;
    cout<<"\n\n\n       Press Any Key To Go Back."<<endl;
    switch(ph)
    {
    case 1:
        system("cls");
       FILE *Biview;
    char Bik;
    Biview = fopen("BIKE.txt","rt");
    while((Bik=fgetc(Biview))!=EOF)
    {
        printf("%c",Bik);
    }
    fclose(Biview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;

    case 2:
        system("cls");
    FILE *Pview;
    char Pca;
    Pview = fopen("PrivateCar.txt","rt");
    while((Pca=fgetc(Pview))!=EOF)
    {
        printf("%c",Pca);
    }
    fclose(Pview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;

    case 3:
     system("cls");
     FILE *Buview;
    char Bs;
    Buview = fopen("BUS.txt","rt");
    while((Bs=fgetc(Buview))!=EOF)
    {
        printf("%c",Bs);
    }
    fclose(Buview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;

    case 4:
    system("cls");
   FILE *Mview;
    char Mic;
    Mview = fopen("MICRO.txt","rt");
    while((Mic=fgetc(Mview))!=EOF)
    {
        printf("%c",Mic);
    }
    fclose(Mview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;
    case 5:
          system("cls");
        FILE *Miview;
    char MI;
    Miview = fopen("MiniTruck.txt","rt");
    while((MI=fgetc(Miview))!=EOF)
    {
        printf("%c",MI);
    }
    fclose(Miview);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;



    case 6:
    system("cls");
    FILE *view;
    char viw;
    view = fopen("Truck.txt","rt");
    while((viw=fgetc(view))!=EOF)
    {
        printf("%c",viw);
    }
    fclose(view);
        cout<<"\n              Press Enter any Key to go to Main Menu.";
    if(getch())
        mainmenu();
        break;

    case 7:

        system("cls");
        cout<<("\n\n\n");
        cout<<("*******************************THANK YOU**************************************\n");

        cout<<("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
        break;
    }

}
void monthlys()
{
     system("cls");

    int sub;



}
void addrecord()
{
    system("cls");
    cout<<("\n\n\n                              |***************************************************************************|\n");
    cout<<("                              |                         Bangladesh Road Transport Authority               |\n");
    cout<<("                              |                            November Monthly Statment                       |\n");
    cout<<("                              |***************************************************************************|\n\n\n");

    FILE *Tot;
    char ttviw;
  cout<<"\t\t\t\t\t        Vehicle           Amount \n\n";
    cout<<"\t\t\t\t        **************************************\n";
    Tot = fopen("Total.txt","rt");
    while((ttviw=fgetc(Tot))!=EOF)
    {
        printf("%c",ttviw);
    }
    fclose(Tot);
    cout<<"\n\n\n\n\n\n\n                Press Any Key To Go Back.";
}

void aboutus()
{
    system("CLS");
     cout<<" \t\t\t\t              WE ARE TEAM POWER RANGER CODER "<<endl;
    cout<<"\n \t\t\t\t              PEOPLE BEHIND ON THIS C PROJECT :\n\n\n \t\t\t\t\t\t 1.SAIFUL ISLAM EMON\n\n \t\t\t\t\t\t 2.AMENA AKTER\n\n \t\t\t\t\t\t 3.SUMIYA TASMIM OMI\n\n \t\t\t\t\t\t 4.NADIA SULTANA LAMIA\n\n \t\t\t\t\t\t 5.JANATUL FERDOUSI "<<endl;

    cout<<"\n \t\t\t\t *****************************THANK YOU*****************************"<<endl<<endl;
    cout<<"\n                                Press Any Key To Go Back.";
    if(getch())
        mainmenu();

}

void adaboutus()
{
    system("CLS");
    cout<<" \t\t\t\t              WE ARE TEAM POWER RANGER CODER "<<endl;
    cout<<"\n \t\t\t\t              PEOPLE BEHIND ON THIS C PROJECT :\n\n\n \t\t\t\t\t\t 1.SAIFUL ISLAM EMON\n\n \t\t\t\t\t\t 2.AMENA AKTER\n\n \t\t\t\t\t\t 3.SUMIYA TASMIM OMI\n\n \t\t\t\t\t\t 4.NADIA SULTANA LAMIA\n\n \t\t\t\t\t\t 5.JANATUL FERDOUSI "<<endl;

    cout<<"\n \t\t\t\t *****************************THANK YOU*****************************"<<endl<<endl;
    cout<<"\n                                Press Any Key To Go Back.";
    if(getch())
       adminmenu();

}


