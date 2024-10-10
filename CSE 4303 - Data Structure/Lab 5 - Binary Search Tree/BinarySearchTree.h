using namespace std;

template <typename T>
class BinarySearchTree
{
public:
    class BinarySearchNode
    {
    public:
        BinarySearchNode(T const &value)
        {
            node_value = value;
            parent_node = nullptr;
            left_child = nullptr;
            right_child = nullptr;
        }; // constructor for BinarySearchNode which creates a leaf node with a value of type T but no parent or children

        T value() const
        {
            return node_value;
        }; // getter for node value

        BinarySearchNode *parent() const
        {
            return parent_node;
        }; // getter for parent pointer

        BinarySearchNode *left() const
        {
            return left_child;
        }; // getter for left_child pointer

        BinarySearchNode *right() const
        {
            return right_child;
        }; // getter for right_child pointer

        bool empty() const
        {
            return (this == nullptr);
        }; // return true if the node is null

        bool isLeaf() const
        {
            return (left_child == nullptr && right_child == nullptr);
        }; // return true if node has no children (both left and right is null), otherwise false

        bool isRoot() const
        {
            return (parent_node == nullptr);
        }; // return true if node has no parent, otherwise false.

        int size()
        {
            return 1 + (left_child == nullptr ? 0 : left_child->size()) + (right_child == nullptr ? 0 : right_child->size());
        }; // recursively calculate total number of nodes in the BST.

        int height()
        {
            return 1 + max((left_child == nullptr ? 0 : left_child->height()), (right_child == nullptr ? 0 : right_child->height()));
        }; // recursively calculate height of the BST

        T front() const
        {
            return (left_child == nullptr ? node_value : left_child->front());
        }; // find the minimum element in the BST.

        T back() const
        {
            return (right_child == nullptr ? node_value : right_child->back());
        }; // find the maximum element in the BST.

        bool find(T const &value) const
        {
            if (node_value == value)
            {
                return true;
            }
            else if (value < node_value)
            {
                return (left_child == nullptr ? false : left_child->find(value));
            }
            else
            {
                return (right_child == nullptr ? false : right_child->find(value));
            }
        }; // recursively search for a value in the BST.

        bool insert(T const &value, BinarySearchNode *parent)
        {
            if (value == node_value)
            {
                return false;
            }
            else if (value < node_value)
            {
                if (left_child == nullptr)
                {
                    left_child = new BinarySearchNode(value);
                    left_child->parent_node = parent;
                    return true;
                }
                return left_child->insert(value, left_child);
            }
            else
            {
                if (right_child == nullptr)
                {
                    right_child = new BinarySearchNode(value);
                    right_child->parent_node = parent;
                    return true;
                }
                return right_child->insert(value, right_child);
            }
        };
        // traverse to the appropriate location of the BST and create new BinarySearchNode with value of type T

    private:
        T node_value;
        BinarySearchNode *parent_node;
        BinarySearchNode *left_child;
        BinarySearchNode *right_child;
    };

    BinarySearchTree()
    {
        root_node = nullptr;
    }; // constructor for BinarySearchTree which creates an empty tree
    BinarySearchNode *root() const
    {
        return root_node;
    }; // getter for root_node pointer
    T rootValue() const
    {
        return root_node->value();
    }; // getter for root_node value
    bool empty() const
    {
        return root_node->empty();
    }; // return true if the BST has no nodes, otherwise false

    int size()
    {
        return root_node->size();
    }; // simply call the size function of the BinarySearchNode class
    int height()
    {
        return root_node->height();
    }; // simply call the height function of the BinarySearchNode class
    T front() const
    {
        if (root_node == nullptr)
        {
            throw "Empty tree";
        }
        return root_node->front();
    }; // handle any exceptions, then simply call the front function of the BinarySearchNode class
    T back() const
    {
        if (root_node == nullptr)
        {
            throw "Empty tree";
        }
        return root_node->back();
    }; // handle any exceptions, then simply call the back function of the BinarySearchNode class

    bool insert(T const &value)
    {
        if (root_node == nullptr)
        {
            root_node = new BinarySearchNode(value);
            return true;
        }
        return root_node->insert(value, root_node);
    }; // handle any exceptions, then simply call the insert function of the BinarySearchNode class

    void inorder_traversal(BinarySearchNode *node)
    {
        if (node == nullptr)
        {
            return;
        }
        inorder_traversal(node->left());
        cout << node->value() << " ";
        inorder_traversal(node->right());
    } // print the whole BST recursively in the order of left-parent-right

private:
    BinarySearchNode *root_node;
};
