#include <iostream>
#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a  : A) 
        cout <<a<<" ";

   cout<<endl;
}

void mystery1(vector<int> Data)
{
	
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( auto i = 0 ; i < Data.size( ) ; i++)
  {
    for (auto j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print (Data);
  }//end outer for (this brace is needed to include the print statement)

}
void mystery2(vector<int> Data) 
{
	int i, value, index;
	for (i = 0; i < a.size(); i++)
	{
		value = Data[i];
		index = i;
		while (index > 0 && Data[index - 1] > value)
		{
			Data[index] = Data[index - 1];
			index = index -1 ;
		}
		Data[index] = value;
		 print (Data);
	}
}

void mystery3(vector<int> Data) {


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
