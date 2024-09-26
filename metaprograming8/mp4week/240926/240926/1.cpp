/*
=================================
Tree
- �������� �ڷḦ ��Ÿ���µ� ���� ���
- �θ� ��尡 ���� �ڽĳ�带 ���� �� �ִ� 1�� �ٱ���
- �� ��忡�� ����Ͽ� �ٽ� �ڱ� �ڽ��� ���� ���ƿ��� ��ȯ������ ������ ����

< Ʈ������ >
�θ���: ��Ʈ ��� �������� ���� ����� ���
�ڽĳ��: ��Ʈ ����� �ݴ�������� ���� ����� ���

�Ѹ�(root): �θ��尡 ���� �ֻ��� ���. Ʈ���� ���� 0�� �ϳ��� ����
����(branch): �θ���� �� ��尡 ��� �ִ� ���. Ʈ���� �߰��� ����
��(leaf): �ڽĳ�尡 ���� ���. Ʈ���� ���� ����

����: ��߳�忡�� ���������� ��ġ�� ��
����: ��Ʈ �������� ����
����: �ڽĳ���� ����

��� ���ɱ�?
- �ַ� ���������� ���� �� �ִ� �ڷᳪ ȿ������ �˻��� ���� ���
    ex) �������� ��������, ������ ����, DB, �˻������� ���� ��
        ������ų�� ����� ������ų�� ��� �� �ִ� ��ųƮ��


< Ʈ������ >
- ��带 ������� �θ���� �ڽĳ�带 ������ �� �ֵ��� ����


<BinaryTree>
- �θ��尡 �ڽĳ�带 �ִ� 2�������� ���� �� �ִ� Ʈ��

<BinaryTree�� ��ȸ ���>
- Ʈ���� �������� �ڷα����̱⶧���� ���������� ó���ϱ�
  ��ȸ�� ���� ��Ģ�� ����

1.������ȸ(PreOrder): ���, ����, ������
2.������ȸ(InOrder): ����, ���, ������
3.������ȸ(PostOrder): ����, ������, ���



=================================


*/



#include<iostream>
using namespace std;


template<typename T>
class BinaryTree
{

public:
    struct Node;

public:
    Node* Root() { return root; } //��Ʈ ��� ��ȯ

    BinaryTree(T data)
    {
        root = new Node(data);
    }
    ~BinaryTree() {}

    //���� �ڽ� ��� �߰�
    Node* AddLeft(Node* parent, T data)
    {
        //�̹� ���ʿ� �ڽ��� �ִٸ�
        if (parent-> != nullptr)
        {
            cout << "�̹� ���ʿ� �ڽ��� �ִ�" << endl;
            return nullptr;
        }

        //���ο� ��带 ����� �θ��� ���ʿ� ����
        parent->left = new Node(data);

        //�θ� �������ְ� 
        parent->left->parent = parent;
        return parent->left;
    }

    Node* AddRight(Node* parent, T data)
    {
        if (parent->right != nullptr)
        {
            cout << "�̹� ���ʿ� �ڽ��� �ִ�" << endl;
            return nullptr;
        }

        parent->right = new Node(data);

        parent->right->parent = parent;
        return parent->right
    }

    void deleteTree(Node* node)
    {
        if (node == nullptr) return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }

    //���(����)
    void PrintInOrder(Node* node)
    {
        if (node == nullptr) return;
        PrintInOrder(node->left);
        cout << node->data << " ";
        PrintInOrder(node->right);

    }

    void PrintPreOrder(Node* node)
    {
        if (node == nullptr) return;

        cout << node->data << " ";
        PrintPreOrder(node->left)
            PrintPreOrder(node->right)
    }

    void PrintPostOrder(Node* node)
    {
        if (node == nullptr) return;

        PrintPostOrder(node->left);
        PrintPostOrder(node->right);

        cout << node->data << " ";
    }

private:
    struct Node
    {
        T data; //����� ������
        Node* parent; //�θ�
        Node* left; //���� �ڽ� ���
        Node* right; //������ �ڽ� ���

        Node* (T data): data(data), parent(nullptr), left(nullptr), right(nullptr)
    }; // ������

    Node* root; //��Ʈ ���
};






int main()
{
    //��Ʈ��� ����
    BinaryTree<int>* tree = new BinaryTree<int>(20);
    BinaryTree<int>::Node* node = nullptr;

    node = tree->AddLeft(tree->Root(), 30);
    tree->AddLeft(node, 100);
    tree->AddRight(node, 200);


    node = tree->AddRight(tree->Root(), 40);
    tree->AddLeft(node, 400);
    tree->AddRight(node, 2000);

    tree->PrintInOrder(tree->Root());

};