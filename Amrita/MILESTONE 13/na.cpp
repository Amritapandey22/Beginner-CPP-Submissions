#include <iostream>
#include <queue>
using namespace std;

template <typename T> class BinaryTreeNode {
public:
T data; BinaryTreeNode* left; BinaryTreeNode* right;

BinaryTreeNode(T data) { this->data = data; left = NULL;
right = NULL;

}


~BinaryTreeNode() {
delete left; delete right;
}
};


class BST {
BinaryTreeNode<char>* root;


public:



BST() {


}



root = NULL;



~BST() {
delete root;

}


private:
BinaryTreeNode<char>* deleteData(char data, BinaryTreeNode<char>* node) { if (node == NULL) {
return NULL;

}


if (data > node->data) {
node->right = deleteData(data, node->right); return node;
} else if (data < node->data) {
node->left = deleteData(data, node->left); return node;

} else {


if (node->left == NULL && node->right == NULL) { delete node;
return NULL;
} else if (node->left == NULL) { BinaryTreeNode<char>* temp = node->right; node->right = NULL;
delete node;

return temp;
} else if (node->right == NULL) { BinaryTreeNode<char>* temp = node->left; node->left = NULL;
delete node; return temp;
} else {
BinaryTreeNode<char>* minNode = node->right; while (minNode->left != NULL) {
minNode = minNode->left;

}
char rightMin = minNode->data; node->data = rightMin;
node->right = deleteData(rightMin, node->right); return node;
}
}
}


void printTree(BinaryTreeNode<char>* root) { if (root == NULL) {
return;

}
cout << root->data << ":"; if (root->left != NULL) {
cout << "L" << root->left->data <<" " ;

}


if (root->right != NULL) {

cout << "R" <<root->right->data;
}

cout << endl; printTree(root->left); printTree(root->right);
}




public:
void deleteData(char data) {
root = deleteData(data, root);

}


void printTree() {
printTree(root);

}


private:
BinaryTreeNode<char>* insert(char data, BinaryTreeNode<char>* node) { if (node == NULL) {
BinaryTreeNode<char>* newNode = new BinaryTreeNode<char>(data);
return newNode;

}


if (data < node->data) {
node->left = insert(data, node->left);


} else {


}



node->right = insert(data, node->right);

return node;
}


public:
void insert(char data) {
this->root = insert(data, this->root);

}


private:
bool hasData(char data, BinaryTreeNode<char>* node) { if (node == NULL) {
return false;

}


if (node->data == data) {
return true;
} else if (data < node->data) {
return hasData(data, node->left);


} else {


}
}



return hasData(data, node->right);



public:
bool hasData(char data) {
return hasData(data, root);

}
};


BinaryTreeNode<char>* takeInputLevelWise() { char rootData;
cout << "Enter root data" << endl; cin >> rootData;
if (rootData == -1) {
return NULL;

}


BinaryTreeNode<char>* root = new BinaryTreeNode<char>(rootData);


queue<BinaryTreeNode<char>*> pendingNodes; pendingNodes.push(root);
while (pendingNodes.size() != 0) {
BinaryTreeNode<char>* front = pendingNodes.front(); pendingNodes.pop();
cout << "Enter left child of " << front->data << endl; char leftChildData;
cin >> leftChildData;
if (leftChildData != -1) {
BinaryTreeNode<char>* child = new BinaryTreeNode<char>(leftChildData);
front->left = child; pendingNodes.push(child);
}
cout << "Enter right child of " << front->data << endl; char rightChildData;
cin >> rightChildData;
if (rightChildData != -1) {

BinaryTreeNode<char>* child = new BinaryTreeNode<char>(rightChildData);
front->right = child; pendingNodes.push(child);
}
}

return root;
}


void printTree(BinaryTreeNode<char>* root) { if (root == NULL) {
return;

}
cout << root->data << ":"; if (root->left != NULL) {
cout << "L" << root->left->data;

}


if (root->right != NULL) {
cout << "R" << root->right->data;

}
cout << endl; printTree(root->left); printTree(root->right);
}


BinaryTreeNode<char>* takeInput() { char rootData;
cout << "Enter data" << endl; cin >> rootData;

if (rootData == '#') {
return NULL;

}


BinaryTreeNode<char>* root = new BinaryTreeNode<char>(rootData); BinaryTreeNode<char>* leftChild = takeInput(); BinaryTreeNode<char>* rightChild = takeInput();
root->left = leftChild; root->right = rightChild; return root;
}






// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 6 1 30 5 7 -1 -1 -1 -1 -1 -1 -1 -1
int main() {
BST b;
cout<<"Enter Your Name"<<endl; string t;
cin>>t;
for(int i=0;i<t.length();i++){


b.insert(t[i]);
}
cout<<endl<<endl<<endl;
cout<<"Character before ':' denotes root"<<endl<<endl; cout<<"R denotes right child and L denotes left child "<<endl;

cout<<endl<<endl<<endl; b.printTree();
/*b.deleteData(); b.deleteData(100); b.prcharTree();*/
}



