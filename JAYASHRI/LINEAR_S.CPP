
#include<iostream.h>
#include<conio.h>
class demo
{
	int a[10],i,n,ele;
	public:
	void get();
	void search();
	void display();
};

void demo::get()
{
	cout<<"\nEnter The Size Of Array:\n";
	cin>>n;
	cout<<"\nEnter The Array Elements:\n";

	for(i=0;i<n;i++)
	cin>>a[i];

}
void demo::display()
{
	cout<<"\nArray Elements Are:\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void demo::search()
{
	cout<<"\nEnter Element To Search:\n";
	cin>>ele;
	i=ele;
	for(i=0;i<n;i++)

	if(a[i]==ele)
	{
	cout<<"\nSearch Successful.......found at position:"<<i;
	return;
	}

	if(a[i]!=ele)
	cout<<"\nSearch Unsuccessful.......\n";

}
void main()
{
	demo d;
	clrscr();
	d.get();
	d.display();
	d.search();
	getch();
}