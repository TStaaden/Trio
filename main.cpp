#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);

int main()
{
	//allows the users to enter thier variables
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;
   //calls sortDescending()
  sortDescending(numA, numB, numC);
  //prints out the numbers from greatest to least. 
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}
// sorts the order by swapping when a number is in the wrong order.
void sortDescending(int &first, int &second, int &third)
{
	//swaps when third is greater than first
  if( first < third )
  {
    swap(first,third);
  }
  //swaps when second is greater than first
  if( first < second )
  {
    swap(first,second);
  }
  // swaps when third is greater than second
  if( second < third )
  {
    swap(second,third);
  }
}

//defines the procedure for a swap 
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
