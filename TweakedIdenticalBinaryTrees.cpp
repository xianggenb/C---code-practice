//class TreeNode {
// public:
//  int value;
//  TreeNode* left;
//  TreeNode* right;
//  TreeNode(int v) : value(v), left(NULL), right(NULL) {}
//};
class Solution {
 public:
  bool isTweakedIdentical(TreeNode* one, TreeNode* two) {
    // write your solution here
    if( !one && !two) { return true; }
    else if ( !one || !two ) { return false; }
    else if ( one-> value != two->value) {  return false; }
    
    return ( isTweakedIdentical(one->left, two->left) &&
           isTweakedIdentical(one->right, two->right) ) ||
            ( isTweakedIdentical(one->right, two->left) &&
              isTweakedIdentical(one->left, two->right) );
  }
};
