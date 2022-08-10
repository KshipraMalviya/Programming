#include <iostream>
#define SPACE 10

using namespace std;

class TreeNode
{
public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode()
    {
        value = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int v)
    {
        value = v;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    TreeNode *root;
    BST()
    {
        root = NULL;
    }
    void print2D(TreeNode *r, int space)
    {
        if (r == NULL) // Base case  1
            return;
        space += SPACE;           // Increase distance between levels   2
        print2D(r->right, space); // Process right child first 3
        cout << endl;
        for (int i = SPACE; i < space; i++) // 5
            cout << " ";                    // 5.1
        cout << r->value << "\n";           // 6
        print2D(r->left, space);            // Process left child  7
    }

    int search(int inorder[],int start,int end,int curr)
    {
        for(int x=start; x<=end; x++)
        {
            if(inorder[x]==curr)
            {
                return x;
            }
        }
        return -1;
    }

    TreeNode *buildTree(int preorder[], int inorder[], int start, int end)
    {
        int idx = 0;
        if(start>end)
        {
            return NULL;
        }
        int curr = preorder[idx];
        idx++;
        TreeNode *node = new TreeNode(curr);
        if(start==end)
        {
            return node;
        }
        int pos = search(inorder, start, end, curr);
        node->left = buildTree(preorder, inorder, start, pos - 1);
        node->right = buildTree(preorder, inorder, pos + 1, end);

        return node;
    }

    void printInorder(TreeNode *r) //  (Left, current node, Right)
    {
        if (r == NULL)
            return;
        /* first recur on left child */
        printInorder(r->left);
        /* then print the data of node */
        cout << r->value << " ";
        /* now recur on right child */
        printInorder(r->right);
    }
};

int main()
{
    BST s;

    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    //build tree
    TreeNode* r=s.buildTree(preorder,inorder,0,4);
    s.printInorder(r);

    return 0;
}