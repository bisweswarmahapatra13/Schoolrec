/**************************************************************************/
/******************* MADE BY: BISWESWAR MAHAPATRA *************************/
/************************* YEAR: 2016-2017 ********************************/
/*************************** CLASS:12 C ***********************************/
/**************************************************************************/
/*******************   STUDENT RECORD HOLDER PROGRAM     ******************/
/**************************************************************************/
/**************************************************************************/
//********************* HEADER FILES INCLUDED *****************************/
/**************************************************************************/
#include<fstream.h>
#include<conio.h>
#include<string.h>
//#include<ctype.h>
#include<stdio.h>
#include<iomanip.h>
/**************************************************************************/
//************************* GLOBAL VARIABLE *******************************/
/**************************************************************************/
int i,cf[5];
char cd[5];
/**************************************************************************/
//********************* STRUCTURE FOR SUBJECTS ****************************/
/**************************************************************************/
struct subject
{
char s[30];
}c[5];
/**************************************************************************/
//*************************** SCHOOL LOGO  ********************************/
/**************************************************************************/
void menu4()
{
cout<<"\t****************************************************************\n";
cout<<"\t\t GURU NANAK PUBLIC SCHOOL,PUNJABI BAGH,NEW DELHI\n";
cout<<"\t****************************************************************\n";
}
/**************************************************************************/
//********************* FUNCTION TO ASSIGN GRADE **************************/
/**************************************************************************/
void grades(int m)
{
    if(m>90)
       strcpy(cd,"A1");
   if(m>80&&m<=90)
       strcpy(cd,"A2");
   if(m>70&&m<=80)
       strcpy(cd,"B1");
   if(m>60&&m<=70)
       strcpy(cd,"B2");
   if(m>50&&m<=60)
       strcpy(cd,"C1");
   if(m>40&&m<=50)
       strcpy(cd,"C2");
   if(m>=33&&m<=40)
       strcpy(cd,"C2");
   if(m<33)
       strcpy(cd,"F");
}
/**************************************************************************/
//***************** FUCNCTION TO ASSIGN GPRADE POINT **********************/
/**************************************************************************/
void gradess(int m,int l)
{
    if(m>90)
     {  strcpy(cd,"A1");
	cf[l]=10;
     }
   if(m>80&&m<=90)
     {  strcpy(cd,"A2");
	cf[l]=9;
     }
   if(m>70&&m<=80)
     {  strcpy(cd,"B1");
	cf[l]=8;
     }
   if(m>60&&m<=70)
     {  strcpy(cd,"B2");
	cf[l]=7;
     }
   if(m>50&&m<=60)
     {  strcpy(cd,"C1");
	cf[l]=6;
     }
   if(m>40&&m<=50)
     {  strcpy(cd,"C2");
	cf[l]=5;
     }
   if(m>=33&&m<=40)
     {  strcpy(cd,"D");
	cf[l]=4;
     }
    if(m<33)
     {  strcpy(cd,"F");
	cf[l]=3;
     }

}
/**************************************************************************/
//*************************** ASSIGN TERMS ********************************/
/**************************************************************************/
void assign(int m)
{
   if(m==1)
       strcpy(cd,"FA1");
   if(m==2)
       strcpy(cd,"FA2");
   if(m==3)
       strcpy(cd,"FA3");
   if(m==4)
       strcpy(cd,"FA4");
   if(m==5)
       strcpy(cd,"SA1");
   if(m==6)
       strcpy(cd,"SA2");
}
/**************************************************************************/
//************************ ALLOCT SUBJECT *********************************/
/**************************************************************************/
void alloct(char rname[20])
{
   if(strcmpi(rname,"12C")==0||strcmpi(rname,"11C")==0)
      {
       strcpy(c[0].s,"PHYSICS");
	 strcpy(c[1].s,"CHEMISTRY");
	 strcpy(c[2].s,"ENGLISH");
	 strcpy(c[3].s,"MATHS");
	 strcpy(c[4].s,"C++/BIO/P.Ed");
       }
     if(strcmpi(rname,"12B")==0||strcmpi(rname,"11B")==0)
      {
	strcpy(c[0].s,"ACC.");
	 strcpy(c[1].s,"ECO.");
	 strcpy(c[2].s,"ENGLISH");
	 strcpy(c[3].s,"MATHS");
	 strcpy(c[4].s,"B.ST");

       }
      if(strcmpi(rname,"12D")==0||strcmpi(rname,"11D")==0)
      {
       strcpy(c[0].s,"ACC.");
	 strcpy(c[1].s,"ECO.");
	 strcpy(c[2].s,"ENGLISH");
	 strcpy(c[3].s,"B.ST");
	 strcpy(c[4].s,"I.P/P.Ed");

      }
     if(strcmpi(rname,"12A")==0||strcmpi(rname,"11A")==0)
      {
	strcpy(c[0].s,"HISTORY");
	 strcpy(c[1].s,"P.SCIENCE");
	 strcpy(c[2].s,"ENGLISH");
	 strcpy(c[3].s,"GEOGRAPHY");
	 strcpy(c[4].s,"HINDI/PUNJABI");

       }

}
/**************************************************************************/
//********************* CLASS THAT MAINTAIN RECORDS ***********************/
/**************************************************************************/
class student
{
int FA22[5];
int SA11[5];
int SA22[5];
int FA33[5];
int FA44[5];
int FA11[5];
char trans[10];
int adno;
///////////////////////// PUBLIC MEMBERS //////////////////////////////////
public:
int roll;
char nam[30];
char dob[16];
int getroll()
{
  return roll;
}
void marksoffa1();
void report(int p);
void marksoffa2();
void marksoffa3();
void marksoffa4();
void marksofsa1();
void marksofsa2();
void enter_rec();
void disp_rec(int k);
void disp_FA1();
void disp_FA2();
void disp_SA1();
void disp_FA3();
void disp_FA4();
void disp_SA2();
}o,p;
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER PERSONAL RECORDS *************/
/**************************************************************************/
void student::enter_rec()
{
    gotoxy(15,10);
    cout<<"ROLL NO. -> ";
    cin>>roll; gotoxy(15,11);
    cout<<"NAME -> ";
    gets(nam);strupr(nam);gotoxy(15,12);
    cout<<"DATE OF BIRTH -> ";
    cin>>dob;gotoxy(15,13);
    cout<<"ADMISSION NO. -> ";
    cin>>adno;gotoxy(15,14);
    cout<<"MODE OF TRANSPORT -> ";
    cin>>trans;gotoxy(15,15);
    clrscr();
}
/**************************************************************************/
//*********** MEMBER FUNCTION TO DISPLAY PERSONAL RECORDS *****************/
/**************************************************************************/
void student::disp_rec(int k)
{

  gotoxy(1,11+k);
  cout<<roll;
  gotoxy(9,11+k);
  cout<<nam; gotoxy(34,11+k);
  cout<<dob;gotoxy(55,11+k);
  cout<<trans<<'\n';
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER FA1 MARKS *********************/
/**************************************************************************/
void student:: marksoffa1()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR FA1 ";
   cout<<"\n\n\tPLEASE ENTER MARKS OUT OF 50 ";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>FA11[i];
}
       getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER FA2 MARKS *********************/
