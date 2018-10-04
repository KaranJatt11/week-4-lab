#include <iostream>
#include <string>
// include the library that will allow you to convert from string to integer
#include <sstream>

int main() {
  int a,b,c,d; 
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
 std::cout <<"enter any three numbers:" <<std::endl;  // Ask the user for 3 integers as input
  std::cin >>a>>b>>c;                               // The user should enter all integers on the same line, pressing enter only once






  d=a*b*c;                 // Multiply the three integers





  std::cout <<"result of the multiplication "<<d<<std::endl;    // Output the result of the multiplication



  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
using std::cout;
using std::cin;
using std::endl;
std::string pond;
std::string frog;
std::string water;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cout<<"The name of the pond: ";
std::getline (std::cin,pond);
cout<<"The name of the frog : ";
std::getline (std::cin,frog);
cout<<"what splash splash again : ";
std::getline(std::cin,water);
cout<<"An old "<<pond<<" pond"<<endl;
cout<<"A "<<frog<<" jumps into the pond"<<endl;
cout<<" "<<water<<" splash! Silence again."<<endl;











  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
 int x;
 std::stringstream(myNumber)>>x;

  
  std::cout <<x<<" :is an integer"; //Insert the integer before the text of this output

  return 0;
}