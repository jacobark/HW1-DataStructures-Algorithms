//ENGR 3180 - Homework 1 Part B
//Jacob Barker
//jbarke33
//9/27/21
#include <iostream>

using namespace std;

int main() {
	int x, numOfInputs;
	int sum, thirdTerm, secondTerm, lastTerm, placeholder = 0;
	numOfInputs=-1; //variable for storing number of inputs. -1 accounts for problem of counting too high? 

	while(!cin.eof()){
		cin>>x;		//gets user input
		sum = sum+x;	//adds input to running sum
		numOfInputs++;		//keeps track of number of inputs
		thirdTerm = secondTerm;	//the follwoing four lines stores
		secondTerm = lastTerm;	//last three user inputs
		lastTerm = placeholder;
		placeholder  = x;
		x=0;
	}

	cout<<"number-of-inputs = "<<numOfInputs;//outputs nummber of inputs
	cout<<"    sum = "<<sum<<endl;	//outputs sum of input integers
	cout<<thirdTerm<<endl;		//These lines output last three inputs
	cout<<secondTerm<<endl;
	cout<<lastTerm<<endl;

	return 0;
}
