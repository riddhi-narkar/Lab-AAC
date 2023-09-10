#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->data = value;
        this->left = this->right = NULL;
    }
};

struct node *solve(Node *root, int p, int q, int p_arr[5], int q_arr[5])
{
    if(root->data != p)
    {
        // root = root->left;
        if ((root->left->left == NULL && root->left->right == NULL))  //|| (root->right->left == NULL && root->right->right == NULL))
        {


        }
            struct node *solve(Node * root, int p, int q, int p_arr[5], int q_arr[5]);
    }

    else
    {

    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Node *root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);

    root->left->left = new Node(6);
    root->left->right = new Node(2);
    root->right->left = new Node(0);
    root->right->right = new Node(8);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(4);

    int p, q;
    cin >> p >> q;
    int p_arr[5];
    int q_arr[5];

    //________________________________________________________________

    if(root->data == p || root->data == q)
        cout << "the answer is " << root->data << endl;

    else
        struct node* solve(Node* root, int p, int q, int p_arr[5], int q_arr[5]);

    return 0;
}