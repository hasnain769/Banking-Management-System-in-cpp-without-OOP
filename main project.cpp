#include<iostream>
#include "functions.h"
#include<fstream>
#include<string.h>

using namespace std;


	

int main(){


	system("color 1f");

cout<<"                        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                  "<<endl;
cout<<"                        @@|||||||||||||||||||||||||||||||_______________|||||||||||||||||||||||||||||||||||||@@"<<endl;
cout<<"                        @@|||||||||||||||||||||||||||||||               |||||||||||||||||||||||||||||||||||||@@"<<endl;
cout<<"                        @@|||||||||||||||||||||||||||||| BANK OF WHYSIX |||||||||||||||||||||||||||||||||||||@@"<<endl;
cout<<"                        @@|||||||||||||||||||||||||||||||_______________|||||||||||||||||||||||||||||||||||||@@"<<endl;
cout<<"                        @@|||||||||||||||||||||||||||||||              ||||||||||||||||||||||||||||||||||||||@@"<<endl;
cout<<"                        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ "<<endl;
cout<<"                        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;

cout<<endl;
cout<<endl;
cout<<endl;

//main menu:
bool flag=true;
char option;
while(flag){

cout<<" MAIN MENU"<<endl;
cout<<endl;
cout<<"1 for login account :"<<endl;
cout<<"2 for create account:"<<endl;
cout<<"3 for users information:"<<endl;
cout<<"E for exit:"<<endl;
cout<<endl;
char option;
cout<<"select your desire option :";

cin>>option;
switch(option){
	case '1':
		login();
	
		break;
	
	case '2':
		create_account();
		break;
		
	case '3':

				users_info();
					break; 
		
		
	

	


	case 'e':
		system("cls");
		cout<<"thanks for choosing Us "<<endl;
		break;
}
cout<<endl;
cout<<"press any key to continue :";
cout<<"press any other key to E :";

cin>>option;
if(option=='e'){
	flag=false;
}
system("cls");
}




}





