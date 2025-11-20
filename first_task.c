/* Task description:


We can get any element of an arithmetic sequence (arithmetic progression) by adding the common difference to the previous element:

an = an-1 + d

Considering the sequence as a function, realize a recursive function than returns the nth element of the sequence! The parameters of the function are: arithmetig_seq(n, start, diff), the sequence number of the required element, the starting value and the difference. What shall be the base case for this recursion?

Realize a similar (recursive) function that returns the nth element of a geometric sequence. The definition is very similar to AP but a quotient is given and multiple instaed of add:

bn = bn-1 · q

Complete the program to print the first 10 elements of the sequences! For arithmetic, the base case is 1 and it is increasing by 5, for geometric sequence the first element is 2 and the multiplication factor is 2.

    1     6     11    16    21    26    31    36    41    46 
    2     4     8     16    32    64   128   256   512  1024 



*/


#include <stdio.h>

int arithmetic(int n, int start, int diff){
  if(n == 1)
    return start;
  else
    return diff+arithmetic(n-1,start,diff);
}

int geometric(int n, int start, int diff){
  if(n == 1)
    return start;
  else
    return diff*geometric(n-1,start,diff);
}

int main(){
  for(int i = 1; i<11; i++){
    printf("%d\t", arithmetic(i,1,5));
  }
  printf("\n");
  for(int n = 1; n<11; n++){
    printf("%d\t", geometric(n,2,2));
  }

  return 0;
}
