#include <fstream.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
class train
{
	private:
		int trid;
		char trname[10];
		char trtype[10];
		char source[20];
		char destination[20];
		float fare;
		int t1acseats;
		int t2acseats;
		int t3acseats;
		int tsleeperseats;
		int b1acseats;
		int b2acseats;
		int b3acseats;
		int bsleeperseats;
		int tseats;
		int bseats;
	public:
		float ret_fare()
		{
			return fare;
		}
		int ret_trid()
		{
			return trid;
		}
		void trmodiseats(int x)
		{
			bseats=b1acseats+b2acseats+b3acseats+bsleeperseats;
			bseats+=x;
		}
		void trdecseats(int x)
		{
			bseats=b1acseats+b2acseats+b3acseats+bsleeperseats;
			bseats-=x;
		}
		int ret_aseats()
		{
			tseats=t1acseats+t2acseats+t3acseats+tsleeperseats;
			bseats=b1acseats+b2acseats+b3acseats+bsleeperseats;
			return (tseats-bseats);
		}
		char* ret_s()
		{
			return source;
		}
		char* ret_d()
		{
			return destination;
		}
		void trgetdata(int &id)
		{
			gotoxy(10,4);
			cout<<"Train id generated is : "<<id;
			trid=id;
			gotoxy(10,5);
			cout<<"Enter train name : ";
			cin>>trname;
			gotoxy(10,6);
			cout<<"how would you like to prefer(1ac/2ac/3ac/sleeper): ";
			cin>>trtype;
			gotoxy(10,7);
			cout<<"Enter source : ";
			cin>>source;
			gotoxy(10,8);
			cout<<"Enter destination : ";
			cin>>destination;
			gotoxy(10,9);
			cout<<"Enter fare : ";
			cin>>fare;
			gotoxy(10,10);
			if(strcmp(trtype,"1ac")==0)
			{
			     cout<<"Enter total 1ac seats : ";
			     cin>>t1acseats;
			}
			else if(strcmp(trtype,"2ac")==0)
			{
			     cout<<"Enter total 2ac seats : ";
			     cin>>t2acseats;
			}
			else if(strcmp(trtype,"3ac")==0)
			{
			     cout<<"Enter total 3ac seats : ";
			     cin>>t3acseats;
			}
			else if(strcmp(trtype,"sleeper")==0)
			{
			     cout<<"Enter total sleeper seats : ";
			     cin>>tsleeperseats;
			}
		}
		void trmodidata()
		{
			gotoxy(10,4);
			cout<<"Train id is : "<<trid;
			gotoxy(10,5);
			cout<<"Enter train name : ";
			cin>>trname;
			gotoxy(10,6);
			cout<<"how would you like to prefer(1ac/2ac/3ac/sleeper): ";
			cin>>trtype;
			gotoxy(10,7);
			cout<<"Enter source : ";
			cin>>source;
			gotoxy(10,8);
			cout<<"Enter destination : ";
			cin>>destination;
			gotoxy(10,9);
			cout<<"Enter fare : ";
			cin>>fare;
			gotoxy(10,10);
			if(strcmp(trtype,"1ac")==0)
			{
			     cout<<"Enter total 1ac seats : ";
			     cin>>t1acseats;
			}
			else if(strcmp(trtype,"2ac")==0)
			{
			     cout<<"Enter total 2ac seats : ";
			     cin>>t2acseats;
			}
			else if(strcmp(trtype,"3ac")==0)
			{
			     cout<<"Enter total 3ac seats : ";
			     cin>>t3acseats;
			}
			else if(strcmp(trtype,"sleeper")==0)
			{
			     cout<<"Enter total sleeper seats : ";
			     cin>>tsleeperseats;
			}
		}
		void trshowdata()
		{
			gotoxy(10,4);
			cout<<"Train id is : "<<trid;
			gotoxy(10,5);
			cout<<"Train name : "<<trname;
			gotoxy(10,6);
			cout<<"preferance : "<<trtype;
			gotoxy(10,7);
			cout<<"Source : "<<source;
			gotoxy(10,8);
			cout<<"Destination : "<<destination;
			gotoxy(10,9);
			cout<<"Fare : "<<fare;
			gotoxy(10,10);
			cout<<"Total 1ac seats : "<<t1acseats;
			gotoxy(10,11);
			cout<<"Total 2ac seats : "<<t2acseats;
			gotoxy(10,12);
			cout<<"Total 3ac seats : "<<t3acseats;
			gotoxy(10,13);
			cout<<"Total sleeper seats : "<<tsleeperseats;
			gotoxy(10,14);
			cout<<"Booked 1ac seats : "<<b1acseats;
			gotoxy(10,15);
			cout<<"Booked 2ac seats : "<<b2acseats;
			gotoxy(10,16);
			cout<<"Booked 3ac seats : "<<b3acseats;
			gotoxy(10,17);
			cout<<"Booked sleeper seats : "<<bsleeperseats;
		}
		void report(int r)
		{
			gotoxy(4,r);
			cout<<trid;
			gotoxy(9,r);
			cout<<trname;
			gotoxy(17,r);
			cout<<trtype;
			gotoxy(21,r);
			cout<<source;
			gotoxy(35,r);
			cout<<destination;
			gotoxy(50,r);
			cout<<fare;
			gotoxy(57,r);
			cout<<t1acseats;
			gotoxy(62,r);
			cout<<t2acseats;
			gotoxy(67,r);
			cout<<t3acseats;
			gotoxy(72,r);
			cout<<tsleeperseats;
			gotoxy(77,r);
			cout<<b1acseats;
			gotoxy(82,r);
			cout<<b2acseats;
			gotoxy(87,r);
			cout<<b3acseats;
			gotoxy(92,r);
			cout<<bsleeperseats;
		}
};
class passenger
{
	private:
		int pid;
		char pname[20];
		char paddress[30];
		char ph[20];
		int nop;
		char deleted;
	public:
		int ret_pid()
		{
			return pid;
		}
		void pdel()
		{
			deleted='y';
		}
		void pgetdata(int &id,int np)
		{
			deleted='n';
		        gotoxy(10,4);
			cout<<"Passenger id generated is : "<<id;
			pid=id;
			gotoxy(10,5);
			cout<<"Enter passenger name : ";
			gets(pname);
			gotoxy(10,6);
			cout<<"Enter passenger address : ";
			gets(paddress);
			gotoxy(10,7);
			cout<<"Enter phone : ";
			gets(ph);
			nop=np;
		}
		void pshowdata()
		{
			if(deleted=='n')
			{
			gotoxy(10,4);
			cout<<"Passenger id is : "<<pid;
			gotoxy(10,5);
			cout<<"Passenger name : "<<pname;
			gotoxy(10,6);
			cout<<"Passenger address : "<<paddress;
			gotoxy(10,7);
			cout<<"Phone No. : "<<ph;
			gotoxy(10,8);
			cout<<"Number of members : "<<nop;
			getch();
			}
		}
};
class transaction
{
	private:
		int tid;
		int trid;
		int pid;
		int nop;
		float totalfare;
	public:
		int ret_tid()
		{
			return tid;
		}
		int ret_pid()
		{
			return pid;
		}
		int ret_trid()
		{
			return trid;
		}
		int ret_nop()
		{
			return nop;
		}
		void tgetdata(int &id,int np,int trd,int pd,float fr)
		{
			tid=id;
			trid=trd;
			pid=pd;
			nop=np;
			totalfare=nop*fr;
		}
		void tshowdata()
		{
			gotoxy(10,4);
			cout<<"Booking id is : "<<tid;
			gotoxy(10,5);
			cout<<"Passenger id is : "<<pid;
			gotoxy(10,6);
			cout<<"Train id is : "<<trid;
			gotoxy(10,7);
			cout<<"Total fare : "<<totalfare;
			gotoxy(10,8);
			cout<<"Number of members : "<<nop;
		}
};
train tr;
passenger p;
transaction t;
fstream f;
void password()
{
	char *pass;
	gotoxy(25,10);
	pass=getpass("Enter the password: ");
	if(strcmp(pass,"abhey")!=0)
	{
		gotoxy(25,14);
		cout<<"Better luck next time";
		delay(800);
		exit(0);
	}
}
void loading()
{
	password();
	clrscr();
	int k=10,p=38;
	gotoxy(25,10);
	cout<<"L O A D I N G";
	for(int i=0;i<=100;i+=2)
	{
		if(p==45)
		{
			p=38;
			gotoxy(p,10);
			clreol();
		}
		gotoxy(p++,10);
		cout<<".";
		gotoxy(10,15);
		cout<<i;
		gotoxy(14,15);
		cout<<"%";
		gotoxy(k++,17);
		cout<<char(178);
		delay(200);
	}
	gotoxy(25,20);
	cout<<"press any key to continue ...";
	getch();
}
void enq()
{
	clrscr();
	f.open("passenger.dat",ios::in|ios::binary);
	while(f.read((char*)&p,sizeof(p)))
	{
		p.pshowdata();
		getch();
	}
	f.close();
}
void tradd()
{
	f.open("train.dat",ios::ate|ios::out|ios::binary);
	clrscr();
	int x=f.tellp()/sizeof(tr);
	x++;
	tr.trgetdata(x);
	f.write((char*)&tr,sizeof(tr));
	f.close();
}
void trshow()
{       
        clrscr();
	gotoxy(4,3);
	cout<<"TRID";
	gotoxy(9,3);
	cout<<"TR Name";
	gotoxy(19,3);
	cout<<"TR Type";
	gotoxy(29,3);
	cout<<"Source";
	gotoxy(43,3);
	cout<<"Destination";
	gotoxy(57,3);
	cout<<"Fare";
	gotoxy(63,3);
	cout<<"total1ac";
	gotoxy(68,3);
	cout<<"total2ac";
	gotoxy(73,3);
	cout<<"total3ac";
	gotoxy(78,3);
	cout<<"totalsleeper";
	gotoxy(83,3);
	cout<<"booked1ac";
	gotoxy(88,3);
	cout<<"booked2ac";
	gotoxy(93,3);
	cout<<"booked3ac";
	gotoxy(98,3);
	cout<<"bookedsleeper";
	f.open("train.dat",ios::in|ios::binary);
	int i=5;
	while(f.read((char*)&tr,sizeof(tr)))
		tr.report(i++);
	f.close();
	getch();
}
void trsearch()
{
	f.open("train.dat",ios::in|ios::binary);
	int flag=0,trno;
	clrscr();
	gotoxy(10,5);
	cout<<"Enter the train number to search : ";
	cin>>trno;
	while(f.read((char*)&tr,sizeof(tr)))
	{
		if(tr.ret_trid()==trno)
		{
			flag=1;
			break;
		}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"Train no. does not exist ...";
	}
	else
	{
		clrscr();
		tr.trshowdata();
	}
	getch();
}
void trdelete()
{
	f.open("train.dat",ios::in|ios::binary);
	int flag=0,trno;
	clrscr();
	gotoxy(10,5);
	cout<<"Enter the tr number to delete : ";
	cin>>trno;
	while(f.read((char*)&tr,sizeof(tr)))
	{
		if(tr.ret_trid()==trno)
		{
			flag=1;
			break;
		}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"Train no. does not exist ...";
	}
	else
	{
		f.open("train.dat",ios::in|ios::binary);
		ofstream f1("transaction.dat",ios::binary);
		while(f.read((char*)&tr,sizeof(tr)))
		{
			if(tr.ret_trid()!=trno)
				f1.write((char*)&tr,sizeof(tr));
		}
		f.close();
		f1.close();
		remove("train.dat");
		rename("transaction.dat","train.dat");
		gotoxy(10,10);
		cout<<"deleted successfully...";
	}
	getch();
}
void trmodify()
{
	f.open("tr.dat",ios::in|ios::binary);
	int flag=0,trno;
	clrscr();
	gotoxy(10,5);
	cout<<"Enter the train number to modify : ";
	cin>>trno;
	while(f.read((char*)&tr,sizeof(tr)))
	{
		if(tr.ret_trid()==trno)
		{
			flag=1;
			break;
		}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"train no. does not exist ...";
	}
	else
	{
		f.open("train.dat",ios::in|ios::out|ios::binary);
		while(f.read((char*)&tr,sizeof(tr)))
		{
			if(tr.ret_trid()==trno)
			{
				f.seekg(f.tellg()-sizeof(tr),ios::beg);
				clrscr();
				tr.trmodidata();
				f.write((char*)&tr,sizeof(tr));
				break;
			}
		}
		f.close();
		gotoxy(10,20);
		cout<<"modified successfully...";
	}
	getch();
}
void dbo()
{
	char ch;
	do
	{
		clrscr();
		gotoxy(30,8);
		cout<<"database operations";
		gotoxy(30,9);
		cout<<"-------------------";
		gotoxy(20,10);
		cout<<"1. add a train";
		gotoxy(20,11);
		cout<<"2. show trains";
		gotoxy(20,12);
		cout<<"3. search a train";
		gotoxy(20,13);
		cout<<"4. delete a train";
		gotoxy(20,14);
		cout<<"5. modify a train";
		gotoxy(20,15);
		cout<<"6. return back to main menu";
		gotoxy(20,18);
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case '1':tradd();
				 break;
			case '2':trshow();
				 break;
			case '3':trsearch();
				 break;
			case '4':trdelete();
				 break;
			case '5':trmodify();
				 break;
			case '6':return;
			default:gotoxy(20,17);
				cout<<"Invalid choice";
		}
	}while(1);
}
void book()
{       clrscr();
	int nop,flag=0;
	char s[20],d[20];
	gotoxy(10,4);
	cout<<"Enter the no. of passengers : ";
	cin>>nop;
	gotoxy(10,6);
	cout<<"Enter source : ";
	cin>>s;
	gotoxy(10,8);
	cout<<"Enter the destination: ";
	cin>>d;
	f.open("train.dat",ios::in|ios::binary);
	while(f.read((char*)&tr,sizeof(tr)))
	{
		if(tr.ret_aseats()>=nop)
		{
			if(strcmp(tr.ret_s(),s)==0 && strcmp(tr.ret_d(),d)==0)
			{
				flag=1;
				break;
			}
			else if(strcmp(tr.ret_s(),s)!=0 || strcmp(tr.ret_d(),d)!=0)
				flag=2;
		}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"Train no. does not exist ...";
	}
	else if(flag==2)
	{
		gotoxy(10,10);
		cout<<"source or destination does not match ...";
	}
	else if(flag==1)
	{
		gotoxy(10,10);
		cout<<"booking start...";
		getch();
		int trid=tr.ret_trid();
		f.open("train.dat",ios::in|ios::out|ios::binary);
		while(f.read((char*)&tr,sizeof(tr)))
		{
			if(tr.ret_trid()==trid)
			{
				f.seekg(f.tellg()-sizeof(tr),ios::beg);
				clrscr();
				tr.trmodiseats(nop);
				f.write((char*)&tr,sizeof(tr));
				break;
			}
		}
		f.close();
		f.open("passenger.dat",ios::ate|ios::out|ios::binary);
		clrscr();
		int x=f.tellp()/sizeof(p);
		x++;
		p.pgetdata(x,nop);
		f.write((char*)&p,sizeof(p));
		f.close();
		f.open("transaction.dat",ios::ate|ios::out|ios::binary);
		clrscr();
		x=f.tellp()/sizeof(t);
		x++;
		t.tgetdata(x,nop,trid,p.ret_pid(),tr.ret_fare());
		clrscr();
		gotoxy(10,10);
		cout<<"Your booking id is : "<<t.ret_tid();
		f.write((char*)&t,sizeof(t));
		f.close();
		gotoxy(10,20);
		cout<<"booking done successfully...";
	}
	getch();
}
void cancel()
{
	int bid,flag=0;
	gotoxy(10,4);
	cout<<"Enter the booking id : ";
	cin>>bid;
	f.open("transaction.dat",ios::in|ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		if(t.ret_tid()==bid)
		{
			flag=1;
			break;
		}
	}
	f.close();
	if(flag==0)
	{
		gotoxy(10,10);
		cout<<"Booking id does not exist ...";
	}
	else if(flag==1)
	{
		clrscr();
		gotoxy(10,10);
		cout<<"cancellation start...";
		getch();
		f.open("train.dat",ios::in|ios::out|ios::binary);
		while(f.read((char*)&tr,sizeof(tr)))
		{
			if(tr.ret_trid()==t.ret_trid())
			{
				f.seekg(f.tellg()-sizeof(tr),ios::beg);
				clrscr();
				tr.trdecseats(t.ret_nop());
				f.write((char*)&tr,sizeof(tr));
				break;
			}
		}
		f.close();
		f.open("passenger.dat",ios::in|ios::out|ios::binary);
		while(f.read((char*)&p,sizeof(p)))
		{
			if(t.ret_pid()==p.ret_pid())
			{
				f.seekg(f.tellg()-sizeof(p),ios::beg);
				p.pdel();
				f.write((char*)&p,sizeof(p));
				break;
			}
		}
		f.close();
		gotoxy(10,20);
		cout<<"ticket cancelled successfully...";
	}
	getch();
}
void view()
{
	clrscr();
	f.open("transaction.dat",ios::in|ios::binary);
	while(f.read((char*)&t,sizeof(t)))
	{
		t.tshowdata();
		getch();
	}
	f.close();
}
void trans()
{
	char ch;
	do
	{
		clrscr();
		gotoxy(30,8);
		cout<<"transaction menu";
		gotoxy(30,9);
		cout<<"----------------";
		gotoxy(20,10);
		cout<<"1. book ticket";
		gotoxy(20,11);
		cout<<"2. cancel ticket";
		gotoxy(20,12);
		cout<<"3. view ticket";
		gotoxy(20,13);
		cout<<"4. return back to main menu";
		gotoxy(20,15);
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case '1':book();
				 break;
			case '2':cancel();
				 break;
			case '3':view();
				 break;
			case '4':return;
			default:gotoxy(20,17);
				cout<<"Invalid choice";
		}
	}while(1);
}
void main()
{
	clrscr();
	loading();
	char ch;
	do
	{
		clrscr();
		gotoxy(30,8);
		cout<<"RAILWAYS RESVERTAION SYSTEM";
		gotoxy(30,9);
		cout<<"---------------------------";
		gotoxy(20,10);
		cout<<"1. Enquiry";
		gotoxy(20,11);
		cout<<"2. Database operations";
		gotoxy(20,12);
		cout<<"3. Transaction";
		gotoxy(20,13);
		cout<<"4. Exit";
		gotoxy(20,15);
		cout<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case '1':enq();
				 break;
			case '2':dbo();
				 break;
			case '3':trans();
				 break;
			case '4':exit(0);
			default:gotoxy(20,17);
				cout<<"Invalid choice";
				getch();
		}
	}while(1);
}
