#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
void display(string atomicNumber)
{

	//bakc part22222#
	//changeslolololol#
	//part2lololol#

	fstream myFile("element.txt",ios::out | ios::in);
	int count = 1;
	cout<<"Atomic Number : "<<atomicNumber<<endl;
	while(!myFile.eof())
	{
		string check = " ";
		string output;
		myFile>>check;
		if(strcmp(check.c_str(),atomicNumber.c_str()) == 0)
		{
			getline(myFile,output);
			if(count == 1)
			{
				cout<<"Symbol : "<<output<<endl;
			}
			else
			if(count == 2)
			{
				cout<<"Name : "<<output<<endl;
			}
			else
			if(count == 3)
			{
				cout<<"Atomic Weight : "<<output<<endl;
			}
			else
			if(count == 4)
			{
				cout<<"Properties : "<<endl;
			}
			if(count >= 4)
			{
				cout<<count-3<<" "<<output<<endl;
			}
			count = count + 1;
		}
	}
}
void frontDisplay()
{
	cout<<"MODERN PERIODIC TABLE\n Compiled By:-\n1)Sarthak Mishra\n2)Rudra Gujarathi\n3)Apoorv Garg";
}
int option()
{
	int opt;
	cout<<"Enter A Choice\n1)Search By Element Symbol\n2)Search By Atomic Number\n3)Add A Property to the Element\n4)Delete A Property\n5)Exit Application\n\n:";
	cin>>opt;
	system("CLS");
	return opt;
}
void searchBySymbol(bool& itr)
{
	
}
void searchByAtomicNumber(bool& itr)
{
	string atomicNumber;
	cout<<"Enter Atomic Number :"<<endl;
	cin>>atomicNumber;
	system("CLS");
	display(atomicNumber);
	getchar();
	int choice;
	cout<<"To continue Press 1 Else Press 0 To Exit"<<endl;
	cin>>choice;
	if(choice == 0)
	{
		itr = false;
	}
}
void endNote()
{
	cout<<"thanks,bye";
}
void addNote()
{
	
}
int main()
{	
	frontDisplay();
	getchar();
	system("CLS");
	bool isTrue = true;
	int choice;
	while(isTrue)
	{
		choice  = option();
		switch(choice)
		{
			case 1: searchBySymbol(isTrue);
					break;
			case 2: searchByAtomicNumber(isTrue);
					break;
			case 3: break;
		    case 4 : break;
		    case 5 : endNote();
		             return 0;
		    default : cout<<"Invalid Choice"<<endl;
		              getchar();
		              getchar();
		              system("CLS");
		}
	}
	if(choice != 5 )
	endNote();
}
