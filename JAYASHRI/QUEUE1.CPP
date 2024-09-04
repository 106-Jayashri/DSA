
#include<iostream.h>
#include<conio.h>
#include<process.h>
int n;
class demo
{
	int a[10],f,r,ele,i;
	public:
	demo()
	{
	f=r=-1;
	}
	void insert();
	void del();
	void display();
};
void demo::insert()
{
	if(r==n-1)
	cout<<"\nQueue Overflow........\n";
	else
	{
		if(f==-1)
		f=f+1;
		else
		{
		cout<<"\nEnter Element:\n";
		cin>>ele;
		a[++r]=ele;
		}
	}
}
void demo::del()
{
	if(f==-1)
	cout<<"\nQueue Underflow.........\n";
	else
	{
		int p=a[f];
		if(f==r)
		f=r=-1;
		else
		f++;
		cout<<"\nDeleted Element Is:"<<p;

	}
}

void demo ::display()
{
	if(f==-1)
	cout<<"\nQueue Empty......\n";
	else
	{
	cout<<"\nQueue Elements Are:\n";
	for(i=f;i<=r;i++)
	cout<<a[i]<<"\t";
	}
}
void main()
{
	demo d;
	clrscr();
	int ch;
	cout<<"\nEnter Queue Size:";
	cin>>n;
	cout<<"\n1.Insert 2.Delete 3.Display 4.Exit";
	while(ch!=4)
	{
		cout<<"\nEnter Your Choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:d.insert();break;
			case 2:d.del();break;
			case 3:d.display();break;
			case 4:exit(0);break;
			default:cout<<"\nEnter Proper Choice....\n";
		}
	}
getch();
}


/*

Enter Your Choice:1
                                                                                
Enter Your Choice:1                                                             
                                                                                
Enter Element:                                                                  
22                                                                              
                                                                                
Enter Your Choice:1                                                             
                                                                                
Enter Element:                                                                  
56
                                                                                
Enter Your Choice:1                                                             
                                                                                
Queue Overflow........                                                          
                                                                                
Enter Your Choice:2                                                             
                                                                                
Deleted Element Is:22                                                           
Enter Your Choice:3                                                             
                                                                                
Queue Elements Are:                                                             
56                                                                              
Enter Your Choice:4                                                             
                                                                                


















*/