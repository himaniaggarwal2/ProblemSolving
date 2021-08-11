import java.io.*;
import java.util.*;

public class count_binarystrings{

public static void main(String[] args) throws Exception {
    Scanner scn=new Scanner(System.in);
    
    int n=scn.nextInt();
    
    int old_count_zeros=1;
    int old_count_ones=1;
    
    for(int i=2;i<=n;i++){
        int new_count_ones=old_count_zeros+old_count_ones;
        int new_count_zeros=old_count_ones;
        
        old_count_zeros=new_count_zeros;
        old_count_ones=new_count_ones;
    }
    
    System.out.println(old_count_zeros + old_count_ones);
    
 }

}