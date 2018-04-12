#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
void student(char a[100]);
void admin(char a[10]);
char passgen(char password[10]);
main()
{
    int press,home;
    char a[100],b[100],c[1],f[100],g[100],h[100];

    printf("\n\t\t\t\t\t\t\t=============================\n");
    printf(" \t\t\t\t\t\t\t Welcome to 3 Idiots Hostel\n");
    printf(" \t\t\t\t\t\t\t=============================\n\n\n\n");



    printf("1.Admin              2.Student                3.Facilities\n");
    scanf("%d",&press);
       if(press==1){
      admin(a);
       }
        else if(press==2)
        student(a);
        else if(press==3)
            printf("\n1.USER FRIENDLY\n2.RELIABILITY\n3.SECURITY\n4.PORTABILITY\n5.MAINTAINABILITY\n");

            printf("\n Type 0 and press enter to go to **Main menu**\t[or another for exit]\n");
            scanf("%d",&home);
            if(home==0)
                return main();
                else
                    return 0;



}
 void student(char b[100])
            {
            int x,i=0;
            char user[10],c[15],pass[10],last[10];
            printf("\n\n\n*****Registration*****\n\n");
struct info{
char name[15];
char id[15];
char dept[10];
char adrs[20];
};
            struct info a;
            printf("\nEnter First Name: ");
            scanf("%s",a.name);
            printf("\nEnter last name: ");
            scanf("%s",last);
            printf("\nEnter Your student ID: ");
            scanf("%s",a.id);
            printf("\nEnter your department: ");
            scanf("%s",a.dept);
            printf("\nEnter your current Address: ");
            scanf("%s",a.adrs);
            printf("\nEnter an username for next login: ");
            scanf("%s",user);
            passgen(c);
            std::ofstream out;
            out.open("data.txt",std::ios_base::app);
            out<<endl<<"Name: "<<a.name<<" "<<last<<endl<<"ID: "<<a.id<<endl<<"Department: "<<a.dept<<endl<<"Address: "<<a.adrs<<endl;
            printf("\n\nYour registration successfully done! ");
            printf("\n We will contact u later.\n\n");
         }


void admin(char a[10])
            {
    int x=0,press;
    char user[10],c[1],d[1];
    printf("==================\n");
    printf("      Login       \n");
    printf("==================\n");
    printf("\nEnter user name: ");
    scanf("%s",user);
    passgen(a);

    printf("\n\n\n1.Available Seat       \t\t  2.Info about students\n");
    scanf("%d",&press);
    if(press==2){
        printf("\n\n**********************");
        std::ifstream f("data.txt");
    if (f.is_open())
        std::cout <<endl<< f.rdbuf();
         printf("**********************\n");
    }
    else if(press==1)
        printf("\n345 seat available\n");


            }
char passgen(char password[10])
{
    int x=0;
    char pass;
    printf("\nEnter your passwod: ");
    while(1){
    pass=getch();
    if(pass==13)
        break;
    putchar('*');
    password[x++]=pass;
    }
    password[x]='\0';
}
