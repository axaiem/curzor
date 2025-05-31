#include "Pieces.hpp"
#include <string>
#ifndef DLLPIECES_HPP
#define DLLPIECES_HPP

class Node {
public:
  Node *next;
  Node *prev;
  int idx;
  int length;
};

class DllPieces : public Pieces {
private:
  Node *head;

public:
  DllPieces(const std::string &s);
};

#endif