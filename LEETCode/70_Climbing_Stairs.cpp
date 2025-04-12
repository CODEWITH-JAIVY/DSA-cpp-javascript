/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps 

*/
// for the approach there is timecomplexity o(n) , spaceComplexity 0 (1)
#include<iostream>
#include<vector>
using namespace std ;

int TatalWayToclime( int  n )  {
    if ( n == 2 )  return n  ;

    int oneStepBefore  = 2  ;
    int TwostepBefore = 1 ;
    int ALLway  = 0  ; 
    for( int  i  =3  ; i  <= n  ; i ++ ) {
        ALLway = oneStepBefore +TwostepBefore  ;
        TwostepBefore = oneStepBefore  ;
        oneStepBefore = ALLway ;

    }
    return ALLway  ; 
}
int main () {
    int n  ;
    cout<<"Enter the total number  of the staits  " ;
    cin>> n  ;
    int result  =  TatalWayToclime(  n ) ;
    cout<<result  ;
    return  0 ;  
}