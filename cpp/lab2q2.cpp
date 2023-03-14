#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  if(x>9 || x<3){
    cout<<"Invalid input";
    return 0;
  }
  for (int i=1;i<x+1;i++){
    std::string a(i, '*');
    cout<<a<<endl;
  }
  for (int i=x-1;i>0;i=i-1){
    std::string a(i, '*');
    cout<<a<<endl;
  }
  //for j in range(int(a)-1,0,-1):
    //print(j * "*")


  return 0;
}
