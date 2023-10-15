import java.util.*;
import java.io.*;
import java.math.*;
import java.lang.Math;
class Solution{
    
    
    public static void Sol( int a, int b, int n){
        
         ArrayList<Integer> array = new ArrayList<Integer>();
        int suma =0;
        for(int i=0; i<n; i++){
            
            suma += Math.pow(2, i)*b;
            
            array.add(suma + a);
            
        }
        
        
        for(int j=0; j<n; j++){
            System.out.print(array.get(j) + " " );
            
        }
        System.out.println();
    }
    
    
    
    
    public static void main(String []argh){
        
        
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        
        int A =0;
        int B = 0;
        int C = 0;
        
        
        for(int i=0;i<t;i++){
             A = in.nextInt();
             B = in.nextInt();
             C = in.nextInt();
             
               Sol(A, B, C);
        }
        in.close();
        
        
        
      
        
        
        
    }
}