#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();
class Management
{ public :
	Management()
	{
		mainMenu();
	}
};

class Details
{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		void information()
		{
			cout<<"\nEnter the customer ID :";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\nEnter the address :";
			cin>>add;
			cout<<"\nEnter the gender :";
			cin>>gender;
			cout<<"Your details are saved with us !\n"<<endl;
			
		}
};

int Details ::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		void flights()
		{
			string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
				
			}
			cout<<"\nWelcome to the Airline !"<<endl;
			cout<<"Press the number of the country of which you want to book the flight :";
			cin>>choice;
			switch(choice)
			{
				case 1:
					{
						cout<<"__________Welcome to Dubai Emirates_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. DUB -498"<<endl;
						cout<<"\t08-01-2022 8:00AM 10hrs Rs 14000"<<endl;
						cout<<"2. DUB -658"<<endl;
						cout<<"\t09-01-2022 4:00AM 12hrs Rs 10000"<<endl;
						cout<<"3. DUB -756"<<endl;
					    cout<<"\t011-01-2022 11:00AM 11hrs Rs 9000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=14000;
					    	cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=10000;
					    	cout<<"\nYou have successfully booked the flight DUB-658"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=9000;
					    	cout<<"\nYou have successfully booked the flight DUB-756"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
						
					}
				case 2:
					{
						cout<<"__________Welcome to Canadian Airlines_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. CA -198"<<endl;
						cout<<"\t09-01-2022 9:00AM 20hrs Rs 20000"<<endl;
						cout<<"2. CA -650"<<endl;
						cout<<"\t10-01-2022 5:00AM 24hrs Rs 18000"<<endl;
						cout<<"3. CA -759"<<endl;
					    cout<<"\t08-01-2022 10:00PM 16hrs Rs 27000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=20000;
					    	cout<<"\nYou have successfully booked the flight CA-198"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=18000;
					    	cout<<"\nYou have successfully booked the flight DUB-CA-650"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=27000;
					    	cout<<"\nYou have successfully booked the flight CA-759"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
							else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
				case 3:
					{
						cout<<"__________Welcome to UK Airways_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. UK -205"<<endl;
						cout<<"\t07-01-2022 10:00AM 18hrs Rs 16000"<<endl;
						cout<<"2. UK -650"<<endl;
						cout<<"\t08-01-2022 4:00PM 12hrs Rs 12000"<<endl;
						cout<<"3. UK -145"<<endl;
					    cout<<"\t010-01-2022 2:00AM 11hrs Rs 9000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=16000;
					    	cout<<"\nYou have successfully booked the flight UK-205"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=12000;
					    	cout<<"\nYou have successfully booked the flight UK-650"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=9000;
					    	cout<<"\nYou have successfully booked the flight UK-145"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    
						}
							else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
				case 4:
					{
						cout<<"__________Welcome to US Airways_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. US -198"<<endl;
						cout<<"\t09-01-2022 9:00PM 20hrs Rs 34000"<<endl;
						cout<<"2. US -458"<<endl;
						cout<<"\t12-01-2022 4:00AM 24hrs Rs 29000"<<endl;
						cout<<"3. US -256"<<endl;
					    cout<<"\t011-01-2022 11:00PM 29hrs Rs 25000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=34000;
					    	cout<<"\nYou have successfully booked the flight DUB-498"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=29000;
					    	cout<<"\nYou have successfully booked the flight DUB-658"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=25000;
					    	cout<<"\nYou have successfully booked the flight DUB-756"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
							else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
				case 5:
					{
						cout<<"__________Welcome to Australian Airlines_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. As -390"<<endl;
						cout<<"\t08-01-2022 11:00AM 17hrs Rs 44000"<<endl;
						cout<<"2. As -458"<<endl;
						cout<<"\t09-01-2022 1:00AM 20hrs Rs 38000"<<endl;
						cout<<"3. As -956"<<endl;
					    cout<<"\t011-01-2022 11:00AM 22hrs Rs 35000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=44000;
					    	cout<<"\nYou have successfully booked the flight As-390"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=38000;
					    	cout<<"\nYou have successfully booked the flight As-458"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=35000;
					    	cout<<"\nYou have successfully booked the flight As-956"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
				case 6:
					{
						cout<<"__________Welcome to European Airlines_________\n"<<endl;
						cout<<"Your comfort is our priority .Enjoy the Journey !"<<endl;
						cout<<"Following are the flights \n"<<endl;
						cout<<"1. EU -490"<<endl;
						cout<<"\t09-01-2022 8:00AM 15hrs Rs 38000"<<endl;
						cout<<"2. EU -958"<<endl;
						cout<<"\t12-01-2022 4:00AM 18hrs Rs 35000"<<endl;
						cout<<"3. EU -856"<<endl;
					    cout<<"\t10-01-2022 11:00AM 20hrs Rs 30000"<<endl;
					    cout<<"\nSelect the flights you want to book :";
					    cin>>choice1;
					    if(choice1==1)
					    {
					    	charges=38000;
					    	cout<<"\nYou have successfully booked the flight EU-490"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==2)
					    {
					    	charges=35000;
					    	cout<<"\nYou have successfully booked the flight EU-958"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else if(choice1==3)
					    {
					    	charges=30000;
					    	cout<<"\nYou have successfully booked the flight EU-856"<<endl;
					    	cout<<"You can go back to menu and take the ticket"<<endl;
					    	
						}
						else
						{
							cout<<"Invalid input , shifting to the previous menu"<<endl;
							flights();
						}
						cout<<"Press any key to go back to the main menu :"<<endl;
						cin>>back;
						if(back==1)
						{
							mainMenu();
						}
						else
						{
							mainMenu();
						}
					}
					default:
						{
							cout<<"Invalid Input .Shifting you to the main Menu !"<<endl;
							mainMenu();
							break;
						}
					
			}
		}
};

float registration::charges;
int registration::choice;
class ticket :public registration,Details
{
	public:
		void Bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf<<"__________XYZ Airlines________"<<endl;
				outf<<"_____________Ticket____________"<<endl;
				outf<<"_______________________________"<<endl;
				outf<<"Customer ID :"<<Details::cId<<endl;
				outf<<"Customer Name :"<<Details::name<<endl;
				outf<<"Customer Gender :"<<Details::gender<<endl;
				outf<<"\tDescription"<<endl<<endl;
				
				if(registration::choice==1)
				{
					destination="Dubai";
				}
				else if(registration::choice==2)
				{
					destination="Canada";
				}
				else if(registration::choice==3)
				{
					destination="UK";
				}
				else if(registration::choice==4)
				{
					destination="USA";
				}
				else if(registration::choice==5)
				{
					destination="Australia";
				}
				else if(registration::choice==6)
				{
					destination="Europe";
				}
				outf<<"Destination :\t\t"<<destination<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;
			}
			outf.close();
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if (!ifs)
				{
					cout<<"File error !"<<endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr,100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
};

void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t                           XYZ Airlines            \n"<<endl<<endl;
	cout<<"\t\t\t_____________Main Menu_____________"<<endl;
	cout<<"\t\t_____________________________________________\t"<<endl<<endl<<endl;
	cout<<"\t|\t\t\t\t\t\t\t\t|"<<endl;
	cout<<"\t|\t\t Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t\t Press 2 for Flight Registration        \t|"<<endl;
	cout<<"\t|\t\t Press 3 for Tickets and Charges        \t|"<<endl;
    cout<<"\t|\t\t Press 4 to Exit                        \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t|"<<endl;
    cout<<"\t\t_____________________________________________\t"<<endl<<endl<<endl;
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	switch(lchoice)
	{
		case 1:
			{
				cout<<"__________Customers__________\n"<<endl;
				d.information();
				cout<<"Press any key to go back to Main menu ";
				cin>>back;
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
		case 2:
			{
				cout<<"__________Book a flight using this sysem_________\n"<<endl;
				r.flights();
				break;
			}
		case 3:
			{
				cout<<"__________Get your ticket_________\n"<<endl;
				t.Bill();
				
				cout<<"Your ticket is printed , you can collect it \n"<<endl;
				cout<<"Press 1 to display your ticket ";
				cin>>back;
				if(back==1)
				{
					t.dispBill();
					cout<<"Press any key to go back to Main menu ";
					cin>>back;
					if(back==1)
					{
						mainMenu();
					}
					else
					{
						mainMenu();
					}
					
				}
				else
				{
					mainMenu();
				}
				break;
			}
		case 4:
			{
				cout<<"\n\n\t________Thank-you_________"<<endl;
				break;
			}
		default:
			{
				cout<<"Invalid Input , Please try again !\n"<<endl;
				mainMenu();
				break;
			}
	}
}

int main()
{
	Management Mobj;
	return 0;
}
