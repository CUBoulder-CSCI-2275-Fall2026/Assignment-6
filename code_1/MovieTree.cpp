#include "MovieTree.hpp"
#include <iostream>
#include <string>
#include<fstream>
#include <sstream>

using namespace std;

// MovieNode: node struct that will be stored in the MovieTree BST
MovieNode* getMovieNode(int rank, string t, int y, float r) {
    MovieNode* nn = new MovieNode;
    nn->title = t;
    nn->ranking = rank;
    nn->year = y;
    nn->rating = r;
    return nn;
}

MovieTree::MovieTree() {
    //TODO
}

MovieTree::~MovieTree() {
    //TODO
}

void MovieTree::printMovieInventory() {
    //TODO
}

void MovieTree::addMovieNode(int ranking, string title, int year, float rating) {
    //TODO
}

void MovieTree::findMovie(string title) {
    //TODO
}

void MovieTree::queryMovies(float rating, int year) {
    //TODO
}

void MovieTree::averageRating() {
    //TODO
}

void MovieTree::printLevelNodes(int level) {
    //TODO
}
