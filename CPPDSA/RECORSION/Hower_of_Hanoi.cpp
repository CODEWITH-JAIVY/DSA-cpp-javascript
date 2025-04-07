/*Problem statement
You are given three rods (numbered 1 to 3), and ‘N’ disks initially placed on the first rod, 
one on top of each other in increasing order of size ( the largest disk is at the bottom).
 You are supposed to move the ‘N’ disks to another rod(either rod 2 or rod 3) using the following rules 
 and in less than 2 ^ (N) moves.

1. You can only move one disk in one move. 
2. You can not place a larger disk on top of a smaller disk.
3. You can only move the disk at the top of any rod.    
Note :
You may assume that initially, the size of the ‘i’th disk from the top of the stack is equal to
 ‘i’, i.e. the disk at the bottom has size ‘N’, the disk above that has size ‘N - 1’, and so on.
  The disk at the top has size 1.*/


  #include<vector>
  #include<iostream>
  using namespace std  ;
  
  void   TowerOfHonoi( vector<int>&Source , vector<int>&Auxiliary ,  vector<int>&Desnination , int index  ) {
    //base condition 
  if ( index  < 0  ) return  ;

  TowerOfHonoi( Source , Desnination , Auxiliary , index -1  ) ;
  Desnination.push_back(Source.back() ) ;
  Source.pop_back() ;

  TowerOfHonoi (Auxiliary , Source , Desnination  , index -1  ) ;
  }

  int main() {
    vector<int>Source  ={6,5,4,3,2,1} ;
    int N = Source .size()-1 ;
    vector<int>Auxiliary ;
    vector<int>Desnination ;

    for(int val : Source   ) {
        cout<< val << " "  << endl   ; 
    }
    
    TowerOfHonoi( Source ,  Auxiliary  , Desnination  , N ) ;
    cout<< " Source rod only for the set purpouce " ;
  
    cout<<"THE destination rod Element is " << endl ;

    for(int val : Desnination  ) {
        cout<< val << " "  << endl    ; 
    }
    return 0 ; 
  }