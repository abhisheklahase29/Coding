#include<fstream>
#include<iostream>
#include <string>
using namespace std;
int main()
{
	fstream myFile;
	/*
	myFile.open("Abhi.txt", ios::out);//Write
	if (myFile.is_open())
	{
		myFile << "Hello File Is Created\n";
		myFile << "Second line of File \n";
		myFile.close();
	}
	myFile.open("Abhi.txt", ios::app);//append
	if (myFile.is_open())
	{
		myFile << "File Is Modified\n";
     }		*/


	myFile.open("Abhi.txt", ios::in);//read
	  if(myFile.is_open()){
		  string line;
		  while (getline(myFile, line))
		  {
			  cout << line << endl;
		  }
	    
		myFile.close();
	}
}