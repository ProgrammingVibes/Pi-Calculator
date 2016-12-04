/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Vaibhav Ariyur
 *
 * Created on September 12, 2016, 2:26 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
//the following program calculates the value of pi to the nth term
int main(int argc, char** argv) {
    //initialize variables to hold the sum of values in pi formula, and a
    //variable which holds a +/- 1 value depending on whether the current term is odd/even
    //respectively.
    double piSum=0;
    int negOne=-1;
    int n;
    while(1){
        printf("put in the number of terms 'n' you want to calculate pi: \n");
        fflush(stdout);
        scanf("%d",&n);
        if(n>0){
            break;
        }
    }
    for(int i=1;i<=n;i++){
        for(int p=1;p<=i;p++){
            negOne=negOne*-1;
        }
        piSum=piSum+(4.0/(2*i-1))*negOne;
        negOne=-1;
    }
    printf("the value of pi at n=%d is %f",n,piSum);

    return 0;
}

