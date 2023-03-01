//ENGR 3180 - Homework 1 Part A
//Jacob Barker
//jbarke33
//9/28/21
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
int subtotal = 0, lastAcc = 0 , grandtotal = 0 ;
ofstream output ("output.txt");	//Creates file in which to write output
if (output.is_open())
{
  	output << endl << "Acount Number\t Expense" << endl; //Writes Headers
     	output << "---------------------------" << endl;
     	while (!cin.eof())
     	{	
       	 	int x;	//x denotes a variable for input values
        	cin  >> x;
		if(x>9999) //This for() statement only allows for the five digit account numbers to pass
		{
        		if (lastAcc != 0 && x != lastAcc)	//Checks last account number entered
	       		{					//if new account then calulate and display subtotal
            			output << "sub-total = " << subtotal << endl;
            			output << endl;
            			subtotal = 0;
        		}
   	
   		lastAcc = x; 	//assigns current account number
		output << x;	//writes account to file	
		output << "\t\t";	
        	cin >> x;	//Retrieves expense from output
		output << x <<endl;	//writes expense to file
        	subtotal += x;	//Calculates subtotal
        	grandtotal += x;	//Calculates grandtotal
		}
      	}
		
    	output << "sub-total = " << subtotal << endl;	//outputs subtotal
    	output << endl;	
    	subtotal = 0;

    	output << "grand-total = " << grandtotal << endl;	//outputs grandtotal
    	output << endl;
    	output.close(); //closes file
	}	
//These lines will output the recorded output from txt file
string line;
ifstream outputfile("output.txt");
if(outputfile.is_open()) 
{
	while(getline(outputfile,line)) 
	{
		cout << line << endl;
	}
	outputfile.close();
}
     return 0;
}
