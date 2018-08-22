class Solution {
 public:
  vector<int> mergeSort(vector<int> array) {
    // write your solution here
    vector<int> temp=array;
    if(temp.empty()){return temp;}
    int left=0;
    int right=array.size()-1;
    return mergesort(array, 0,array.size()-1);
    
  }
  vector<int> mergesort(vector<int> & arr, int left, int right){
    vector<int> result;
  if(left==right){
     result.push_back(arr[left]);
    return result;
  }
    int mid=left+(right-left)/2;
    vector<int> left_result=mergesort(arr, left,mid);
    vector<int> right_result=mergesort(arr, mid+1,right);
    
    result=combine_vector(left_result,right_result);
    return result;
  
  }
  vector<int> combine_vector(vector<int> left,vector<int> right)
  {
    vector<int> result;
    if(left.size()==0){
    return right;
    }
    else if (right.size()==0){
    return left;
    }
    else if(right.size()==0 && right.size()==0){
      return result;
    }
    else
    {
      int i=0;
      int j=0;
    while(i<=left.size()-1 || j<=right.size()-1){
     if(i>left.size()-1 && j<=right.size()-1)
      {
       result.push_back(right[j]);
       j++;
      }
      else if (i<=left.size()-1 && j>right.size()-1)
      {
      result.push_back(left[i]);
        i++;
      }
      else
      {
        if(left[i]<=right[j])
        {
        result.push_back(left[i]);
          i++;
        }
        else
        {
        result.push_back(right[j]);
          j++;
        }
     }
    }
    
    }

  return result;
  }
};
