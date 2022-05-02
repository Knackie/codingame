using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node* arbre = this;
    
    //! This method returns a pointer to the node with the given value.
    Node* find(int v){
        Node* actual = arbre;
   while(actual)
   {
      if(v == actual->value)
         return actual;
      else if(v < actual->value)
         actual = actual->left;
      else
         actual = actual->right;
   }

   return nullptr;
}
};
