#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct login

{
    char Firstname[50];
    char Lastname[20];
    char username[20];
    char password[20];
    char nid[50];
    char Vehicle[60];
    char Bike;

};
void Register()
{
    FILE *Log;
    Log=fopen("Login&Register.txt","w");
    struct login l;
    printf("\n\n\n\n                -----------------------Bangladesh Road Transport Authority-----------------");
    printf("\n\n                    Enter Your First Name : ");
    scanf("%s",l.Firstname);

    printf("\n                    Enter Your Last name  : ");
    scanf("%s",l.Lastname);

    printf("\n\n                    Enter Your UserName     : ");
    scanf("%s",l.username);

    printf("\n                    Enter Your Password     : ");
    scanf("%s",l.password);

    printf("\n                    Enter Your National Identity Number or Car licence number      : ");
    scanf("%d",l.nid);

    printf("\n                    Enter Your Vehicle type      : ");
    scanf("%s",l.Vehicle);


    fwrite(&l,sizeof(l),1,Log);

    fclose(Log);
    printf("\n\n                Your Full name is %s %s \n",l.Firstname,l.Lastname);
    printf("\n                 Your User name is %s \n",l.username);
    printf("\n                 Your password is %s \n",l.password);
    printf("\n                 Your Vehicle is a %s \n",l.Vehicle);
    printf("\n                 For  remember all those information you can take a screenshort \n");
    printf("                 For  Login with User name and Password, Enter any key\n");
    getch();
    system("CLS");
    login();

}
void login()
{
    char username[100];
    char password[20];
    FILE * Log;
    Log=fopen("Login&Register.txt","r");
    struct login l;
    printf("\n\n\n\n              -----------------------Bangladesh Road Transport Authority-----------------");
    printf("\n\n              -----------------------Please Enter Your User name and Password -----------------");

    printf("\n\n\n\n               Your User Name : ");
    scanf("%s",&username);
    printf("\n               Your User Password : ");
    scanf("%s",&password);

    while(fread(&l,sizeof(l),1,Log))

    {


        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
            printf("\n");


        else
        {
            {

                printf("\n\n              Worrng!!!!User Name and Password!!!!!!! \n");
                printf("\n              Please Enter correct user Name and Password Again \n");

            }
            getch();

            system("CLS");
            login();
        }
        printf("\n\n\n              %s   You Login  Succesfully\n\n",username);
        printf("\n              Press Enter any Key to go to Main Menu.");
        if(getch())
         mainmenu();
    }
    getch();
}
void viewrecord(void);

void returnfunc(void);

void mainmenu(void);

void PaymentandTollPlaza(void);
void customer(void);


//void deleterecord(void);
void paymentrecord(void);

void payment(void);
void addrecord(void);
//void vegetarian(void);
//void nonvegetarian(void);
void details(void);
void aboutus(void);

int getdata();
int main()
{
    menu();

    return 0;
}

struct employee
{

    char name[30];
    int id;

    int dd;
    int mm;
    int yyyy;
    int YOJ;
    char place[20];
    float salary;
    char department[20];

    int quantity;
};
struct employee e;

FILE *fp,*ft,*dp,*dt;

int s;
char findrecord;
int again;
int quantity;
double total=0;
int t;






void menu(void)
{
    system("cls");
    int my;
    printf("\n              -----------------------Bangladesh Road Transport Authority-----------------");
    printf("\n\n              -----------------------Please Register or Login First -----------------");
    printf("\n\n\n\n                     1. Press '1' For Registration \n");
    printf("\n                        2. Press '2' For Login \n");
    printf("\n                        Your Choice Sir : ");
    scanf("%d",&my);
    if(my == 1)
    {
        system("CLS");
        Register();
    }
    else if (my == 2)
    {
        system("CLS");
        login();
    }
}


