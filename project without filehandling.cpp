#include<iostream>
#include<conio.h>
using namespace std;

struct node
	{
		char name[50], fatname[50], motname[50];
		int roll;
        float e,p,c,m,com,sst;
        struct node *next;
	};
struct node *newnode,*temp,*head;
	
void insert()
{
	system("cls");
	newnode = (struct node*)malloc(sizeof(struct node));
	cout<<"\n Student Information.";
	cout<<"\n Enter name: ";
    cin>>newnode->name;
    cout<<"\n Enter Roll number : ";
    cin>>newnode->roll;
    cout<<"\n Enter Father's Name : ";
    cin>>newnode->fatname;
    cout<<"\n Enter Mother's Name : ";
    cin>>newnode->motname;
    cout<<"\n Enter Subject marks(out of 100) : ";
	cout<<"\n English : ";
	cin>>newnode->e;
	cout<<"\n Physics : ";
	cin>>newnode->p;
	cout<<"\n Chemistry : ";
	cin>>newnode->c;
	cout<<"\n Maths : ";
	cin>>newnode->m;
	cout<<"\n Computer : ";
	cin>>newnode->com;
	cout<<"\n Social Studies : ";
	cin>>newnode->sst;
	newnode->next=0;
	if(head==0)
	{
		head=newnode;
	}
	temp=head;
	while(temp->next!=0)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void display()
{
	float tot,per;
	system("cls");
	int num=1;
	 if(head == 0)
    {
        cout<<"\nNo Record to display \n";
        return;
    }
    cout<<"\n--------------------------------------------------------------------------------------";
	cout<<"\n-------------------------------STUDENT RECORD TABLE-----------------------------------";
	cout<<"\n--------------------------------------------------------------------------------------";
    cout<<"\nInformation of Student: \n";
    temp = head;
    while(temp!=0)
    {
        cout<<"\n "<<num <<".  Roll no: "<<temp->roll<<"  Name : "<<temp->name<<" Father's Name : "<<temp->fatname<<" Mother's Name : "<<temp->motname;
        cout<<"\n \t\t-----------------------Marks ------------------------";
        tot=(temp->e+ temp->p+ temp->c+ temp->m+ temp->com+ temp->sst);
        per = tot/6;
        cout<<"\n English : "<<temp->e<<" Physics : "<<temp->p<<" Chemistry : "<<temp->c<<" Maths : "<<temp->m<<" Computer : "<<temp->com<<" Social Studies : "<<temp->sst<<"  Total : "<<tot<<"  Percentage : "<<per<<endl;
       	temp= temp->next;
        num++;
    }
    getch();
}

void search()
{
	system("cls");
	int rollno;
	int flag;
	temp = head;
	cout << "\n----------------------------------------------------------------------------------------";
    cout << "\n--------------------------------- SEARCH STUDENT DATA ----------------------------------";
    cout << "\n----------------------------------------------------------------------------------------";
	if(temp==NULL)
	{
		cout<<"\n No Record Present.";
		return ;
	}
	else
	{
		cout<<"\n Enter Roll number of Student to search : ";
		cin>>rollno;
		while(temp != NULL)
		{
			if(temp->roll==rollno)
			{
				cout<<"\n "<<".  Roll no: "<<temp->roll<<"  Name : "<<temp->name<<" Father's Name : "<<temp->fatname<<" Mother's Name : "<<temp->motname;
                cout<<"\n \t\t-----------------------Marks ------------------------";
                cout<<"\n English : "<<temp->e<<" Physics : "<<temp->p<<" Chemistry : "<<temp->c<<" Maths : "<<temp->m<<" Computer : "<<temp->com<<" Social Studies : "<<temp->sst;
			    flag=0;
			}
			temp = temp->next;
		}
		if(flag==1)
		{
			cout<<"\n Student Record not Found. ";
		}
		
	}
	getch();
}

void delet()
{
	system("cls");
	node *prev;
	int rollno;
	cout << "\n----------------------------------------------------------------------------------------";
    cout << "\n--------------------------------- DELETE STUDENT DATA ----------------------------------";
    cout << "\n----------------------------------------------------------------------------------------";
    temp = head;
	if(temp==NULL)
	{
		cout<<"\n No Record Present.";
		return ;
	}
	cout<<"\n Enter Roll number of Student to search : ";
	cin>>rollno;
	if(temp->next == 0 && temp->roll == rollno)
     {
        cout<<"\nThe Student record is deleted";
        free(temp);
     }
	else
	{
		
		while(temp!= NULL)
		{
			if(temp->next->roll == rollno)
			{
				prev = temp->next;
				temp->next = prev->next;
			}
			temp=temp->next;
		}
		free(prev);
		cout<<"\n Record Deleted. ";
    }
    getch();
}
void modify()
{
	system("cls");
	int rollno;
	int flag;
	temp = head;
	cout << "\n----------------------------------------------------------------------------------------";
    cout << "\n--------------------------------- MODIFY STUDENT DATA ----------------------------------";
    cout << "\n----------------------------------------------------------------------------------------";
	if(temp==NULL)
	{
		cout<<"\n No Record Present.";
		return ;
	}
	else
	{
		cout<<"\n Enter Roll number of Student to search : ";
		cin>>rollno;
		while(temp != NULL)
		{
			if(temp->roll==rollno)
			{
				cout<<"\n Enter New Records.";
				cout<<"\n Enter name: ";
			    cin>>temp->name;
			    cout<<"\n Enter Roll number : ";
			    cin>>temp->roll;
			    cout<<"\n Enter Father's Name : ";
			    cin>>temp->fatname;
			    cout<<"\n Enter Mother's Name : ";
			    cin>>temp->motname;
			    cout<<"\n Enter Subject marks(out of 100) : ";
				cout<<"\n English : ";
				cin>>temp->e;
				cout<<"\n Physics : ";
				cin>>temp->p;
				cout<<"\n Chemistry : ";
				cin>>temp->c;
				cout<<"\n Maths : ";
				cin>>temp->m;
				cout<<"\n Computer : ";
				cin>>temp->com;
				cout<<"\n Social Studies : ";
				cin>>temp->sst;
			    flag=0;
			}
			temp = temp->next;
		}
		if(flag==1)
		{
			cout<<"\n Student Record not Found. ";
		}
	}
}
int main()
{
	int ch,choice;
	char x;
	struct node *newnode =(struct node *)malloc(sizeof (struct node));
	cout<<"\n\t\t\t   ----------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t \t  |STUDENT REPORT MANAGEMENT SYSTEM|";
	cout<<"\n\t\t\t   ----------------------------------------------------------------------------";
    cout<<"\n Enter information of atleast 1 student: ";
    cout<<"\n Enter name: ";
    cin>>newnode->name;
    cout<<"\n Enter Roll number : ";
    cin>>newnode->roll;
    cout<<"\n Enter Father's Name : ";
    cin>>newnode->fatname;
    cout<<"\n Enter Mother's Name : ";
    cin>>newnode->motname;
    cout<<"\n Enter Subject marks(out of 100) : ";
	cout<<"\n English : ";
	cin>>newnode->e;
	cout<<"\n Physics : ";
	cin>>newnode->p;
	cout<<"\n Chemistry : ";
	cin>>newnode->c;
	cout<<"\n Maths : ";
	cin>>newnode->m;
	cout<<"\n Computer : ";
	cin>>newnode->com;
	cout<<"\n Social Studies : ";
	cin>>newnode->sst;
    newnode->next = NULL;
    
    if(head==NULL)
    {
    	head= temp=newnode;
	}
	else
	{
		newnode->next = head;
		temp = newnode;
	}
	cout<<"\n Do you to continue enter 1 otherwise 0 : ";
    cin>>ch;
	while(1)
	{
		system("cls");
		cout<<"\n\t\t\t    ----------------------------------";
		cout<<"\n\t\t\t    |STUDENT REPORT MANAGEMENT SYSTEM|";
		cout<<"\n\t\t\t    ----------------------------------";
		cout<<"\n\t\t\t    1. Enter New Record.";
		cout<<"\n\t\t\t    2. Display Record.";
		cout<<"\n\t\t\t    3. Update/Modify Record.";
		cout<<"\n\t\t\t    4. Search Record.";
		cout<<"\n\t\t\t    5. Delete Record.";
		cout<<"\n\t\t\t    6. Exit.";
		cout<<"\n\t\t\t    ----------------------------------";
		cout<<"\n\t\t\t    Chose Option :[1/2/3/4/5/6]";
		cout<<"\n\t\t\t    ----------------------------------";
		cout<<"\n Enter choice : ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				do
				{
					insert();
					cout<<"\n   Add another Student Record (Y/N) : ";
					cin>>x;
				}while(x =='y' ||x =='Y');
				break;
				
			case 2:
				display();
				break;
				
			case 3:
				modify();
				break;
			
			case 4:
				search();
				break;
				
			case 5:
				delet();
				break;
					
			case 6:
				exit(0);
			default:
				cout<<"\n  Invalid choice....Please Try Again....";
				break;
		}
	
	}
	
	return 0;
}

