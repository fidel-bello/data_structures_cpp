#include "b_tree.h"

void inorder_add(){
    b_tree tree(1);
    tree.add({ 2 }, {'L'});
    tree.add({ 2, 4 }, { 'L', 'L',});
    tree.add({ 2, 5 }, { 'L', 'R'});
    tree.add({ 3 }, { 'R'});
    tree.add({ 3, 6}, { 'R', 'L'});
    tree.add({ 3, 7}, { 'R', 'R'});
    std::cout << tree.tree_max() << "\n";
    std::cout << tree.tree_height() << "\n";
    std::cout << tree.total_nodes() << "\n";
    std::cout << tree.leafs_count() << "\n";
    std::cout << tree.does_exist(3) << "\n";
    tree.printIn_order();

}