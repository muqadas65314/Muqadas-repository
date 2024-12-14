#include<iostream>
#include<windows.h>
#include<cstring>
using namespace std;
void setColor(int color)
 { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
 }
 void exit(){}
struct addnew
{
	char name[50];
	string dept[50];
	int contact;
	int sap_id;
	string course_code[5];
	string email[50];
	int gardien_contact;
	string course_key[5];
	int i=0;
	};
	int students_ids[50]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50};


   	
string course_name[50]= {"pf", "eng", "dis", "ict", "phy", "dsa", "it", "cm","dbms","wd","ics","ops","ds","ap","bio","dsd","phar","micro","pplogy","egc","epi","bs","eh","hsp","sbs","rp","plog","clogy","gen","imm","ec","ep","eb","ecology","eg","calculas","la","ra","ca","topp","gc","oc","inoc","pc","bioc","opt","rela","np","pp","cm"};
  	string key[50]=     {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50"};

void newcourse()
		{	
		addnew a1;
		setColor(3);
		cout<<"Enter information to enroll in cources:\n";
		cout<<"Enter your name:\n";
			cin.ignore();
		cin.getline(a1.name,50);
		cout<<"Enter your sap_id:\n";
		cin>>a1.sap_id;
		
	while(a1.i<5)
		{
			setColor(7);
		cout<<"\nEnter enter course name"<<a1.i+1<<":\n";
		cin>>a1.course_code[a1.i];
		cout<<"Enter course key"<<a1.i+1<<":\n";
		cin>>a1.course_key[a1.i];
		
		bool student_found=false;
		for(int j=0;j<50;j++)
		{
			setColor(5);
			
			if(students_ids[j]==a1.sap_id)
			{
			student_found=true;
			break;
			}
}
	bool course_and_key_found = false;
					  for (int k= 0; k < 50; k++) 
					  {
					  setColor(3); 
					  if (course_name[k] == a1.course_code[a1.i] && key[k] == a1.course_key[a1.i]) 
					  { 
					  course_and_key_found = true;
					   break;
					   } 
					   } 
		
	
		if(student_found&&course_and_key_found)
		{
			cout<<"*";
			cout<<"\nYour are successfully enroll in this course"<<a1.i+1;
		cout<<"\n*";
		}
		else
		{
			cout<<"student not enroll";
		}
		if(!student_found&&!course_and_key_found)
		{
			cout<<"invalid\n";
		}
if(!student_found)
		{
			setColor(4);
			cout<<"invalid";
		
		}
	a1.i++;
}
int k=0;
cout<<"Your name:\n"<<a1.name;
cin.ignore();
cout<<"your sap id:\n"<<a1.sap_id;
while(k<5)
{

cout<<"\nYour course name:\n"<<*a1.course_code<<endl;;
cout<<"\n course key:\n"<<*a1.course_key<<endl;
k++;
}
}
void feedback()
{
	setColor(5);
	int ease_of_use,functionality, performance, design, statisfication;
	string suggestion;
	cout<<"please rate the following ascept of our student management system:\n";
	cout<<"Ease of use\n";
	cout<<"1. poor\n2. fair\n3. good\n4. very good\n5. excellent \n";
	cin>>ease_of_use;

	cout<<"\nFunctionality:\n";
	cout<<"1. poor\n2. fair\n3. good\n4. very good\n5. excellent \n";
	cin>>functionality;
	
	cout<<"\nPerformance";
	cout<<"\n1. poor\n2. fair\n3. good\n4. very good\n5. excellent \n";
	cin>>performance;
	
	cout<<"\nDesign";
	cout<<"1. poor\n2. fair\n3. good\n4. very good\n5. excellent \n";
	cin>>design;
	cout<<"\nOverall statisficaion\n";
	cout<<"\n1. poor\n2. fair\n3. good\n4. very good\n5. excellent \n";
	cin>>statisfication;

	int sum=ease_of_use+functionality+performance+design+statisfication;
	float average=sum/5;
	cout<<"\nAverage of feedback that you give us:\n"<<average;
	cout<<"\nAny suggestion\n";
	cin>>suggestion;
}

 struct student
 {
 	char fstname[20];
 	char lstname[20];
 	char fathername[50];
 	char guardian[50];
	 int mrk10;
	 int mrk12;
	 int persentage12;
	 string  phoneno1;
	   string phoneno2;
	 string email;
	 string background;
	  string choice;	  
 };
 student s[50];	
 int i=0;
 void display()
 {
 	setColor(7);
 	int n;
	  cout << "Enter student number to display information: " << endl; 
	  cin >> n; 
	  n--;
 	bool studentFound = false;
for(int j=0;j<i;j++)
{
if(n==j)
	{
	studentFound = true;
 	setColor(7);
 cout << "\n Final Information of student "<<j+1<<" :\n";
 cout << "Full  Name: " << s[j].fstname<<" "<< s[j].lstname <<endl;
 cout << "Father's Name: " << s[j].fathername << endl;
 cout << "Guardian's Name: " << s[j].guardian << endl; 
 cout << "Matric Marks: " << s[j].mrk10 << endl;
 cout << "2nd  Year Marks: " << s[j].mrk12 << endl;
 cout << "2nd Year persentage: " << s[j].persentage12 << endl;
 cout << "Phone Number: " << s[j].phoneno1 << endl;
 cout << "Guardian's Phone Number: " << s[j].phoneno2 << endl;
 cout << "Email: " << s[j].email << endl;
 cout << "Background: " << s[j].background << endl;
 cout << "Selected Program: " << s[j].choice << endl; 

}
}
if (!studentFound)
 {
 	 setColor(4);
 	cout<<" It seems the student's information has been deleted or you enter wrong number of student .\n";
 }
 }
 
 
 void edits() 
 {
 	for(int j=0;j<i;j++)
	{
  setColor(11);
   int choice;
    cout << "Enter  following number for edit information of student  "<<j+1<<endl; 
    	cout << "\t0 for  no change\n"; 
	cout << "\t1 for  First Name\n"; 
	cout << "\t2 for  Last Name\n";
	cout << "\t3 for  Father's Name\n"; 
	cout << "\t4 for  Guardian's Name\n";
	cout << "\t5 for  Matric Marks\n";
	cout << "\t6 for  2nd Year Marks\n";
	cout << "\t7 for  2nd Year persentage \n";
	cout << "\t8 for  Phone Number\n";
	cout << "\t9 for  Guardian's Phone Number\n"; 
	cout << "\t10 for Email\n";
	cout << "\t11 for Background\n";
	cout << "\t12 for Selected Program\n";
	cout << "\tEnter your choice: ";
	cin >> choice;
    cin.ignore(); 
			  
	switch (choice) 
	 {
	 	case 0: 
	 	setColor(5);
			cout << "you do not need any change .\n  ";
			break;
		 case 1: 
			cout << "Enter new First Name: ";
			cin.getline(s[j].fstname, 20);
			break;
		case 2:
			cout << "Enter new Last Name: ";
			cin.getline(s[j].lstname, 20);
			 break;
		case 3:
			cout << "Enter new Father's Name: "; 
			cin.getline(s[j].fathername, 50); 
			break;
		case 4:
			cout << "Enter new Guardian's Name: "; 
			cin.getline(s[j].guardian, 50);
			break; 
		case 5:
			cout << "Enter new Matric Marks: ";
			cin >> s[j].mrk10;
			break;
		case 6:
			cout << "Enter new 2nd  Year Marks: ";
			 cin >> s[j].mrk12; 
			break; 
		case 7:
			cout << "Enter new 2nd Year Marks persentage : "; 
			cin >> s[j].persentage12;
			 break;
		case 8:
			cout << "Enter new Phone Number: "; 
			cin>> s[j].phoneno1;
			break; 
		case 9:
			cout << "Enter new Guardian's Phone Number: ";
			cin >> s[j].phoneno2; 
			break;
		case 10:
			cout << "Enter new Email: ";
			 cin >> s[j].email; 
			 break; 
		case 11:
			cout << "Enter new Background: ";
			cin >> s[j].background;
			break; 
        case 12:
             cout << "Enter new Selected Program: ";
             cin >> s[j].choice;
             break; 
	    default:
	    	setColor(4);
		    cout << "Invalid choice!\n";
			 break; }
		}
	
			  }
void del()
 { int n; 
 cout << "Enter the number you want to delete: " << endl;
  cin >> n;
   n--; 
 if (n >= 0 && n < i) 
 { for (int j = n; j < i - 1; j++)
  {  s[j] = s[j + 1]; } i--; 
   setColor(4); cout << "Deleted" << endl;
    }
	 else
	  { setColor(4);
	   cout << "Invalid number entered. No student deleted." << endl;
	    }
	    }
 int login()
  {
    int password;
	    string user;
	    int c;
do
{

		setColor(6);
	cout<<"Enter correct user name and  pasword to login successfully\n";
	cout<<"Username : ";
cin>>user;
cout<<"Password : ";
cin>>password;
if(user=="Riphah123"||password==12345678)
{
	if(user!="Riphah123")
	{
		setColor(4);
		cout<<" ------------*******************------------------\n";
		cout<<"              WRONG USER_NAME \n";
		cout<<" ------------*******************------------------\n";
			
	}
	else if(password!=12345678)
		{
			setColor(4);
			cout<<" ------------*******************------------------\n";
			cout<<"              WRONG PASSWORD \n";
			cout<<" ------------*******************------------------\n";
			
		}
	else
	{
		setColor(10);
		cout<<" ------------*******************-----------------\n";
		cout<<" -------------Login successfully-----------------\n";
		cout<<" ------------*******************-----------------\n";
		break;	
		}	
}
else 
{
	setColor(4);
		cout<<" ------****************************************---------\n";
		cout<<"        Try again you entered wrong information .. \n";
		cout<<" -------****************************************---------\n";
		cout<<"\nYou cannot use the system without logging in .try again .\n";
			
}
	setColor(3);
cout<<"Enter 1 if you want to log_in ."<<endl;
cin>>c;
if(c!=1)
{
	return 1;
}
}while(c==1);

	return 0;
}

void studentinfo()
	{
	char ch;
do
	{
	setColor(8);
	cout<<"Enter your  first_name"<<endl;
		cin.ignore();
	cin.getline(s[i].fstname,20);
	cout<<"Enter your  last_name"<<endl;
		cin.getline(s[i].lstname,20);
		

	cout<<"Enter your  Father_name"<<endl;
	cin.getline(s[i].fathername,50);
		
	cout<<"Enter your  guardian_name"<<endl;
	cin.getline(s[i].guardian,50);
		
		cout<<"Enter your matric marks "<<endl;
	cin>>s[i].mrk10;
	cin.ignore();
	cout<<"Enter your 2nd year  marks "<<endl;
	cin>>s[i].mrk12;
	cout<<"Enter your 2nd year marks persentage "<<endl;
	cin>>s[i].persentage12;
		number:
	cout<<"Enter your phone number  "<<endl;
	cin>>s[i].phoneno1;
	cout<<"Enter your parents's/guardian's phone number  "<<endl;
	cin>>s[i].phoneno2;
	if(s[i].phoneno1.length()!=11||s[i].phoneno2.length()!=11)
	{
		setColor(12);
		cout<<" wrong phone number!!!.TRy again \n";
		goto number;
	}
	setColor(8);
	cout<<"Enter your E-mail address "<<endl;
	cin>>s[i].email;
	cout<<"Enter yor background (Ics/Med/Eng)..etc "<<endl;
	cin>>s[i].background;
	cout<<"-----------------------------------------------------  "<<endl;
	setColor(3);
	cout<<"OUR OFFERED PROGRAMS ARE HERE, SELECT ANYONE PROGRAM IN WHICH YOU ARE INTERESTED  "<<endl;
	cout<<"\t\t\t****Undergraduate Programs****"<<endl;
	setColor(14);
	cout<<"\t\t\t\t**Computing**\n 1. BS Software Engineering\n 2.BS Computer Science\n 3.BS Cyber Security"<<endl;
	cout<<" 4.BS Information Technology\n"<<endl;
	cout<<"-----------------------------"<<endl;
cout<<"\t\t\t**Health and Medical Sciences**"<<endl;
cout<<" 1.BS Dermal Sciences\n 2. BS Cardiology Technology,"<<endl;
 cout<<" 3.BS Public Health\n 4. BS Medical Imaging Technology\n 5. BS Biotechnology"<<endl;
cout<<"----------------------------"<<endl;
cout<<"\t\t\t**Engineering and Applied Sciences**"<<endl;
cout<<" 1.BS Environmental Sciences\n 2.BS Mathematics\n 3.BS Chemistry"<<endl;
cout<<" 4.BS Physics\n 5.BS Electrical Engineering\n "<<endl;
cout<<"----------------------------"<<endl;
cout<<"Enter program name  : ";
 cin.ignore();
  getline(cin,s[i].choice);
 setColor(2);
cout<<"-----------------------------------------------------  "<<endl;
cout<<"***you entered your information successfully ****  "<<endl;
cout<<"-----------------------------------------------------  "<<endl;
if(s[i].persentage12<50||s[i].persentage12>100)
	{
		setColor(4);
		cout<<" Warniing : you enter wrong  or  your 2nd marks persentage is below than 50%  so you are not aligible.   "<<endl;
		setColor(3);
		cout<<"***our eligible criteria is 50%****  "<<endl;
	}
setColor(3);
cout<<"Do you want to enter information for another student ?yes=y ,no=n"<<endl;
	cin>>ch;
i++;
}while(ch=='y');}

void search( )
{
	int n;
	int find;
	setColor(1);
	cout<<"enter student number  whose information you want to search"<<endl;
	cin>>n;
	n--;
	for(int j=0;j<i;j++)
	{
		
   if(n ==j)
{
setColor(11);
		 cout<<" what you want to search " <<endl;
	cout<<" 1. first name\n 2. last name\n 3. father name\n 4. gardian name\n 5. matric marks\n 6. 2nd year marks " <<endl;		 
		cout<<" 7.2nd year persentage\n 8.phone number\n 9.gardian phone number\n 10.E-mail\n 11.background\n 12.program" <<endl;
		s:
		cin>>find;
		setColor(13);
			switch (find) 
	 {
	 
		 case 1: 
			cout << "  First Name: "<<s[j].fstname<<endl;
			break;
		case 2:
			cout << "Last Name: "<<s[j].lstname<<endl;
			 break;
		case 3:
			cout << " Father's Name: "<<s[j].fathername<<endl;  
			break;
		case 4:
			cout << " Guardian's Name: "<<s[j].guardian<<endl; 
			break; 
		case 5:
			cout << " Matric Marks: " <<s[j].mrk10<<endl;
			break;
		case 6:
			cout << " 2nd  Year Marks: "<<s[j].mrk12<<endl;
		
			break; 
		case 7:
			cout << " 2nd Year Marks persentage : "<<s[j].persentage12<<endl; 
	
			 break;
		case 8:
			cout << " Phone Number: "<<s[j].phoneno1<<endl; 
	
			break; 
		case 9:
			cout << " Guardian's Phone Number: "<<s[j].phoneno2<<endl;
			 
			break;
		case 10:
			cout << "  Email: "<<s[j].email<<endl;
		
			 break; 
		case 11:
			cout << "  Background: "<<s[j].background<<endl;
		
			break; 
        case 12:
             cout << "Selected Program: "<<s[j].choice<<endl;
           
             break; 
	    default:
	    	{
			
		    cout << "Invalid choice!\n Enter from 1 to 12"<<endl;
			goto s;}}
			 return; }
	
	}
    
	setColor(4);
 		cout<<"student not found\n";
		}
	
	
	int main()	
 {
 	char dell, searchh, dis,edit, choice;
 	 string info;
 	setColor(3);
	cout<<"\t\t\t***************************************** \n";
cout<<"\t\t\t*\t\t\t\t\t*\n\t\t\t*\t\t\t\t\t*\n\t\t\t*  Welcome to STUDENT MANAGENT SYSTEM\t*\n\t\t\t*\t\t\t\t\t*\n\t\t\t*\t\t\t\t\t*"<<endl;
	
	cout<<"\t\t\t***************************************** \n";



 int a=login();
 if(a==1)
 {
 	setColor(12);
 	cout<<"Due to incorrect entry, we cannot grant you access.";
 	return 0;
 }
  p:
  	setColor(3);
cout << "\nDo you want to  enter  any  information?Enter (y/n) ";
 cin >> info;
if (info == "y" || info == "yes")
{
	studentinfo();
	
	}
	
srch:
	setColor(11);
	cout << "Do you want to  search about any student ?Enter (y/n)y=yes and n=no: ";
 cin >> searchh;
if ( searchh== 'y' || searchh == 'Y')
{
	search();
	goto srch;}
di:
	setColor(7);
cout << "Do you want to  see your  information?Enter (y/n)y=yes and n=no: ";
   cin >> dis;
   cin.ignore(); 
	 if (dis == 'y' || dis == 'Y')
	  { 
	 display(); 
	 goto di;}
 e:
setColor(3);
   cout << "Do you want to edit any information ? Enter (y/n)y=yes and n=no: ";
   cin >> edit;
   cin.ignore(); 
	 if (edit == 'y' || edit == 'Y')
	  { 
	  edits();  goto e; }
	  d:
	  	setColor(12);
	     cout << "Do you want to delete any student from list  ? Enter (y/n)y=yes and n=no: ";
   cin >> dell;
   cin.ignore(); 
	 if (dell == 'y' || dell == 'Y')
	  { del(); goto d;
	   }
	   setColor(7);
cout << "Do you want to  see your  information?Enter (y/n)y=yes and n=no: ";
   cin >> dis;
   cin.ignore(); 
	 if (dis == 'y' || dis == 'Y')
	  { 
	 display(); }
 
newcourse();

 setColor(4);
 cout<<"\n Are you sure you want to exit...... \n yes=y ,no=n";
 cin>>choice;
 if(choice=='y'||choice=='Y')
 {
 		feedback();
 			setColor(11);
 	cout<<"\n\n\t\t\t\t\t\tGOOD-BYE";
 	exit();
 }
 else
 {
 goto p;	
 }
return 0;
 }  