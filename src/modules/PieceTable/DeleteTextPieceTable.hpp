#include "../AllOperations/Operation.hpp"
#include "DllPieces.hpp"
#ifndef DELETETEXTPIECETABLE_HPP
#define DELETETEXTPIECETABLE_HPP

class DeleteTextPieceTable : public Operation {
private:
  DllPieces &m_tablePiece;
  int m_idx;
  int m_length;

public:
  DeleteTextPieceTable(DllPieces &tablePiece, int idx, int length)
      : m_tablePiece(tablePiece), m_idx(idx), m_length(length) {
    // impliment remove
  }

  void run() override {
    // impliment delete operations.
  }

  void undo() override {
    // impliment undo operatio here.
  }
};

#endif