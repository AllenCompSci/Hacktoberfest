import java.io.*;
import java.util.*;
class HelloWorld{
    private static ArrayList<String> Census;
    private static void CensusTaker(){
        Census = new ArrayList<String>();
        // Census.add("NAME @ github link");
        Census.add("Allen Comp Sci @ https://github.com/AllenCompSci");
        Census.add("Mr. Hudson @ https://github.com/theshrewedshrew");
        Census.add("Mr. Swagalishish @ https://github.com/theshrewedshrew");
        Census.add("BEST Team 58 @ https://github.com/BESTTeam58");
        Census.add("Texas Snow @ https://github.com/TexasSnow");
        Census.add("Rahultheman12 @ https://github.com/Rahultheman12");
        Census.add("John Nguyen @ https://github.com/jawnlovesfreestuff");
        Census.add("Carson Mires @ https://github.com/carsonmires");
        Census.add("Cameron Mathis @ https://github.com/Phylux");
        Census.add("YourFriendlyNeighborhoodSpiderman @ https://github.com/YourFriendlyNeighborhoodSpiderman");
        Census.add("Devin Petersen @ https://github.com/DevinPetersen");
        Census.add("Kaushik Malapati@ https://github.com/KaushikMalapati")
        Census.add("Kyleaustin36 @ https://github.com/kyleaustin36"); 
        Census.add("Zak Ishak @ https://github.com/zakishak"); // Tried to delete other users as a pull request
        Census.add("Maaz Kamal @ https://github.com/Maze-Camel")
        Census.add("Justin Van Nimwegen @ https://github.com/JustinV10");
        Census.add("bingood4ever @ https://github.com/bingood4ever");
        Census.add("Gainz101 @ https://github.com/Gainz101");
        Census.add("zachdogg @ https://github.com/Zachdogg1");
        Census.add("Johnathan G. @ https://github.com/SodaCan0515");



    }
   
    public static void main(String args[]){

      CensusTaker();
      for(String list : Census){
          System.out.println("Hello World from " + list);      
      }
    }
}

