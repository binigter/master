#include <iostream>
#include <string>
using namespace std;

struct  Node
{
    int val;
    Node* next;
};

//��������
Node* creatlist(int n){
    Node* head = new Node;
    Node* p = head;
    cout << "����������" << n << "�������ֵ" << endl;
    for (int i = 0; i < n; i++)
    {
        Node* node = new Node;
        cin >> node->val;
        p->next = node;
        p = node;
    }
    // head->next = NULL;      
    return head;    
}

//��ӡ����
void printlist(Node* head){
    Node* p = head->next;
    while (p != nullptr)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "������������";
    cin >> n;
    cout << "������Ϊ" << n << endl;
    
    Node* head = creatlist(n);

    cout << "����Ϊ" << endl;
    printlist(head);
    return 0;
}