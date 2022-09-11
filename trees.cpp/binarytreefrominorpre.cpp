/* it is nlot possible to form a unique binary tree with only post and pre
case 1: 
 
    1 
   / 
  2 
 / 
3 
preorder:  1 2 3 
postorder: 3 2 1 
----------------------- 
case 2: 
 
 1 
  \ 
   2 
    \ 
     3 
preorder:  1 2 3 
postorder: 3 2 1 
 
in both cases above preorder and postorder is same, so we can't construct tree with  
preorder and postoder.  
we must need inorder + preorder or inorder + postorder. 
 
so, without inorder ,we can't draw binary tree. 
 */