/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
//package javaapplication1;
import java.util.Scanner;
/**
 *
 * @author ahmed
 */
public class JavaApplication1 {
    /**
     * @param args the command line arguments
     */
             static Scanner in = new Scanner(System.in);
 
             
    public static void main(String[] args) {
      // int  k,n,w,result=0,m ;
     int  k=in.nextInt();
     int  n=in.nextInt();
     int  w=in.nextInt();
     int m=k;
     int result = 0;
       for(int i=0;i<w;i++){
      k*=(i+1);
   if(n>=k){
      n=n-k;
   k=m;
    }
    else if(k>n){
      result+=(k-n);
      k=m;
      n=0;
    }
  }
    
        System.out.println(result);
        // TODO code application logic here
    }
    
}