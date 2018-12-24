//these data structures are not part of C++ standaed library
#include <ext/pb_ds/assoc_container.hpp>
#include <cstdlib>
#include <time.h>
using namespace __gnu_pbds;
// indexed_set which is like set but can be indexed
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
int main()
{
  indexed_set s;
  srand(time(0));
  int length=rand()%10;
  for(int i=0;i<length;i++)
    s.insert(rand()%5);
  int x=rand()%5;
  for(auto x:s)
    cout<<x <<',';
  cout<<"\b \n";
  cout<<"Program selected x to be="<<x <<endl;
  if(s.find_by_order(s.order_of_key(x))==x)
    cout<<"Element found at " <<s.order_of_key(x)<<endl;
  else
    cout<<"Position of element is" <<s.order_of_key(x)<<endl
  //PS doesnt work with g++  
}
