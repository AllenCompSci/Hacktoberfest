import java.io.*;
import java.util.*;

class HelloWorld{
    private static ArrayList<String> Census;
    
    private static void CensusTaker(){
        Census = new ArrayList<String>();
        // Census.add("NAME @ github link");
        Census.add("Allen Comp Sci @ https://github.com/AllenCompSci");
        
    }
    
    public static void main(String args[]){
      CensusTaker();
      for(String list : Census){
          System.out.println("Hello World from " + list);      
      }
    }

}
