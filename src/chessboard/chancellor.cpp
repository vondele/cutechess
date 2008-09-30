#include "chancellor.h"

Chancellor::Chancellor(Chessboard::ChessSide side, int square, Chessboard* board)
: ChessPiece(side, square, board)
{
	int vStep = board->arrayWidth();
	m_hopOffsetCount = 8;
	m_slideOffsetCount = 4;

	// Knight moves
	m_hopOffsets[0] = -vStep * 2 - 1;
	m_hopOffsets[1] = -vStep * 2 + 1;
	m_hopOffsets[2] = -vStep - 2;
	m_hopOffsets[3] = -vStep + 2;
	m_hopOffsets[4] = vStep - 2;
	m_hopOffsets[5] = vStep + 2;
	m_hopOffsets[6] = vStep * 2 - 1;
	m_hopOffsets[7] = vStep * 2 + 1;

	// Rook moves
	m_slideOffsets[0] = -vStep;
	m_slideOffsets[1] = -1;
	m_slideOffsets[2] = 1;
	m_slideOffsets[3] = vStep;
}

ChessPiece::PieceType Chancellor::type() const
{
	return PT_Chancellor;
}
