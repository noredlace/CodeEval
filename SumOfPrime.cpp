#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i = 2;
  int size = 0;
  int total = 0;
  
  while (size < 1000){
      bool isPrime = true;
      for (int numStart = 2; numStart < i; numStart++){
          if (i % numStart == 0){
              isPrime = false;
          }
}
      if (isPrime){
        total += i;
         size++;
        cout << i << endl;
      i++;
      }
      else {
          i++;
      }
  }
   cout << total << endl;
   cout << size << endl;
   
}