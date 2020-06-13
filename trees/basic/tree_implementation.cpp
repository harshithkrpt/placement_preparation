#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    TreeNode(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
    int data;
    TreeNode *left;
    TreeNode *right;
};

class Tree
{
public:
    int max()
    {
        int num = INT_MIN;
        maxRec(root, num);
        return num;
    }

    int min()
    {
        int num = INT_MAX;
        minRec(root, num);
        return num;
    }

    void inorder()
    {
        // inorderRec(root);
        inorderIter();
    }

    void preorder()
    {
        // preorderRec(root);
        preorderIter();
    }

    void postorder()
    {
        // postorderRec(root);
        postorderIter();
    }

    void levelOrder()
    {
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            TreeNode *t = q.front();
            q.pop();

            cout << t->data << ' ';

            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
    }

    bool search(int key)
    {
        return preorderRec(root, key);
    }

    void rLevelOrder()
    {
        queue<TreeNode *> q;
        stack<int> s;
        q.push(root);
        // s.push(root->data);
        while (!q.empty())
        {
            TreeNode *t = q.front();
            q.pop();
            s.push(t->data);
            if (t->right)
                q.push(t->right);

            if (t->left)
                q.push(t->left);
        }

        while (!s.empty())
        {
            cout << s.top() << ' ';
            s.pop();
        }
    }

    void mirror()
    {
        // mirrorIter();
        mirrorRec(root);
    }

    int maxDepth()
    {
        return maxDepth(root);
    }

    TreeNode *createNode(int data)
    {
        return new TreeNode(data);
    }
    void insert(int data)
    {
        auto newnode = createNode(data);
        if (!root)
        {
            root = newnode;
            return;
        }
        queue<TreeNode *> q;

        q.push(root);

        while (!q.empty())
        {
            auto ret_node = q.front();
            q.pop();

            if (!ret_node->left)
            {
                ret_node->left = newnode;
                return;
            }
            else
                q.push(ret_node->left);

            if (!ret_node->right)
            {
                ret_node->right = newnode;
                return;
            }
            else
                q.push(ret_node->right);
        }
    }

    // Funtion Implementation Level Order Traversal and checks
    // for node to delete and deeepest and rightmost node
    void deletion(int key)
    {
        if (root == NULL)
            return;

        if (!root->left && !root->right)
            if (root->data == key)
                root = nullptr;
        TreeNode *temp = nullptr;
        TreeNode *key_node = nullptr;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            temp = q.front();
            q.pop();

            if (temp->data == key)
            {
                key_node = temp;
            }
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }

        if (key_node)
        {
            int x = temp->data;
            deleteDeepest(temp);
            key_node->data = x;
        }
    }

