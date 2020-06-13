/* 
Create a Singly Linked list class (members-> value and next pointer),
with the following methods:
 createNewNode()
 unshift() // adds node at begin
 push() // adds node at end
 length()
 print()
[Follow: https://www.geeksforgeeks.org/linked-list-set-1-introduction/ 
*/
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
    int value;
    Node *next;
};

class CircularLinkedList
{
public:
    void print()
    {
        if (!head)
        {
            return;
        }
        cout << endl;
        auto temp = head;
        while (temp->next != head)
        {
            cout << temp->value << ' ';
            temp = temp->next;
        }
        cout << temp->value;
        cout << endl;
    }

    Node *createNewNode(int val)
    {
        return new Node(val);
    }

    void unshift(int val)
    {
        auto newnode = createNewNode(val);
        size = size + 1;
        if (!head)
        {
            head = newnode;
            head->next = head;
            end = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
        end->next = head;
    }

    bool search(int val)
    {
        if (!head)
            return false;
        auto temp = head;
        bool found = false;
        while (temp->next != head)
        {
            if (temp->value == val)
            {
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (temp->value == val)
            return true;
        return found;
    }

    Node *findNthNode(int n)
    {
        // 1 BASED INDEX
        if (n > length() && !head)
        {
            return nullptr;
        }
        auto temp = head;
        int count = 1;
        while (count < n)
        {
            temp = temp->next;
            count++;
        }

        return temp;
    }

    bool remove(int val)
    {
        if (!head)
        {
            return false;
        }
        auto temp = head;
        auto pre_ptr = head;
        while (temp->next != head)
        {
            if (temp->value == val)
            {
                break;
            }
            pre_ptr = temp;
            temp = temp->next;
        }

        if (temp->next == head && temp->value != val)
        {
            return false;
        }

        if (temp == head)
        {
            if (head == end)
            {
                head = nullptr;
                end = nullptr;
                size = size - 1;
                return true;
            }

            head = head->next;
            end->next = head;
        }
        if (temp == end)
        {
            pre_ptr->next = nullptr;
            end = pre_ptr;
            end->next = head;
            size = size - 1;
            return true;
        }

        pre_ptr->next = temp->next;
        temp = nullptr;
        size = size - 1;
        return true;
    }

    int findValueCount(int val)
    {
        if (!head)
        {
            return 0;
        }
        int count{0};
        auto temp = head;
        while (temp->next != head)
        {
            if (temp->value == val)
            {
                count++;
            }
            temp = temp->next;
        }
        if (temp->value == val)
            count++;
        return count;
    }

    void push(int val)
    {
        auto newnode = createNewNode(val);
        size = size + 1;
        if (!head)
        {
            head = newnode;
            head->next = head;
            end = newnode;
            return;
        }
        end->next = newnode;
        end = newnode;
        end->next = head;
    }

    int length()
    {
        return size;
    }

    pair<int, int> min_max()
    {
        pair<int, int> values(INT_MAX, INT_MIN);
        if (!head)
        {
            return values;
        }

        auto temp = head;
        while (temp->next != head)
        {
            if (temp->value < values.first)
            {
                values.first = temp->value;
            }
            if (temp->value > values.second)
            {
                values.second = temp->value;
            }
            temp = temp->next;
        }

        if (temp->value < values.first)
        {
            values.first = temp->value;
        }
        if (temp->value > values.second)
        {
            values.second = temp->value;
        }
        return values;
    }

private:
    Node *head = nullptr;
    Node *end = nullptr;
    int size;
};

int main()
{
    CircularLinkedList *ll = new CircularLinkedList();
    ll->unshift(10);
    ll->print();
    ll->push(29);
    ll->print();
    ll->push(30);
    ll->print();
    ll->push(45);
    ll->print();
    ll->unshift(20);
    ll->print();
    ll->unshift(10);
    ll->print();
    ll->unshift(10);
    ll->print();
    ll->unshift(10);
    ll->print();
    cout << ll->remove(20) << endl;
    ll->print();
    cout << ll->remove(45) << endl;
    ll->print();
    cout << ll->remove(29) << endl;
    ll->print();
    cout << ll->remove(90) << endl;
    ll->print();
    cout << ll->search(20) << endl;
    cout << ll->remove(10) << endl;
    ll->print();

    cout << ll->remove(10) << endl;
    ll->print();
    cout << ll->remove(10) << endl;
    ll->print();
    cout << ll->remove(10) << endl;
    ll->print();
    cout << ll->remove(30) << endl;
    ll->print();
    auto node = ll->findNthNode(2);
    if (node)
    {
        cout << node->value << endl;
    }

    cout << "Value Count : " << ll->findValueCount(45) << endl;
    cout << "Length => " << ll->length();

    auto min_max = ll->min_max();

    cout << "Min : " << min_max.first << " "
         << "Max : " << min_max.second << endl;
}