#include<iostream.h>
#include<conio.h>
class demo
{
	int a[5][5],b[5][5],c[5][5],d[5][5],e[5][5],i,j,r1,c1,r2,c2;
	public:
	void get();
	void add();
	void sub();
	void trans();
};
void demo::get()
{
	cout<<"\nEnter Rows And Columns For Matrix1:";
	cin>>r1>>c1;
	cout<<"\nEnter Elements Of Matrix1:\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}

	cout<<"\nEnter Rows And Columns For Matrix2:";
	cin>>r2>>c2;
	cout<<"\nEnter Elements Of Matrix2:\n";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
		cout<<"\n";
	}

}
void demo::add()
{
	cout<<"\nAddition Of Matrices Is:\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
	cout<<"\n";
	}
}

void demo :: sub()
{
	cout<<"\nSubstraction Of Matrices :\n";
	for(i=0;i<c1;i++)
	{
		for(j=0;j<r1;j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			cout<<d[i][j]<<"\t";
		}
	cout<<"\n";
	}
}

void demo::trans()
{
	cout<<"\nTransPose Of Matrix1 Is:\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			e[i][j]=a[j][i];
			cout<<e[i][j]<<"\t";
		}
	cout<<"\n";
	}
}

void main()
{
	demo d;
	clrscr();
	d.get();
	d.add();
	d.sub();
	d.trans();
	getch();
}
