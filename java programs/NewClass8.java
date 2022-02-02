
package javaapplication207;

import java.util.Scanner;

/**
 *
 * @author Tectonic
 */
public class NewClass8 {
    public static void main(String[] args) {
        Scanner ob = new Scanner (System.in);
        int a ;
        System.out.println("Enter the number :");
        a = ob .nextInt();
        if (a%2==0){
            System.out.println("Number is even ");
            
        }else {
            System.out.println("Number is odd ");
        }
            
    }
    
}
