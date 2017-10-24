#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <string> Census;

void Census2017(){
  // Census.push_back("Name @ GitHub link");
  Census.push_back("Allen Comp Sci @ https://github.com/AllenCompSci");
  Census.push_back("Mr. Hudson @ https://github.com/theshrewedshrew");
  Census.push_back("BEST Team 58 @ https://github.com/BESTTeam58");
  Census.push_back("TexasSnow @ https://github.com/TexasSnow");
  Census.push_back("hotdogshabab @ https://github.com/hotdogshabab");
  Census.push_back("alansunglee @ https://github.com/alansunglee");
  Census.push_back("Rahultheman12 @ https://github.com/Rahultheman12");
  Census.push_back("spicyboi @ https://github.com/spicyboi");
  Census.push_back("John Nguyen @ https://github.com/jawnlovesfreestuff");
  Census.push_back("CodeTimesTen @ https://github.com/CodeTimesTen");
  Census.push_back("YourFriendlyNeighborhoodSpiderman @ https://github.com/YourFriendlyNeighborhoodSpiderman");
  Census.push_back("Devin Petersen @ https://github.com/DevinPetersen");
  Census.push_back("Cameron Mathis @ https://github.com/Phylux");
  Census.push_back("Samuel Woon @ https://github.com/samuel-w")


}
void printCensus(){
  for(int i = 0; i < (int)Census.size(); i++){
    cout << "Hello World from "Your name" + Census[i] << "\n";

  }
}
//test
void main(){
  Census2017();
  printCensus();
}
