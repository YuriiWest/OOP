#include <iostream>
#include <Windows.h>
#include <string>
#include <iomanip>


using namespace std;
const int size=20;

class human{

public:
	string  name;
	int year;
	string  sex;
	
	void initializationHuman(){

		cout<<"Ââåä³òü Ï²Á"<<endl;
		getline(cin,name);
		
		cout<<"Ââåä³òü ñòàòü"<<endl;
		getline(cin,sex);

cout<<"Ââåä³òü ð³ê íàðîäæåííÿ"<<endl;
		cin>>year;
	
	}
	void showInfaH(){
   
	cout<<"Ï²Á :  "<<name<<endl<<"Ð³ê íàðîäæåííÿ  :   "<<year<<endl<<"Ñòàòü :  "<<sex<<endl;
	
	}	
};

class student  : public human
{public:
	int year_Enter; 
int number;
int subjects;
int GPA;

char **subject ;
int *mark;



void initializationStudent(){
cout<<"Ââåä³òü ð³ê âñòóïó  ";
cin>>year_Enter;
cout<<"Ââåä³òü íîìåð çàë³êîâî¿ êíèæêè   ";
cin>>number;
cout<<"Ââåä³òü ê³ëüê³ñòü ïðåäìåò³â    ";
cin>>subjects; 



subject= new char*[subjects];
	for(int i=0;i<subjects;i++){
		subject[i]= new char[size];}

 mark=new int [subjects]; 
 

   for(int i=0;i<subjects;i++){
	   int len;
	   cout<<"Ââåä³òü íàçâè ïðåäìåò³â (íà êîæíèé ïðåäìåò íå á³ëüøå í³æ 20 ñèìâîë³â )     ";
	   cin>>*(subject+i);
	  len= strlen(*(subject+i));

	  for(int k=len;k<subjects;k++){
		  subject[i][k]='\0';   }                                                       
	    cout<<"Ââåä³òü âàø áàë ç ö³º¿ äèñöèïë³íè (â³ä 1 äî 100)";
		cin>>mark[i];}
   } 
   

	 
float Gpa (){float r=0;

  
	for(int i=0;i<subjects;i++){
		r+=mark[i];}
	r/=subjects;
	
	return r;
}


  
void showInfaS(){int k=0;
cout<<endl<<"Ð³ê âñòóïó :  "<<year_Enter<<endl<<"Íîìåð çàë³êîâî¿ êíèæêè :  "<<number<<endl<<"Ê³ëüê³ñòü ïðåäìåò³â íàâ÷àííÿ :  "<<subjects<<endl<<endl<<endl;
cout<<"Ïîðÿäêîâèé  íîìåð:  "<<setw(22)<<"Ïðåäìåò:  "<<setw(29)<<" Îö³íêà :"<<endl;
for(int i=0;i<subjects;i++){
	cout<<i+1<<")"<<"\t"<<setw(20)<<"\t"<<*(subject+i)<<"\t"<<setw(20)<<"\t""\t"<<mark[i]<<"\t""\t"<<endl;
}cout<<endl;
cout<<"Âàø ñåðåäí³é áàë =  "<<  setprecision(2)<<Gpa()<<endl;
}
	
	
	
	
	




}; 
int main(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	 setlocale(LC_ALL, "Russian");

student Krasavchic;
Krasavchic.initializationHuman();

Krasavchic.initializationStudent();
cout<<endl<<endl;
Krasavchic.showInfaH();

Krasavchic.showInfaS();

system("pause");
return 0;}
