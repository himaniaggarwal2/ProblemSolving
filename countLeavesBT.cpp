// https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1/?company[]=Samsung&company[]=Samsung&page=1&query=company[]Samsungpage1company[]Samsung

void func(Node* root,int &count){
    if(root==NULL) return;
    if(root->left == NULL and root->right == NULL ){
        count++;
    }
    else{
        func(root->left,count);
        func(root->right,count);
    }
}
int countLeaves(Node* root)
{
    int count=0;
    func(root,count);
    return count;
}