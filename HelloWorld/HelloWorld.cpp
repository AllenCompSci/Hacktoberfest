#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> Census;

void Census2017() {
  /*
   * Add yourself using the following format:
   *    Census.push_back("Your Name @ https://github.com/username");
   */
   
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
  Census.push_back("Samuel Woon @ https://github.com/samuel-w");
  Census.push_back("JustinV10 @ https://github.com/JustinV10");
  Census.push_back("Kyleaustin36 @ https://github.com/kyleaustin36");
  Census.push_back("Maaz Kamal @ https://github.com/Maze-Camel");
  Census.push_back("bingood4ever @ https://github.com/bingood4ever");
  Census.push_back("Gainz101 @ https://github.com/Gainz101");
  Census.push_back("zachdogg @ https://github.com/Zachdogg1");
  Census.push_back("PJHudson618 @ https://github.com/PJHudson618");
  Census.push_back("Abhi1458 @ https://github.com/Abhi1458");
  Census.push_back("Maxwell Cody @ https://github.com/MaxwellCody");
}

int main() {
  Census2017();

  for(int i = 0; i < (int) Census.size(); ++i) {
    cout << "Hello World from " << Census[i] << endl;
  }

  return 0;
}
