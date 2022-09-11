
/* recursive approach(it is similiar to preorder traversal)
void printleft(node*root,int level=1){
    if(root==NULL)
    return ;
    if(mx<level){
        cout<<root->data<<" ";
        mx=level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);
     }*/

/* iterative approach
void printleft(node*root){
    queue<node*>q;
     q.push(root);
     while(!q.empty()){
         int k=q.size();
         for(int i=1;i<=k;i++){
         node*curr=q.front();
         q.pop(); 
         if(i==1)
         cout<<curr->data<<" ";
         if(curr->left!=NULL)
         q.push(curr->left);
         if(curr->right!=NULL)
         q.push(curr->right);
          
     }
     }}*/