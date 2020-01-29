/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edd.tarea1_201213487;

import java.util.Scanner;

/**
 *
 * @author Vania
 */
public class EDDTarea1_201213487 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("EDD - Tarea 1");
        System.out.print("Ingresar M: ");
        int m = sc.nextInt();
        generarMatriz(m);
    }    
    static void generarMatriz(int m){
        int matriz[][] = new int[m][m];
        for(int x = 0; x<m; x++){
            for(int y = 0; y<m; y++){
                if(x==0 || x == m-1 || y == 0 || y == m-1){
                    matriz[x][y]= 1;    
                    System.out.print(matriz[x][y]); 
                }else System.out.print(" ");
                if (y == m-1) {
                    System.out.print("\n");
                }
            }
        }
    }    
}
