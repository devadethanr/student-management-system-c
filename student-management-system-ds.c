//including header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//defining global variables
int i,j,main_exit;

//declaring functions
void menu();
void new_entry();
//void data_entry(node *whisky);
void newstudent();
void edit();
void view_list();
void erase();
void see();
void sorter();
void closer();
int count();

typedef struct dsproject
{
    char name[60];
    int age;
    char city[60];
    char room_no[8];
    char father_name[60];
    int father_phone;
    int phone;
    char hostel_name[6];
    char roll_no[10];
    char dob[50];
    struct dsproject *next;
}node;
node *head,*temp;
//.......................................................
int count()
{
    int c=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    return c;
}
//..........................................................
//main function
int main()
{

  menu();
  return 0;
}
//.............................................................
void menu()
{
system("CLS");
    int choice;
    printf("\n\n\t\t\tHOSTEL MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1>> Enter new Student's data\n\t\t2>> Update information of existing account\n\t\t3>> Check the details of existing account\n\t\t4>> View all Students of a particlar Hostel\n\t\t5>> Removing existing account\n\t\t6>> View all students list\n\t\t7>> Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:new_entry();
        break;
        /*case 2:edit();
        break;
        case 3:see();
        break;
        case 4:sorter();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:closer();
        break;*/
        default:menu();
    }
}
//...................................................................
void new_entry()
{
    char name[60];
    int age;
    char city[60];
    char room_no[8];
    char father_name[60];
    int father_phone;
    int phone;
    char hostel_name[6];
    char roll_no[10];
    char dob[50];
    //.......................................
    head=(node*)malloc(sizeof(node));

    int studn=count();
    if(studn==0)
    {
   printf("/n true =%d",studn);
        if(head==NULL)
        {
            printf("\n MEMORY NOT ALLOCATED TRY AGAIN");
        }
        else{
                printf("\nEnter the name:");
                scanf("%s",&name);
                strcpy(head->name[60],name[60]);
                printf("\nEnter the date of birth(mm/dd/yyyy):");
                scanf("%s",&dob);
                strcpy(head->dob[50],dob[50]);
                printf("\nEnter the age:");
                scanf("%d",&age);
                head->age=age;
                printf("\nEnter the city:");
                scanf("%s",&city);
                strcpy(head->city[60],city[60]);
                printf("\nEnter the phone number: ");
                scanf("%d",&phone);
                head->phone=phone;
                printf("\n Enter your Father's name:");
                scanf("%s",&father_name);
                strcpy(head->father_name[60],father_name[60]);
                printf("\n Enter your Father's phone no.:");
                scanf("%d",&father_phone);
                head->father_phone=father_phone;
                printf("\n Enter your room no.:");
                scanf("%s",&room_no);
                strcpy(head->room_no[8],room_no[8]);
                printf("\nStudent added successfully!");
                head->next=NULL;
               // data_entry(head);
        }
    }
    /*
    else
    {
        newstudent();
    }
    */

}
void newstudent()
{
    node *nptr;
    nptr=(node*)malloc(sizeof(node));
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

}

/*void data_entry(node *whisky)
{
    char name[60];
    int age;
    char city[60];
    char room_no[8];
    char father_name[60];
    int father_phone;
    int phone;
    char hostel_name[6];
    char roll_no[10];
    char dob[50];

                printf("\nEnter the name:");
                scanf("%s",&name);
                whisky->name[60]=name[60];
                printf("\nEnter the date of birth(mm/dd/yyyy):");
                scanf("%s",&dob);
                whisky->dob[50]=dob[50];
                printf("\nEnter the age:");
                scanf("%d",&age);
                whisky->age=age;
                printf("\nEnter the city:");
                scanf("%s",&city);
                whisky->city[60]=city[60];
                printf("\nEnter the phone number: ");
                scanf("%d",&phone);
                whisky->phone=phone;
                printf("\n Enter your Father's name:");
                scanf("%s",&father_name);
                whisky->father_name[60]=father_name[60];
                printf("\n Enter your Father's phone no.:");
                scanf("%d",&father_phone);
                whisky->father_phone=father_phone;
                printf("\n Enter your room no.:");
                scanf("%s",&room_no);
                whisky->room_no[8]=room_no[8];
                printf("\nStudent added successfully!");
                whisky->next=NULL;
}   */
