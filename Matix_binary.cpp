class Solution {
 public:
  vector<int> search(vector<vector<int>> matrix, int target) {
    // write your solution here
 
    vector<int> result;
    int row_num=matrix.size();
    int col_num=matrix[0].size();
    int start=0;
    int end=row_num*col_num-1;
    while(start<=end){
    int mid=start+(end-start)/2;
    if(conv(matrix, mid, col_num)==target){
       result.push_back(mid/col_num);
       result.push_back(mid%col_num);
      return result;
    }
     else if (conv(matrix, mid, col_num)>target){
     end=mid-1;
     }
      else{
      start=mid+1;
      }
    }
    result.push_back(-1);
    result.push_back(-1);
    return result;
  }
  
  int conv(vector<vector<int>> matrix, int index,  int col){
    int r=index/col;
    int c=index%col;
    return matrix[r][c];
  }
};
