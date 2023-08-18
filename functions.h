#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
using namespace std;


void create_account(){

		

	cout<<endl;
	char name[20];
	int account_no,pin,amount;
	cout<<"ENTER YOUR NAME :";
	cin>>name;
	//cin.getline(name,20);
	cout<<"ENTER YOUR ACCOUNT NO :";
	cin>>account_no;
	cout<<"ENTER YOUR Pin :";
	cin>>pin;
	cout<<"enter the initial amount :";
	cin>>amount;	
	
	ofstream create_ac("users.txt",ios::app);
	cout<<endl;
	create_ac<<""<<account_no;
	create_ac<<"     "<<pin;
	create_ac<<"     "<<name;
	
	
	

	create_ac<<"     "<<amount<<endl;
	create_ac.close();
	
	

	cout<<endl;
	cout<<"ACCOUNT CREATED SUCSESSFULLY";
	
	

}	

void users_info(){
	system("cls");
	cout<<"-------------------------------------"<<endl;
	cout<<"AC.NO    PIN     NAME    BALANCE"<<endl;
	cout<<"-------------------------------------"<<endl;
	ifstream information("users.txt");
	
	
	string data;

	while(information.eof()==0){
		getline(information,data);
		cout<<data<<endl;
			
	}
	
	

	
	}
	
	
int login(){
	
string account_no,pin,ac,p;
cout<<"enter account no ";
cin>>account_no;
cout<<"enter your pin :";
cin>>pin;
fstream read;
read.open("users.txt", ios::in);

string data;
bool flag=false;
bool flag2=true;
while(read){
	

	read>>ac;
	cout<<endl;
	read>>p;
	cout<<endl;
	
	
	if(ac==account_no && p==pin){
		system("cls");
		getline(read,data);
		flag2=false;
	 flag=true;

		
		
		
		cout<<"------------------------------"<<endl;
		cout<<"ac.no    name     amount"<<endl;
		cout<<"------------------------------"<<endl;
		cout<<ac<<" ";
		cout<<data<<endl;
		
		
		
			stringstream balance;
				balance<<data;
				int found;
				string temp;
				while(!balance.eof()){
		            	balance>>temp;
					 if (stringstream(temp) >> found){
					 	
					
                   
					 }
					 
				}	
			
			
		char option;
		cout<<endl<<endl;
		cout<<"press 1 for deposit :"<<endl;
		cout<<"press 2 for withdraw :"<<endl;
		cin>>option;
		int money;
		static	int remain;
		static int remaining;
		switch(option){
			
			case'1':
			
				char opt;
				cout<<"enter amount to deposit :";
				cin>>money;
				remain=found+money;
				cout<<" new balance is :"<<remain;
				cout<<endl;
				cout<<"do u want to deposit more :"<<endl;
				cout<<"Y/N :";
				cin >>opt;
				if(opt=='y'){
					system("cls");
					cout<<"enter the amount ";
					cin>>money;
					remain+=money;
					cout<<" new balance :"<<remain<<endl;
					cout<<"press any key to exit :";
				}
				if(opt=='n'){
					break;
				}
			
				break;
				
			case '2':
			cout<<" enter amount to withdraw :";
				cin >>money;
				int remaining;
			if(found>money){
				remaining=found-money;
		
			cout<<" remaining balace is "<<remaining<<endl;	
				
				cout<<"do u want to withdraw more :"<<endl;
				cout<<"Y/N :";
				cin >>opt;
				if(opt=='y'){
					system("cls");
					cout<<"enter the amount ";
					cin>>money;
					if(money<remaining)
					remaining-=money;
					cout<<" new balance :"<<remaining<<endl;
					cout<<"press any key to exit :";
				}
				if(opt=='n'){
					break;
				}
			}
			
				
			else{
				cout<<"insuffiecient balance !";
			}
	
		
		}
		
	}
	
	
	
	
	
	
		}
	if(flag==0){
		cout<<"incorrect pin or ac no"<<endl;
	}	
	
	
	
	
	
		 
		 
		}	 
			 
	
	

	

	
	


	
	