void mainmenu(void)
{


    system("CLS");
    printf("\n\n\n                                 |**************************************************************************|\n");
    printf("                                 |                       WELCOME TO BUBT CANTEEN                            |\n");
    printf("                                 |**************************************************************************|\n\n\n");
    printf("          1. Payment and Toll Plaza  \n\n          2. User detiles \n\n          3. ABOUT US \n\n          4.Payment History \n\n          5. Exit     \n\n\n             Enter Your Choice Sir : ");
    int choice;
    scanf("%d",&choice);
    if(choice==1)
    {
        PaymentandTollPlaza();
    }
    else if(choice==2)
    {
        Profile();
    }
    else if(choice==3)
    {
        aboutus();
    }
        else if(choice==4)
    {
        paymentrecord();
    }

    else if(choice==5)
    {
        system("cls");
        printf("\n\n\n");
        printf("*******************************THANK YOU**************************************\n");

        printf("*********Safe Journey and Please Drive Slowly***************\n\n");
        exit(0);
    }}


    void Profile(void)
    {

       system("CLS");
       printf("\n\n      1.View user Details    \n\n      2.Add new user \n\n  \n\n      3.Return Main menu \n\n      Enter any key-------");
    int n;
    scanf("%d",&n);

    if(n==1)
    {
        {


           viewrecord();
        }
        printf("\n\n     Press Any Key To Go Back.");
        if(getch())
            Profile();
    }

    else if(n==2)
    {
         addrecord();
        printf("\n\n     Press Any Key To Go Back.");
        if(getch())
            Profile();
    }
    else if (n=3){

        mainmenu();
    }

    }

void addrecord(void)
{
  /*  system("cls");
    fp=fopen("record1.txt","a");
    if(getdata()==1)
    {
        fseek(fp,0,SEEK_END);
        fwrite(&e,sizeof(e),1,fp);
        fclose(fp);
        printf("\n\n");
        printf("The Record Is Successfully Saved ! !\n\n");
        printf("Save any more?(Y / N): ");
        if(getch()=='n')
            Profile();
        else
            system("cls");
        addrecord();
    }*/

}
void viewrecord(void)
{
    fp=fopen("record1.txt","r");
    while(fread(&e,sizeof(e),1,fp)==1)
    {
        printf("                 %s",e.department);
        printf("          %d",e.id);
        printf("        %s",e.name);
        printf("         %d/%d/%d",e.dd,e.mm,e.yyyy);
        printf("                %d",e.YOJ);
        printf("        %s",e.place);
        printf("\n\n");
    }

    fclose(fp);
    returnfunc();

    printf("Loding");
}

void paymentrecord(void)
{
            FILE *Pay;
    Pay=fopen("Payment.txt","w");
   // struct Paymrnt p;
    printf("1.");
    printf("NAI");
    printf("NAI");
}
void payment(void)
{

printf("Your Payment Complete Successfuly :)");
}
void PaymentandTollPlaza(void)
{
    printf("                   ----------------------Padma Setu Toll-------------------------\n\n");
         printf("\n\n     1.Bike--100\n     2.Car mini(4Person)--750\n     3.Bus (50-60Parson)--2000\n     4.Truck(mini)--750\n     5.Truck*(Big)--2000\n");
    int p;
    scanf("%d",&p);
    if(p==1)
    {
        payment();

    }
      else  if(p==2)
    {
        payment();

    }
      else  if(p==3)
    {
        payment();

    }
      else  if(p==4)
    {
        payment();

    }
    else if(p==5)
    {
        payment();

    }


    printf("NAI");
}


    void aboutus(void)
    {
        system("CLS");
        printf("\n      WE ARE TEAM POWER RANGER CODER ");
        printf("\n                             PEOPLE BEHIND ON THIS C PROJECT :\n\n   1.SAIFUL ISLAM EMON\n\n   2.AMENA AKTER\n\n   3.\n\n                     *****************************THANK YOU*****************************");
        printf("\n                                Press Any Key To Go Back.");
        if(getch())
        mainmenu();

    }
       /* system("CLS");

        fp=fopen("Login&Register.txt","r");
        rewind(fp);
        while(fread(&l,sizeof(l),1,fp)==1){

    printf("\n\n                Your Full name is %s %s \n",l.Firstname,l.Lastname);
    printf("\n                 Your User name is %s \n",l.username);
    printf("\n                 Your password is %s \n",l.password);
    printf("\n                 Your Vehicle is a %s \n",l.Vehicle);
    printf("\n                 For  remember all those information you can take a screenshort \n");
    printf("                 For  Login with User name and Password, Enter any key\n");
    getch();




        }*/
