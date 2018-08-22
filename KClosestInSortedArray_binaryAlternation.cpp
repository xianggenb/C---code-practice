class Solution {
 public:
  vector<int> kClosest(vector<int> array, int target, int k) {
   
    int start=0;
    int end=array.size()-1;
    int backtrack=-1;
   while(start<end-1){
   int mid=start+(end-start)/2;
     if(array[mid]==target){
      backtrack=mid;
     }
     else if (array[mid]<target){
    start=mid;
     }
     else if (array[mid]>target){
     end=mid;
     }
   }
    if(backtrack<0)
    {
      if(abs(array[start]-target) < abs(array[end]-target))
      {
       backtrack= start;
      }
      else
      {
        backtrack=end;
      }

    }
    return setup_result(array, backtrack,k, target);
  }
  
  vector<int> setup_result(vector<int> array, int backtrack,int k, int target){
    vector<int> result;
    if(backtrack==0){
    for(int i=0;i<k;i++){
    result.push_back(array[i]);
    }
    }
    else if(backtrack==array.size()-1){
    for(int j=backtrack;j>backtrack-k;j--){
    result.push_back(array[j]);
    }
    }
    else
    {
      result.push_back(array[backtrack]);
     int  left=backtrack-1;
     int  right=backtrack+1;
      while(k>1){
       if(left<0)
       {
        result.push_back(array[right]);
        right++;
       }
       else if(right>array.size()-1)
       {
        result.push_back(array[left]);
        left--;
       }
       else
       {
        if(abs(array[left]-target)<=abs(array[right]-target))
         {
         result.push_back(array[left]);
           left--;
         }
         else
         {
         result.push_back(array[right]);
           right++;
         }
        
      }
       k--;
      }
    }
    return result;
   }
  
};
