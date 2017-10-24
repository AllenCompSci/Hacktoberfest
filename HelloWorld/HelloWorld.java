import java.io.*;
import java.util.*;

class HelloWorld{
    private static ArrayList<String> Census;
    //get free shirt
    private static void CensusTaker(){
        Census = new ArrayList<String>();
        // Census.add("NAME @ github link");
        Census.add("Allen Comp Sci @ https://github.com/AllenCompSci");
        Census.add("Mr. Hudson @ https://github.com/theshrewedshrew");
        Census.add("BEST Team 58 @ https://github.com/BESTTeam58");
        Census.add("Texas Snow @ https://github.com/TexasSnow");
        Census.add("Rahultheman12 @ https://github.com/Rahultheman12");
        Census.add("John Nguyen @ https://github.com/jawnlovesfreestuff");
        Census.add("Carson Mires @ https://github.com/carsonmires");
    }
    
    public static void main(String args[]){
      CensusTaker();
      for(String list : Census){
          System.out.println("Hello World from " + list);      
      }
    }

}
