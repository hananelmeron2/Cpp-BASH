# Cpp-BASH.
first task :
this script will check the leak-memory , thread race and compliation of a given file.

in the final output the user will see one of 5 options :
1. 0 -> all the cheacks run without error's.
2. 1 -> thread race fail, all other checks works good.
3. 2 -> leak-memory fail, all other checks works good.
4. 3 -> only compilation work good.
5. 7 -> compaile fail . 

third task:
in this task we build binary search tree with the next function's:
1. insert : insert to the tree new value.
2. remove : remove from the tree value.
3. parent : for a given key the parent will be the output to the user.
4. left : for a given key the left child of the node will be the output to the user.
5. right : for a given key the right child of the node will be the output to the user
6. root : will return the root value.
7. size: will return the size of the tree.
8. contains : will check if a given tree exit in the tree.
9. print : will print the tree in inorder format.

classes :
1. tree.cpp : contain the functions with the implemation.
2.tree.hpp : contain the functions without the implemation.
3.tree test : unit test for the program with 45 checks.
4.tree demo : the main class.
5. makefile : run the classes.
6.badkan.hpp : will check the functions.

working envirment : linux.

on terminal press make demo && ./demo.
                  make test && ./test.
                  this commends will run the program.
                  
                  

authors : hananel meron - 302326137.
          shimon hagag - 311367536.
          yoni tseva - 316526474.
