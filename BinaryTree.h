#pragma once
#include <iostream>
#include <vector>
#include <iomanip>

template <class T>
class BinaryTree
{
private:
	int _depth; // _depth represente N
	std::vector <std::vector <T>> _tree; // on initialise le vecteur de vecteur de type T

public:

    // Setter for depth, which resizes _tree appropriately
    void setDepth(int depth) {
        _depth = depth;
        _tree.resize(_depth + 1);
        // car chaque vecteur d'indice n contient n+1 elements
        // exemple: pour n=0 on a i=0 donc 1 element, pour n=1 on a i=0 et i=1 donc 2 elements...
        for (int i = 0; i <= _depth; ++i) {
            _tree[i].resize(i + 1); // on fais la meme chose pour chaque vecteur du vecteur principal
        }
    }

    void setNode(int level, int index, T value) {
        if (level <= _depth && index <= level) { // on verifie que la position est valide
            _tree[level][index] = value;
        }
        else { std::cerr << "Error: node position out of vector" << std::endl; }
    }

    T getNode(int level, int index) const {
        if (level <= _depth && index <= level) { // on verifie que la position est valide
            return _tree[level][index];
        }
        else {
        std:cerr << "Error: node position out of vector" << std::endl;
            return T(); // on retourne la valeur par default de T
        }
    }

    void display() const {
        for (int i=0, i <= _depth, i++) {
            for (int k = 0, k <= k <= i, k++) {
                std::cout << _tree[i][k] << "  " << std::endl
            }
        }
    }





};

