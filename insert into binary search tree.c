SearchTree Insert(int X,searchTree T)
{
if(T==NULL)//First element is placed in the root.
{
T=malloc(size of(Struct TreeNode));
if(T!=NULL)
{
T->Element=X;
T->left   =NULL;
T->Right  =NULL;
}
}
else
if(X<T->Element)
T->left=Insert(X,T->left);
else
if(X>T->Element)
T->Right=Insert(X,T->Right);
//Else is in the tree already.
return T;
}
