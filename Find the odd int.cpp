//DESCRIPTION:

/*Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).
*/


#include <iostream>
#include <vector>

int findOdd(const std::vector<int>&numbers)
{
  int quantity = 0;
  for(int i = 0; i <= numbers.size() - 1; i++) 
  {
     for(int j = 0; j <= numbers.size() - 1; j++)
     {
        if(numbers[i] == numbers[j])
        {
          quantity += 1;
        }
     }
    
   if(quantity % 2 == 1) 
   {
      return numbers[i];
   }
  } 
}