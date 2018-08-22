class Solution {
 public:
  vector<int> rainbowSort(vector<int> array) {
    // write your solution here

    if(array.size()==0){
    return array;
    }
    int i=0;
    int j=0;
    int k=array.size()-1;
   while(j<=k){
     if(array[j]==-1)
     { 
       swap(array[i],array[j]);
       i++;
       j++;
     }
     else if (array[j]==0)
     {
       j++;
     }
     else
     {
     swap(array[j],array[k]);
       k--;
     }
   }
  
    return array;
    
  }
  void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
  }
};
