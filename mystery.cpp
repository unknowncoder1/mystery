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
  // I'm assuming this is bubble 
  cout<<endl<<"Mystery 1"<<endl<<"---------------------"<<endl;

  for ( auto i = 0 ; i < Data.size( ) ; i++)
  {
    for (auto j = 0 ; j < i ; j++)
  if ( Data[ i ] < Data[ j ] )
      swap( Data[ i ] , Data[ j ] );

    print (Data);
  }//end outer for (this brace is needed to include the print statement)

}
void mystery2(vector<int> Data2) 
{
//seletion sort 
  cout<<endl<<"Mystery 2"<<endl<<"---------------------"<<endl;
int x , j , Findex, temp;
for (x = 0; x < Data2.size() -1 ;x++)
{
  Findex = x; 

  for (j = x + 1; j < Data2.size() ; j++ )
  {
    if (Data2[j] < Data2[Findex])
    
  Findex = j;
    
  }
  if (Findex != x){
    temp =Data2[x];
      Data2[x]= Data2[Findex];
      Data2[Findex] = temp;
     print (Data2);

  }

}

}


void mystery3(vector<int> Data3)
 {
  cout<<endl<<"Mystery 3"<<endl<<"---------------------"<<endl;
   int nxt, mvItem, val;
   for (nxt = 1; nxt < Data3.size();nxt++)
   {
    val = Data3[nxt];
    mvItem = nxt;
    while (mvItem > 0 && Data3[mvItem -1 ])
    {
      Data3[mvItem] = Data3[mvItem -1 ];
      mvItem--;
    }

    Data3[mvItem] = val;
    print (Data3);
   }
}


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