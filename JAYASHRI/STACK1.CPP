#include<iostream.h>
#include<conio.h>
#include<process.h>
int n;
class demo
{
	int a[10],i,top,ele;
	public:
	demo()
	{
	top=-1;
	}
	void push();
	void pop();
	void display();
};
void demo::push()
{
	if(top>=n-1)
	cout<<"\nStack Overflow.......";
	else
	{
	cout<<"\nEnter Element:";
	cin>>ele;
	top++;
	a[top]=ele;
	}
}
void demo::pop()
{
	if(top==-1)
	cout<<"\nStack Underflow.......";
	else
	{
	top--;
	cout<<"\nPoped Element Is:"<<a[top+1];
	}
}
void demo::display()
{
	if(top==-1)
	cout<<"\nStack Empty.......";
	else
	{
	cout<<"\nStack Elements Are:\n";
	for(i=top;i>=0;i--)
	cout<<a[i]<<"\t";
	}
}
void main()
{
	demo d;
	clrscr();
	cout<<"\nEnter Size Of Stack:";
	cin>>n;
	int ch;
	cout<<"\n1.Push 2.Pop 3.Display 4.Exit\n";
	while(ch!=4)
	{
		cout<<"\nEnter Your Choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:d.push();break;
			case 2:d.pop();break;
			case 3:d.display();break;
			case 4:exit(0);
			default:cout<<"\nEnter Proper Choice";
		}
	}
getch();
}