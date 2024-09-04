#include<iostream.h>
#include<conio.h>
#include<process.h>
int n;
class demo
{
	int a[10],i,pos,ele;
	public:
	void get();
	void insert();
	void del();
	void display();
};

void demo::get()
{
	cout<<"\nEnter Array Size:";
	cin>>n;
	cout<<"\nEnter Array Elements:";
	for(i=0;i<n;i++)
	cin>>a[i];
}
void demo::insert()
{
	cout<<"\nEnter Position:";
	cin>>pos;
	cout<<"\nEnter Element:";
	cin>>ele;
	i=n-1;
	while(pos<=i)
	{
		a[i+1]=a[i];
		i--;
	}
	a[pos]=ele;
	n++;
}
void demo::del()
{
	cout<<"\nEnter Position:";
	cin>>pos;
	i=pos;
	while(i<n)
	{
		a[i]=a[i+1];
		i++;
	}
	n--;
}

void demo::display()
{
	cout<<"\nArray Elements Are:";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}


void main()
{
	demo d;
	clrscr();
	int ch;
	d.get();

	cout<<"\n1.Insert 2.Delete 3.Dispaly 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\nEnter Your Choice:\n";
		cin>>ch;
		switch(ch)
		{
			case 1:d.insert();break;
			case 2:d.del();break;
			case 3:d.display();break;
			case 4:exit(0);break;
			default:cout<<"\nEnter Proper Choice:\n";
		}
	}
	getch();
}
