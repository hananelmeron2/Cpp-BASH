#include <iostream>
using std::cout, std::endl;


namespace ariel
{
       struct tree_node
       {
	tree_node *left;
	tree_node *right;
	int data;
        };

	class Tree       
{
        
           tree_node *Troot;
           public:
           Tree()
	   {
           Troot=NULL;
	   }

          
          void print();
          void insert(int key);
          void remove(int key);
          void inorder_print(tree_node *ptr);
	  bool containsHelp(tree_node * ptr,int key);
          bool contains(int key);
          int root();
          int parent(int key);
	  int parentHelp(tree_node * ptr,int key);
          int left(int key);
	  int leftHelp(tree_node *ptr,int key);
          int right(int key);
	  int rightHelp(tree_node *ptr,int key);
          int size();
	  int sizeHelp(tree_node *ptr);
	  int isempty();
	  int  min(tree_node *ptr);
          int minHelp(tree_node *ptr);
	  void  removeHelp(tree_node *ptr,int key); 

};        

}
