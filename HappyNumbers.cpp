/*A happy number is defined by the following process. Starting with any positive integer, 
replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 
(where it will stay), or it loops endlessly in a cycle which does not include 1. 
Those numbers for which this process ends in 1 are happy numbers, 
while those that do not end in 1 are unhappy numbers.*/
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
 int intVal;
 cin >> intVal;
 stringstream ss;
    ss << intVal;
    string str = ss.str();
 
 int startVal = 0;
 int powNum = 0;
 int size = 0;
 int addNum = 0;
 
 while(size < 20 || startVal != 0){
     for (int i = 0; i < str.size(); i++){
         powNum = pow(str.at(i) - 48, 2);
         addNum += powNum;
        // cout << addNum << endl;
         
         
         
         }
          //cout << addNum << endl;
          ss.str("");
         ss << addNum;
         string str = ss.str();
         cout << str << endl;
          size++;
          addNum = 0;
     }
    // cout << addNum;
}