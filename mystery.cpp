#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}

void mystery1(auto& D)
{
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( int i = 0 ; i < Data.size( ) ; i++)
  {
    for ( int j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print(D);
  }//end outer for (this brace is needed to include the print statement)

}

//... Other mysteries...

int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}