#include<iostream.h>
#include<conio.h>
class demo
{
	int n;
	public:
	void tower(int,char,char,char);
	void get();
};
void demo::get()
{
	cout<<"\nEnter No of Disk:\n";
	cin>>n;
	tower(n,'A','B','C');
}
void demo::tower(int n,char beg,char aux,char end)
{
	if(n!=0)
	{
	tower(n-1,beg,end,aux);
	cout<<"\nMove Disk "<<n<<" from "<<beg<<" to "<<end<<"\n";
	tower(n-1,aux,beg,end);
	}
}
void main()
{
	demo d;
	clrscr();
	d.get();
	getch();
}