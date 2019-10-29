//functions 'ere
#include <cmath>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
using namespace std;

extern const int ENTRIES = 10;
ifstream readingRainbow;
ofstream writingRainbow;

//char calcGrade(int avatar, bool richUncle, int inputTry); example fn prototype

void initialize()
{
  cout << "EC327: Introduction to Software Engineering" << endl;
  cout << "Fall 2019" << endl;
  cout << "Programming Assignment 2" << endl;
  cout << "Value of Entries is: " << ENTRIES << endl;
}

bool checkCode(char comcode)
{
  comcode = tolower(comcode);
  if ((comcode >= 'b' && comcode <= 'f') || comcode == 'i' || comcode == 'k' || comcode == 'l' || comcode == 'n' || comcode == 'o' || (comcode >= 'q' && comcode <= 's') || comcode == 'u' || comcode == 'x' || comcode == 'y')
    {
    return true;
    }
  else
    {
    return false;
    }
}

void writeDataToFile(const char * filename)
{
writingRainbow.open(filename);
}

void readDataFromFile(const char * filename)
{
readingRainbow.open(filename);
}

int factorial(int finput) //for case f
{
  if (finput == 0)
    return 1;
  else
    return finput * factorial(finput-1);
}

int fibonacci(int binput) //for case b
{
  if (binput == 0)
    return 0;
  else if (binput == 1)
    return 1;
  else
    return fibonacci(binput - 1) + fibonacci(binput - 2);
}

double findSqrtValue(double rinput) //for case r
{
  return sqrt(rinput);
}

double naturalLog(double linput) //for case l
{
  return log(linput);
}

double areaCircle(double cinput) //for case c
{
  return 3.14159265*cinput*cinput;
}

double areaSquare(double uinput) //for case u
{
  return uinput*uinput;
}

int findNextOddValue(int dinput) //for case d
{
  if (dinput%2 != 0)
    return dinput;
  else
    return dinput + 1;
}

int findNextEvenValue(int einput) //for case e
{
  if (einput%2 == 0)
    return einput;
  else
    return einput + 1;
}

double findNyanCatValue(double yinput) //for case y
{
  return ((4 * yinput)*yinput) + yinput + 10;
}

double doMath(double minput, char mcom) //for case m (math): sin, cos, exp
{
  switch (mcom)
    {
    case 's':
      return sin(minput);
      break;
    case 'n':
      return cos(minput);
      break;
    case 'x':
      return exp(minput);
      break;
    }
}

double lucky(double kinput) //for case k
{
srand(time(0) + kinput);
return rand() + kinput;
//srand(time(kinput));
}