private:
    void maxRec(TreeNode *n, int &max)
    {
        if (!n)
            return;
        else
        {
            if (n->data > max)
            {
                max = n->data;
            }

            maxRec(n->left, max);
            maxRec(n->right, max);
        }
    }

    void minRec(TreeNode *n, int &min)
    {
        if (!n)
            return;
        else
        {
            if (n->data < min)
            {
                min = n->data;
            }

            minRec(n->left, min);
            minRec(n->right, min);
        }
    }

    void mirrorRec(TreeNode *n)
    {
        if (!n)
            return;

        TreeNode *temp;
        mirrorRec(n->left);
        mirrorRec(n->right);

        temp = n->left;
        n->left = n->right;
        n->right = temp;
    }

    void mirrorIter()
    {
        if (!root)
            return;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            TreeNode *t2;

            if (temp->left)
            {

                q.push(temp->left);
                t2 = temp->left;
                temp->left = temp->right;
            }

            if (temp->right)
            {
                q.push(temp->right);
                temp->right = t2;
            }

            t2 = nullptr;
        }
    }
    void inorderRec(TreeNode *temp)
    {
        if (!temp)
            return;

        inorderRec(temp->left);
        cout << temp->data << " ";
        inorderRec(temp->right);
    }

    void preorderRec(TreeNode *temp)
    {
        if (!temp)
            return;

        cout << temp->data << " ";
        preorderRec(temp->left);
        preorderRec(temp->right);
    }

    bool preorderRec(TreeNode *temp, int key)
    {
        if (!temp)
            return false;

        if (temp->data == key)
            return true;

        bool res1 = preorderRec(temp->left, key);
        if (res1)
            return true;
        bool res2 = preorderRec(temp->right, key);

        return res2;
    }

    void postorderRec(TreeNode *temp)
    {
        if (!temp)
            return;

        postorderRec(temp->left);
        postorderRec(temp->right);
        cout << temp->data << " ";
    }

    void inorderIter()
    {
        if (!root)
            return;
        stack<TreeNode *> s;
        TreeNode *curr = root;

        while (curr || !s.empty())
        {
            while (curr)
            {
                s.push(curr);
                curr = curr->left;
            }

            curr = s.top();
            s.pop();

            cout << curr->data << ' ';

            curr = curr->right;
        }
    }

    void preorderIter()
    {
        if (!root)
            return;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            auto temp = s.top();
            s.pop();
            cout << temp->data << ' ';

            if (temp->right)
                s.push(temp->right);
            if (temp->left)
                s.push(temp->left);
        }
    }

    void postorderIter()
    {
        if (!root)
            return;
        stack<TreeNode *> s;
        stack<int> rev_post_order;
        s.push(root);
        while (!s.empty())
        {
            auto temp = s.top();
            s.pop();

            rev_post_order.push(temp->data);

            if (temp->left)
                s.push(temp->left);
            if (temp->right)
                s.push(temp->right);
        }

        while (!rev_post_order.empty())
        {

            cout << rev_post_order.top() << ' ';
            rev_post_order.pop();
        }
    }

    void deleteDeepest(TreeNode *d_node)
    {
        if (!root)
            return;
        queue<TreeNode *> q;
        TreeNode *temp;
        q.push(root);
        while (!q.empty())
        {
            temp = q.front();
            q.pop();

            if (temp == d_node)
            {
                temp = nullptr;
                delete (d_node);
                return;
            }

            if (temp->right)
            {
                if (temp->right == d_node)
                {
                    temp->right = nullptr;
                    delete (d_node);
                    return;
                }
                else
                    q.push(temp->right);
            }

            if (temp->left)
            {
                if (temp->left == d_node)
                {
                    temp->left = nullptr;
                    delete (d_node);
                    return;
                }
                else
                    q.push(temp->left);
            }
        }
    }

    // TODO DIAMETER OF TREE
    // TODO BALANCED OR NOT

    int maxDepth(TreeNode *n)
    {
        if (!n)
            return 0;
        else
        {
            int l_depth = maxDepth(n->left);
            int r_depth = maxDepth(n->right);

            if (l_depth > r_depth)
                return l_depth + 1;
            else
                return r_depth + 1;
        }
    }

    TreeNode *root;
};

int main()
{
    auto tree = new Tree();
    tree->insert(1);
    tree->insert(2);
    tree->insert(3);
    tree->insert(4);
    tree->insert(5);

    cout << "Inorder : ";
    tree->inorder();
    cout << endl;

    cout << "Preorder : ";
    tree->preorder();
    cout << endl;

    cout << "Level Order : ";
    tree->levelOrder();
    cout << endl;

    cout << "Postorder : ";
    tree->postorder();
    cout << endl;

    cout << "Level Order Reverse : ";
    tree->rLevelOrder();
    cout << endl;

    cout << "Search For 5 : ";
    cout << tree->search(5);
    cout << endl;

    tree->mirror();
    cout << "Inorder Mirror : ";
    tree->inorder();
    cout << endl;

    cout << "Height of the Tree is : " << tree->maxDepth();
    cout << endl;

    cout << "Maximum : " << tree->max();
    cout << endl;

    cout << "Minimum : " << tree->min();
    cout << endl;

    tree->deletion(10);
    cout << endl;

    tree->inorder();
    cout << endl;
    return 0;
}