//to link/load
#ifndef PA2FUNCTIONS_H
#define PA2FUNCTIONS_H

//char calcGrade(int avatar, bool richUncle, int inputTry); example fn prototype

void initialize();

bool checkCode(char comcode);

void writeDataToFile(const char *);

void readDataFromFile(const char *);

int factorial(int finput);

int fibonacci(int binput);

double findSqrtValue(double rinput);

double naturalLog(double linput);

double areaCircle(double cinput);

double areaSquare(double uinput);

int findNextOddValue(int dinput);

int findNextEvenValue(int einput);

double findNyanCatValue(double yinput);

double doMath(double minput, char mcom);

double lucky(double kinput);

#endif
