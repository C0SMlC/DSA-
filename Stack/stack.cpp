#include <bits/stdc++.h>
using namespace std ;
class stack
{
   int *data;
   int nextindex;
   int capacity;

   stack()
   {
       data = new int[5];
       nextindex = 0;
       capacity = 5;
   }

   void push(int element)
   {
       if (nextindex == capacity )
       {
           int *newdata = new int[capacity*2];
           for (int i = 0; i < nextindex; i++)
           {
               newdata[i] =data[i];
           }
           delete [] data;
           data = newdata;
           capacity*=2;
       }
       data[nextindex] = element;
       nextindex++;
   }

};
int main()
{

return 0;
}