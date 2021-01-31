#include <iostream>
#include <array>

using namespace std;

int main()
{
  int myArray[10]; //creating an array with size 10
  for (int i = 0; i < 10; ++i) //running a for loop 10 times to initalize all 10 elements of the array
  {
    cout << "Please type a value to input in the array: ";
    cin >> myArray[i]; //input the current value at each new position
  }
  for (int i = 0; i < 10; ++i) //running another for loop 10 times
  {
    cout << myArray[i] << " "; //printing out the contents one by one
  }
  cout << endl;
}