/**************************************************************************/
void student:: marksoffa2()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR FA2 ";
   cout<<"\n\n\tPLEASE ENTER MARKS OUT OF 50";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>FA22[i];
    }
      getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER SA1 MARKS *********************/
/**************************************************************************/
void student:: marksofsa1()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR SA1 ";
   cout<<"\n\n\t PLEASE ENTER MARKS OUT OF 100";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>SA11[i];
    }
     getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER FA3 MARKS *********************/
/**************************************************************************/
void student:: marksoffa3()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR FA3 ";
   cout<<"\n\n\tPLEASE ENTER MARKS OUT OF 50";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>FA33[i];
    }
      getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER FA4 MARKS *********************/
/**************************************************************************/
void student:: marksoffa4()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR FA4 ";
   cout<<"\n\n\tPLEASE ENTER MARKS OUT OF 50";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>FA44[i];
    }
    getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO ENTER SA2 MARKS *********************/
/**************************************************************************/
void student:: marksofsa2()
{
   clrscr(); menu4();
   cout<<"\n\n\t\t YOU ARE ENTERING MARKS FOR SA2 ";
   cout<<"\n\n\tPLEASE ENTER MARKS OUT OF 100";
   gotoxy(10,10);
   for(i=0;i<5;i++)
   {
    gotoxy(10,10+i);
    cout<<"Enter the marks in "<<c[i].s<<" -> ";
    cin>>SA22[i];
    }
      getch();
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY FA1 MARKS *******************/
/**************************************************************************/
void student  :: disp_FA1()
{
    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<FA11[i]<<"         ";
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY FA2 MARKS *******************/
/**************************************************************************/
void student  :: disp_FA2()
{
    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<FA22[i]<<"         ";
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY FA3 MARKS *******************/
/**************************************************************************/
void student  :: disp_FA3()
{
    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<FA33[i]<<"         ";
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY FA4 MARKS *******************/
/**************************************************************************/
void student  :: disp_FA4()
{

    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<FA44[i]<<"         ";
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY SA1 MARKS *******************/
/**************************************************************************/
void student  :: disp_SA1()
{
    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<SA11[i]<<"         ";
}
/**************************************************************************/
//**************** MEMBER FUNCTION TO DISPLAY SA2 MARKS *******************/
/**************************************************************************/
void student  :: disp_SA2()
{
    cout<<'\n'<<setw(20)<<nam<<"    ";
   for(i=0;i<5;i++)
     cout<<SA22[i]<<"         ";
}
/**************************************************************************/
//**************** CALCULATE REPORT CARD OF A STUDENT *********************/
/**************************************************************************/
void student :: report(int p)
{
  int sum1=0;
 int  sum2=0;
  int sum3=0;
  sum1=FA11[p]+FA22[p]+FA33[p]+FA44[p];
   sum2=SA11[p]+SA22[p];
   sum1=(sum1*0.5);
   sum2=(sum2*0.5);

  cout<<"  "<<c[i].s;gotoxy(30,11+p); grades(sum1);
  cout<<cd;gotoxy(39,11+p);grades(sum2);
  cout<<cd<<endl;
   sum1=(0.4*sum1);
   sum2=(0.6*sum2);
   sum3=sum1+sum2;
   gradess(sum3,p);gotoxy(49,11+p);
   cout<<cd;gotoxy(59,11+p);
   cout<<cf[p]<<endl;
}
/**************************************************************************/
//**************** FUNCTION TO DELETE A STUDENT RECORD  *******************/
/**************************************************************************/
void delete_record()
{
int r;
char found='n';
char hname[20];
char hiname[20];



   clrscr();
    menu4();
cout<<"\n\n\n\n\n\n\t\t\tIN WHICH CLASS THE STUDENT IS IN -> ";
cin>>hname;
strcpy(hiname,hname);
strcat(hname,".dat");
cout<<"\n\tEnter Roll for delete : ";
cin>>r;
ifstream f1(hname,ios::binary);
ofstream f2("temp.dat",ios::binary);
ofstream f3("delete.dat",ios::binary|ios::app);
while(f1.read((char*)&o,sizeof(o)))
{
if(r != o.getroll())
f2.write((char*)&o,sizeof(o));
else
{ f3.write((char*)&o,sizeof(o));
 found='o';
}
}
f1.close();
f2.close();
f3.close();
remove(hname);
rename("temp.dat",hname);
if(found=='o')
  {
      clrscr(); menu4();
      cout<<"\n\n\n\t\t\tSTUDENT RECORD DELETED";
      gotoxy(35,24);
      cout<<"* SAVED FOR ANY FURTHER USE ";
   }
else
{
  clrscr(); menu4();
  cout<<"\n\n\n\t NO SUCH STUDENT IN THE CLASS ";
 }
}
/**************************************************************************/
//**************** FUNCTION TO INSERT A STUDENT RECORD  *******************/
/**************************************************************************/
void insert()
{
char kname[20];
char kiname[20];
int n,Q;
clrscr(); menu4();
cout<<"Enter the file name where u want to enter the record ->";
cin>>kname;
alloct(kname);
strcpy(kiname,kname);
strcat(kname,".dat");
ofstream f1(kname,ios::binary|ios::app);
cout<<"\n\n\tHow many students record u want to enter -> ";
cin>>n;
for(Q=0;Q<n;Q++)
{
alloct(kname);
 clrscr();  menu4();
 cout<<"\tEntering records in class ->" <<kiname;
 cout<<"\n\n\n";
 o.enter_rec(); menu4();
 o.marksoffa1(); menu4();
 o.marksoffa2(); menu4();
 o.marksofsa1(); menu4();
 o.marksoffa3(); menu4();
 o.marksoffa4(); menu4();
 o.marksofsa2();

 f1.write((char*)&o,sizeof(o));
 }
 f1.close();
}
/**************************************************************************/
//**************** FUNCTION TO DISPLAY CLASS LIST  ************************/
/**************************************************************************/
void disp_list()
{
char zname[20];
char ziname[20];

clrscr();
cout<<"\n\nEnter the CLASS whose LIST is to be DISPLAYED -> ";
cin>>zname;i=0;
clrscr();
strcpy(ziname,zname);
strcat(zname,".dat");
ifstream f1(zname,ios::binary);strupr(ziname);
 menu4();
cout<<" \n\t\t\tCLASS LIST OF CLASS "<<ziname;
cout<<"\n\n\t\t//////////////////////////////////////////\n";
cout<<"  \t\t      ROLL.NO              NAME    " ;
cout<<"\n\t\t///////////////////////////////////////////\n";

while(f1.read((char*)&o,sizeof(o)))
{
     cout<<"\t\t        "<<o.roll;
     gotoxy(40,10+i);
     cout<<o.nam<<endl;
     i++;
 }
 getch();
 f1.close();
}
/**************************************************************************/
//**************** FUNCTION TO DISPLAY PERSONAL INFO.   *******************/
/**************************************************************************/
void display_info()
{
char pname[20];
char piname[20];

clrscr(); menu4();
cout<<"\n\nEnter the class name whose record is to be Displayed -> ";
cin>>pname;i=0;
clrscr();
strcpy(piname,pname);
strcat(pname,".dat");strupr(piname);
ifstream f1(pname,ios::binary);
 menu4();
cout<<" \n\n\t\t\tCLASS INFORMATION OF CLASS "<<piname;
cout<<"\n\n\n////////////////////////////////////////////////////////////////////\n";
cout<<"ROLL.NO       NAME \t           DOB  \t  MODE OF TRANSPORT";
cout<<"\n///////////////////////////////////////////////////////////////////\n";

while(f1.read((char*)&o,sizeof(o)))
 {
    i++;
    o.disp_rec(i);
 }
getch();
f1.close();
}
/**************************************************************************/
//**************** FUNCTION TO MODIFY STUDENT RECORD  *********************/
/**************************************************************************/
void modify()
{
char jname[20];
char jiname[20];
int found=0;
int optt;
int rolll;
long pos;
 clrscr();
 menu4();
cout<<"\n\n\t\tEnter the class name -> ";
cin>>jname;
strcpy(jiname,jname);
strcat(jname,".dat");
fstream f1(jname,ios::binary|ios::in|ios::out);
cout<<"\n\n\t   Enter the Roll. No whose record is to be modified -> ";
cin>>rolll;   clrscr();
f1.seekp(0,ios::beg);
alloct(jiname);
while(f1.read((char*)&o,sizeof(o))&&found==0)
{
   if(o.getroll()==rolll)
   {
      pos=f1.tellg()-sizeof(o);
       clrscr(); found=1;
       o.enter_rec();
       o.marksoffa1();
       o.marksoffa2();
       o.marksoffa3();
       o.marksoffa4();
       o.marksofsa1();
       o.marksofsa2();
	f1.seekp(pos);
	f1.write((char*)&o,sizeof(o));
	clrscr();
	cout<<"\n\n\n\t\t\tRECORD MODIFIED "; getch();
     }
   }
    if(found==0)
       cout<<"\n\n\n RECORD DOESNOT EXISTS ";
   f1.close();   getch();
}
/**************************************************************************/
//**************** FUNCTION TO DISPLAY IN REPORT CARD  ********************/
/**************************************************************************/
void dop()
{
 strupr(o.nam);
  menu4();
 cout<<"\n\t\tNAME -> "<<o.nam<<endl;
     cout<<"\t\tDATE OF BIRTH -> "<<o.dob;
cout<<"\n\n////////////////////////////////////////////////////////////////////\n";
cout<<"  SUBJECT ";gotoxy(30,0);
cout<<"                  FA'S     SA'S     TOTAL      GP" ;
cout<<"\n///////////////////////////////////////////////////////////////////\n";
}
/**************************************************************************/
//**************** FUNCTION TO RETURN CALCULATED CGPA  ********************/
/**************************************************************************/
float cgpa()
{
  float sum6=0;
  for(int j=0;j<5;j++)
    sum6=sum6+cf[j];
    sum6=sum6/5;
    return sum6;
}
/**************************************************************************/
//**************** FUNCTION TO DISPLAY REPORT CARD  ***********************/
/**************************************************************************/
void reportcard()
{
char kname[20];
char kiname[20];
int r;

cout<<"Enter the CLASS NAME for report card ->";
cin>>kname;
strcpy(kiname,kname);alloct(kname);
strcat(kname,".dat");
cout<<"Enter the ROLL.NO of the student for THE  REPORT CARD -> ";
cin>>r;
clrscr();

ifstream f1(kname,ios::binary);

while(f1.read((char*)&o,sizeof(o)))
{
       if(o.getroll()==r)
   {
     dop();
       for(i=0;i<5;i++)
	   o.report(i);
	 cout<<"\n\n\n\t\t\t\tC.G.P.A -> ";
	 cout<<cgpa();

    }
}
getch();
f1.close();
}
/**************************************************************************/
//**************** FUNCTION TO DISPLAY MARKS OF THE CLASS ****************/
/**************************************************************************/
void displaymarks()
{
char qname[20];
char qiname[20];
int opt;


cout<<"\n\nEnter the class name whose MARKS is to be Displayed -> ";
cin>>qname;
clrscr();
 menu4();
cout<<"\n***********";
cout<<"\nMENU";
cout<<"\n***********\n";
cout<<"\n1. FA1 ";
cout<<"\n2. FA2 ";
cout<<"\n3. FA3 ";
cout<<"\n4. FA4 ";
cout<<"\n5. SA1 ";
cout<<"\n6. SA2" ;
cout<<"\nYOUR CHOICE -> ";
cin>>opt;
assign(opt);
strcpy(qiname,qname); clrscr();
alloct(qname); strupr(qname);
strcat(qiname,".dat");
ifstream f1(qiname,ios::binary);
 menu4();
cout<<"\n\n\t\t\tDISPLAYING MARKS OF "<<cd<<"\n\t\t\t    CLASS -> "<<qname;
cout<<"\n///////////////////////////////////////////////////////////////////////////\n";
cout<<"   NAME              ";
cout<<c[0].s<<"  "<<c[1].s<<"    "<<c[2].s<<"    "<<c[3].s<<"    "<<c[4].s;
cout<<"\n//////////////////////////////////////////////////////////////////////////";


while(f1.read((char*)&o,sizeof(o)))
 {
   switch(opt)
  {
    case 1:o.disp_FA1();
	   break;
    case 2:o.disp_FA2();
	   break;
    case 3:o.disp_FA3();
	   break;
    case 4:o.disp_FA4();
	   break;
    case 5:o.disp_SA1();
	   break;
    case 6:o.disp_SA2();
	   break;
  }
 }
 getch();
}
/**************************************************************************/
//**************** FUNCTION TO DELETE A STUDENT RECORD  *******************/
/**************************************************************************/
void deleted()
{

clrscr();
i=-1;


 menu4();
ifstream f1("delete.dat",ios::binary);
cout<<"\n\t\t\tSTUDENTS WHO LEFT THE SCHOOL ";
cout<<"\n\n\n////////////////////////////////////////////////////////////////////\n";
cout<<"ROLL.NO       NAME \t           DOB  \t  MODE OF TRANSPORT";
cout<<"\n///////////////////////////////////////////////////////////////////";

while(f1.read((char*)&o,sizeof(o)))
{
 i++;
 o.disp_rec(i);
 }
getch();
f1.close();
}
/**************************************************************************/
//**************** FUNCTION WHICH DISPLAYS MENU  **************************/
/**************************************************************************/
void menu1()
{
  int t=0;
 clrscr();


while(t!=6)
{
clrscr();
 menu4();
cout<<"\n***********";
cout<<"\n  OPTIONS";
cout<<"\n***********\n";
cout<<"\t1.DISPLAY CLASS LIST ";
cout<<"\n\t2.DISPLAY PERSO. INFO OF THE STUDENTS ";
cout<<"\n\t3.DISPLAY PARTICULAR ASSESMENT MARKS\n ";
cout<<"\t4.DISPLAY REPORT CARD OF THE CLASS ";
cout<<"\n\t5.DISPLAY STUDENTS WHO ALL LEFT THE SCHOOL ";
cout<<"\n\t6.GO BACK TO MAIN MENU";
cout<<"\n\t YOUR CHOICE -> ";
cin>>t;
switch(t)
{
case 1:disp_list();
       break;

case 2:display_info();
       break;

case 3:displaymarks();
       break;
case 4:reportcard();
       break;
case 5:deleted();
       break;
}
}
}
/**************************************************************************/
//**********************  MAIN FUNCTION  **********************************/
/**************************************************************************/
void main()
{
int z=0;

while(z!=5)
{
clrscr();
 menu4();
cout<<"\n*********";
cout<<"\n  MENU";
cout<<"\n**********";
cout<<"\n1.ENTERING MODE ";
cout<<"\n2.DISPLAYING MODE ";
cout<<"\n3.MODIFYING MODE ";
cout<<"\n4.DELETING MODE ";
cout<<"\n5.EXIT";
cout<<"\nYOUR CHOICE -> ";
cin>>z;
switch(z)
{
case 1:insert();
       break;
case 2:menu1();
       break;
case 3:modify();
       break;
case 4:delete_record();
       getch();
       break;
}
}
}
/**************************************************************************/
//*********************** END OF PROGRAM  *********************************/
/**************************************************************************/
