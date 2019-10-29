#include <iostream>
#include <string>
using namespace std;

int * ReverseMultiply (int *list, int size);
int * ReverseAdd (int *list, int size);

int main()
{
  int size;
  
  cout << "Enter the number of entries: ";
  cin >> size;
  int list[size];
  for (int i = 0; i < size; i++)
    {
      cout << "Entry " << i << " is: ";
      cin >> list[i];
    }

  int *list1 = ReverseMultiply(list, size);
  int *list2 = ReverseAdd(list, size);

  cout << "*****" << endl;
  cout << "Original array is: "; //<< *list << " and the address of the zero element is: " << &list << endl;
  for (int j = 0; j < size; j++)
    {
      cout << list[j] << " ";
    }
  cout << "and the address of the zero element is: " << list << endl;
  cout << "One array is: ";
  for (int j = 0; j < (size*2) + 1; j++)
    {
      cout << list1[j] << " ";
    }
  cout << "and the address of the zero element is: " << list1 << endl;
  cout << "Two array is: ";
  for (int j = 0; j < (size*2) - 1; j++)
    {
      cout << list2[j] << " ";
    }
  cout << "and the address of the zero element is: " << list2 << endl;
  return 0;
}

int * ReverseMultiply (int *list, int size)
{
  int multsize = (2*size) + 1;
  int *list1 = new int[multsize];
  //int list1[multsize];
  int multiple = 1;
  for (int k = 0; k < size; k++)
    {
      list1[k] = list[k];
      list1[size + k] = list[size - (k + 1)];
      multiple *= (list1[k]*list1[size + k]);
    }
  list1[2*size] = multiple;
  //list1[2*size + 1] = multiple;
  return list1;
}

int * ReverseAdd (int *list, int size)
{
  int addsize = (2*size) - 1;
  int *list2 = new int[addsize];
  //int list2 = list2[addsize];
  for (int h = 0; h < size; h++)
    {
      list2[h] = list[h];
      list2[size + h] = list[size - (h + 1)] + list[size - (h + 2)];
    }
  return list2;
}
