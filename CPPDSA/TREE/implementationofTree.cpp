#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *RightNode;
    Node *leftnode;

    Node(int value)
    {
        this->data = value;
        this->RightNode = nullptr;
        this->leftnode = nullptr;
    }
};

class Treeimplimentation
{
public:
    Node *treeCreation(Node *root)
    {
        cout << "Enter data ";
        int data;
        cin >> data;
        root = new Node(data);

        if (data == -1)
        {
            return nullptr;
        }

        cout << "Enter data in left of the root ";
        root->leftnode = treeCreation(root->leftnode);

        cout << "Enter data in right of the root  ";
        root->RightNode = treeCreation(root->RightNode);
        return root;
    }
    void TreeTraversal(Node *root)
    {
        if (root == nullptr)
        {
            return;
        }
        cout << root->data << " ";
        TreeTraversal(root->leftnode);
        TreeTraversal(root->RightNode);
    }

    void DeleteRoot (Node*root ) {
        if ( root == nullptr ) return ;
        DeleteRoot( root->leftnode) ;
        DeleteRoot(root->RightNode) ;
        delete root  ; 
    }
};
int main()
{
    Node *root = nullptr;
    Treeimplimentation T;
    root = T.treeCreation(root);
    T.TreeTraversal(root);
    T.DeleteRoot(root) ;
    return 0;
}