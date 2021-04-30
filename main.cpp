#include <iostream>
using namespace std;


const int ARRAY_SIZE = 5;



int main() {
  double grades[ARRAY_SIZE] = { 25, 50, 75, 100, 0};
  double grades1[ARRAY_SIZE] = {25, 50, 78, 99, 34};
  double accumulator = 0.0;
  double average = 0.0;

for (int i = 0; i < ARRAY_SIZE; i++)
  accumulator = accumulator + grades[i];

average = accumulator / ARRAY_SIZE;

for (int i = 0; i < ARRAY_SIZE; i ++)
  if (grades[i] != grades1[i])
    cout << "The elements numbered " << i << " are not equal\n";
  else
    cout << "The elements numbered " << i << " are equal\n"; 


cout << "\nThe average of grades is " << average << endl;
cout << "The size of the array is " << ARRAY_SIZE << endl;
}