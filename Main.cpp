#include "CallOption.h"
#include <iostream>

int main() {
	//x = Option(5.0);
	CallOption x = CallOption(1.0, 100.0);
	double y = x.payoff(120);
	std::cout << y;
    
    /*
    // Example usage of BinaryTree
    BinaryTree<double> tree;
    tree.setDepth(3);

    // Setting some values in the tree
    tree.setNode(0, 0, 100.0);
    tree.setNode(1, 0, 110.0);
    tree.setNode(1, 1, 90.0);
    tree.setNode(2, 0, 121.0);
    tree.setNode(2, 1, 99.0);
    tree.setNode(2, 2, 81.0);
    tree.setNode(3, 0, 133.1);
    tree.setNode(3, 1, 108.9);
    tree.setNode(3, 2, 89.1);
    tree.setNode(3, 3, 72.9);

    // Display the tree
    std::cout << "Binary Tree:" << std::endl;
    tree.display();

    // Example of retrieving a node value
    double value = tree.getNode(2, 1);
    std::cout << "Value at (2, 1): " << value << std::endl;
    */

	return 0;
}