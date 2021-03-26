/* Fibonacci Search
 * 2021-3-36 
 * Jia Qiang
 * Description:This is a test class for Fibonacci Search.
 * Fibonacci Array is defined as follow:
 *              0            when n==0;
 * F(n)=        1            when n==1;
 *        F(n=1)+F(n-2)      else               
 * */
#include<iostream>

class FibSearch()
{
  private:
  
  public:
  vector<int>* generateFibArray(int n);  //Generate Fibonacci Array
  int find(vector<int>*);                //search
};
