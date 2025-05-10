/*  Given an integer array nums, return all
 the triplets [nums[i], nums[j], nums[k]]
  such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.*/

  #include<iostream>
  #include<vector>
  #include<algorithm>
  using namespace std  ;

  class Solution  {
  public :

  vector<vector<int>> Sum3(vector<int>& arr ) {
    vector<vector<int>> result  ; 
    sort( arr.begin() , arr.end() ) ;
      int size  = arr.size() ;
    for(int i  =0  ; i< size  ; i++ ) {
     int  right  = size-1 ;
     int left  = i+1;

     if ( i > 0 && arr[i] == arr[ -1 ])  {
        continue; 
     }

     while ( left  < right ) {
        int sum  = arr[i] + arr[right] + arr[left] ;

        if( sum  ==0  ) {
           result.push_back( { arr[i] , arr[right] , arr[left]}) ;

          while ( left < right && arr[left] < arr[left+1]) left++ ;
          while( left < right && arr[right] < arr[right-1]) right-- ;

          left++ ;
          right-- ;
        }
        else if ( sum < 0) {
           left ++ ;
        }else {
            right-- ;
        }
     }
       
    }
       return result  ;  
  }

  } ;*
  int main () {
    Solution s  ;
    vector<int>arr   { -1,0,1,2,-1,-4  } ;
    vector<vector<int>>result  =  s.Sum3( arr) ;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
return 0  ; 
  }