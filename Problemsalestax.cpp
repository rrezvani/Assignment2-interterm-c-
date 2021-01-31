#include <iostream>

using namespace std;

float addTax(float taxRate, float cost)
{
  return (taxRate/100) + cost; //equation to find the actual taxRate given as a percentage 
}
