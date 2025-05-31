#include "../AllOperations/Operation.hpp"
#include "DllPieces.hpp"
#include "PieceTable.hpp"
#ifndef ADDTEXTPIECETABLE_HPP
#define ADDTEXTPIECETABLE_HPP

class AddTextPieceTable : public Operation {
private:
  DllPieces &m_tablePiece;
  int m_idx;
  std::string m_changesBuffer;

public:
  AddTextPieceTable(DllPieces &tablePiece, int idx, const std::string &text,
                    std::string &change)
      : m_tablePiece(tablePiece), m_idx(idx), m_changesBuffer(change) {}

  void run() {
    // to be defined
  }

  void undo() {
    // impliment undo operations
  }
};

#endif