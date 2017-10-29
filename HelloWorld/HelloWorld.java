import java.util.*;

class HelloWorld {
  static final List<String> CENSUS = new ArrayList<String>();

  static {
    /*
     * Add yourself using the following format:
     *    CENSUS.add("Your Name @ https://github.com/username");
     */
    CENSUS.add("Allen Comp Sci @ https://github.com/AllenCompSci");
    CENSUS.add("Mr. Hudson @ https://github.com/theshrewedshrew");
    CENSUS.add("BEST Team 58 @ https://github.com/BESTTeam58");
    CENSUS.add("Texas Snow @ https://github.com/TexasSnow");
    CENSUS.add("Rahultheman12 @ https://github.com/Rahultheman12");
    CENSUS.add("John Nguyen @ https://github.com/jawnlovesfreestuff");
    CENSUS.add("Carson Mires @ https://github.com/carsonmires");
    CENSUS.add("Cameron Mathis @ https://github.com/Phylux");
    CENSUS.add("YourFriendlyNeighborhoodSpiderman @ https://github.com/YourFriendlyNeighborhoodSpiderman");
    CENSUS.add("Devin Petersen @ https://github.com/DevinPetersen");
    CENSUS.add("Kaushik Malapati@ https://github.com/KaushikMalapati");
    CENSUS.add("Kyleaustin36 @ https://github.com/kyleaustin36");
    CENSUS.add("Zak Ishak @ https://github.com/zakishak");
    CENSUS.add("Maaz Kamal @ https://github.com/Maze-Camel");
    CENSUS.add("Justin Van Nimwegen @ https://github.com/JustinV10");
    CENSUS.add("bingood4ever @ https://github.com/bingood4ever");
    CENSUS.add("Gainz101 @ https://github.com/Gainz101");
    CENSUS.add("zachdogg @ https://github.com/Zachdogg1");
    CENSUS.add("Johnathan G. @ https://github.com/SodaCan0515");
    CENSUS.add("MJHudson618 @ https://github.com/MJHudson618");
    CENSUS.add("Abhi1458 @ https://github.com/Abhi1458");
    CENSUS.add("Maxwell Cody @ https://github.com/MaxwellCody");
  }

  public static void main(String[] args) {
    for(String entry : CENSUS) {
        System.out.println("Hello World from " + entry);
    }
  }
}
