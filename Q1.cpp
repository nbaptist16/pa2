#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

#include "pa2Functions.h"

const int ENTRIES = 10;

int main ()
{
  initialize();
  char comcode;
  char filename [100];

  int first = 0;
  int last = 0;
  double firstDub = 0;
  double lastDub = 0;
  double delta = 0;

  ifstream readingRainbow;
  ofstream writingRainbow;

  while (comcode != 'q' && comcode != 'Q')
    {
      if(readingRainbow.is_open() && readingRainbow.eof())
	readingRainbow.close();
      if(writingRainbow.is_open())
	writingRainbow << "Please enter a command code: ";
      cout << "Please enter command code: ";
      cin >> comcode;
      if (checkCode(comcode) == true)
	{
	  return 0;
	}
      else
	{
	    while (checkCode(comcode) == false)
	      {
		cout << "Invalid command code" << endl;
		cout << "Please enter command code: ";
		cin >> comcode;
	      }
	}


     if (comcode == 'i' || comcode == 'o')
	{
	  if (readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> filename;
	  else
	    cin >> filename;
	  if (comcode == 'i')
	    readDataFromFile(filename);
	  else
	    writeDataToFile(filename);
	}
      else //if not i/o
	{
	  if(readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> filename;
      switch (comcode)
	{
	case 'f':
	  int finput;
	  if (readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> finput;
	  else
	    {
	      cout << "Please enter command parameters:";
	      cin >> finput;
	    }
	  if(writingRainbow.is_open())
	    {
	      writingRainbow << finput << endl;
	      writingRainbow << "factorial(" << finput << ") = " << factorial(finput)<< endl;
	    }
	  cout << "factorial(" << finput << ") = " << factorial(finput)<< endl;
	  break;
	case 'b':
	  int binput;
	  if (readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> binput;
	  else
	    {
	      cout << "Please enter command parameters:";
	      cin >> binput;
	    }
	  if(writingRainbow.is_open())
	    {
	      writingRainbow << binput << endl;
	      writingRainbow << "fibonacci(" << binput << ") = " << fibonacci(binput)<< endl;
	    }
	  cout << "fibonacci(" << binput << ") = " << fibonacci(binput)<< endl;
	  break;
	case 'r':
	  //I THINK I FINALLY FIGURED OUT HOW TO USE FILE I/O??
	  //JUST PRETEND WHATEVER I GOT UP THERE IS COPIED FOR THESE FUNCTIONS
	  double rinput;
	  if (readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> rinput;
	  else
	    {
	      cout << "Please enter command parameters:";
	      cin >> rinput;
	    }
	  if(writingRainbow.is_open())
	    {
	      writingRainbow << rinput << endl;
	      writingRainbow << "findSqrtValue(" << rinput << ") = " << findSqrtValue(rinput)<< endl;
	    }
	  cout << "findSqrtValue(" << rinput << ") = " << findSqrtValue(rinput)<< endl;
	  break;
	case 'l':
	  double linput;
	  if (readingRainbow.is_open() && !readingRainbow.eof())
	    readingRainbow >> linput;
	  else
	    {
	      cout << "Please enter command parameters:";
	      cin >> linput;
	    }
	  if(writingRainbow.is_open())
	    {
	      writingRainbow << linput << endl;
	      writingRainbow << "naturalLog(" << linput << ") = " << naturalLog(linput)<< endl;
	    }
	  cout << "naturalLog(" << linput << ") = " << naturalLog(linput)<< endl;
	  break;
	case 'c':
	  break;
	case 'u':
	  break;
	case 'd':
	  
	  break;
	case 'e':
	  break;
	case 'y':
	  break;
	case 's':
	  break;
	case 'n':
	  break;
	case 'x':
	  break;
	case 'k':
	  break;
	}
	}
    }

  if(writingRainbow.is_open())
    writingRainbow.close();
  if(readingRainbow.is_open())
    readingRainbow.close();

  return 0;
}
