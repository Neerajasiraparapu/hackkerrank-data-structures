int getHeight(struct node* root) {
    // Write your code here
    int leftheight,rightheight;
    if(root==NULL)
    return -1;
    else
    {
      leftheight = getHeight(root->left);
      rightheight = getHeight(root->right);
      if(leftheight > rightheight)
      return (leftheight+1);
      else
         return (rightheight+1);
    }
    
}
