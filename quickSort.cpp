class Solution {
 public:
  vector<int> quickSort(vector<int> array) {

    if(array.size()==0){
    return array;
    }
    quicksort(array, 0, array.size()-1);
    
    return array;
   }
  void quicksort(vector<int> &array, int left, int right){
    if(left>=right){return;}
    int pivot= (left+right)/2 ;
    swap(array[pivot],array[right]);
    int current_index=left;
     for(int i=left;i<right;i++){
       if(array[i]<array[right]){
         swap(array[i], array[current_index]);
         current_index++;
       }
     }
   swap(array[current_index],array[right]);
    quicksort(array,left, current_index-1);
    quicksort(array,current_index+1, right);
    
  }
  
  void swap(int &a, int &b){
    int temp=a;
        a=b;
        b=temp;
  }

};
