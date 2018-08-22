// class UnknownSizeVector {
//  public:
//   int get(int index) {
//     // Return INT_MIN if out of bound,
//     // otherwise return the element value.
//   }
// }

class Solution {
 public:
  int solve(UnknownSizeVector input, int target) {
    int scaling_index=1;
    while(input.get(scaling_index)>INT_MIN){
      scaling_index=scaling_index*2;
    }
    int left=0;
    int right=scaling_index;
    while(left<=right){
      int mid=left+(right-left)/2;
    if(input.get(mid)==INT_MIN){
      right=mid-1;
    }
      else if (input.get(mid)==target){
      return mid;
      }
     else if (input.get(mid)>target){
     right=mid-1;
     }
     else{
     left=mid+1;
     }
    }
    return -1;;
  }
};
