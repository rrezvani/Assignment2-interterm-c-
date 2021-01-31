#include <iostream>
#include <string>

using namespace std;

void GetOutput(double meters, double centimeters) //function to output the meters and centimeters once it is computed
{
  cout << "Your item is " << meters << " meters and " << centimeters << " centimeters long!" << endl;
}

void Calculation(double feet, double inches) //function that calculates the meters and centimeters
{
  double metLength = (feet + (inches/12)) * 0.3048; //equation to find the total number of feet, then multiply to find the meters
  int newLength = metLength; //doing this to find meters as a whole number
  double centLength = (metLength - newLength) * 100; //equation to find the decimal values of the meter, then multiplying by 100
  GetOutput(newLength, centLength); //calling the function to output
}

void GetInput()
{
  double userFeet;
  double userInches;

  cout << "Please input the number of feet: ";
  cin >> userFeet; //storing user input in userFeet

  cout << "Please input the number of inches: ";
  cin >> userInches; //storing user input in userInches

  Calculation(userFeet, userInches); //calling our calcluation method with the numbers we just got from the user
}

int main(int argc, char** argv)
{
  bool keepGoing = true; //creating a boolean for our while loop

  GetInput(); //running our code at least once

  while (keepGoing) //while loop will run until keepGoing is false
  {
    string userString;
    cout << "Would you like to go again? Type 'exit' if you would like to quit, or anything else to continue: ";
    cin >> userString;

    if (userString == "exit") //if the user types exit, the code will stop running
    {
      keepGoing = false;
    }
    else //if the user types anything other than exit, the code will run again
    {
      GetInput();
    }
  }
}
