#include <iostream> //needed

int main()
{
  //'using' can be used to shorten the need to write std::*
  using namespace std;
  
  // w/o 'using namespace' => std::cout <<
  cout << "Hello World!" << std::endl;
  cout << "Next line due to endl!";
  // cout == console out (<<)
  // cin == console in (>>)
  
  return 0;
}
//main needs to return an int since it is declared as an int, reason for return 0;
