//ENGR 3180 - Homework 1 part C
//Jacob Barker
//jbarke33
//9/27/21

#include <iostream>

using namespace std;

int nestedPair(int maxDepth) { 	//recursive function to find nesting depth
	string input;
	while(!cin.eof()) {
		cin>>input; 
		if(input=="begin") maxDepth++; //counts depth up if begin
		if(input=="end") maxDepth--;	//counts depth down if end
		//uses max() function and recursion to return highest maxDepth
		maxDepth=max(maxDepth, nestedPair(maxDepth));
	}
	return maxDepth;
}

int main() {
	int maxDepth;	//most deeply nested pair
	maxDepth = nestedPair(maxDepth); //calls nesting depth function
	cout<<"Max is "<<maxDepth<<endl;
	return 0;
}

