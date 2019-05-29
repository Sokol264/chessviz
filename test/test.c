#include "ctest.h"

#include "figures.h"

CTEST(king, black_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'k', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, King(board, 2, 2, 3, 3, '-'));
}

CTEST(king, black_wrong_figure)
{
    char board[8][8] = {{'k', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, King(board, 1, 1, 2, 2, '-'));
}
CTEST(king, black_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'k', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, King(board, 1, 1, 2, 2, 'x'));
}
CTEST(king, black_attack_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'k', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, King(board, 1, 1, 2, 2, 'x'));
}
CTEST(king, black_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'k', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, King(board, 1, 1, 2, 2, '-'));
}
CTEST(king, black_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'k', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, King(board, 1, 1, 2, 2, 'x'));
}
CTEST(king, white_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'K', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Kingw(board, 2, 2, 3, 3, '-'));
}

CTEST(king, white_wrong_figure)
{
    char board[8][8] = {{'K', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Kingw(board, 1, 1, 2, 2, '-'));
}
CTEST(king, white_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'K', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Kingw(board, 1, 1, 2, 2, 'x'));
}
CTEST(king, white_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'K', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Kingw(board, 1, 1, 2, 2, 'x'));
}
CTEST(king, white_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'K', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Kingw(board, 1, 1, 2, 2, '-'));
}
CTEST(king, white_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'K', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Kingw(board, 1, 1, 2, 2, 'x'));
}

CTEST(pawn, black_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'p', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Pawn(board, 2, 2, 3, 3, '-'));
}

CTEST(pawn, black_wrong_figure)
{
    char board[8][8] = {{'p', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Pawn(board, 1, 1, 2, 2, '-'));
}
CTEST(pawn, black_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Pawn(board, 1, 1, 2, 2, 'x'));
}
CTEST(pawn, black_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Pawn(board, 1, 1, 2, 2, 'x'));
}
CTEST(pawn, black_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Pawn(board, 1, 1, 2, 2, '-'));
}
CTEST(pawn, black_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'p', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Pawn(board, 1, 1, 2, 2, 'x'));
}

CTEST(pawn, white_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'P', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Pawnw(board, 2, 2, 3, 3, '-'));
}

CTEST(pawn, white_wrong_figure)
{
    char board[8][8] = {{'P', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Pawnw(board, 1, 1, 2, 2, '-'));
}
CTEST(pawn, white_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Pawnw(board, 1, 1, 2, 2, 'x'));
}
CTEST(pawn, white_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Pawnw(board, 1, 1, 2, 2, 'x'));
}
CTEST(pawn, white_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Pawnw(board, 1, 1, 2, 2, '-'));
}
CTEST(pawn, white_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'P', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Pawnw(board, 1, 1, 2, 2, 'x'));
}


CTEST(rook, black_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'r', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Rook(board, 2, 2, 3, 3, '-'));
}

CTEST(rook, black_wrong_figure)
{
    char board[8][8] = {{'r', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Rook(board, 1, 1, 2, 2, '-'));
}
CTEST(rook, black_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'r', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Rook(board, 1, 1, 2, 2, 'x'));
}
CTEST(rook, black_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'r', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Rook(board, 1, 1, 2, 2, 'x'));
}
CTEST(rook, black_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'r', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Rook(board, 1, 1, 2, 2, '-'));
}
CTEST(rook, black_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'r', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Rook(board, 1, 1, 2, 2, 'x'));
}


CTEST(rook, white_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'R', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Rookw(board, 2, 2, 3, 3, '-'));
}

CTEST(rook, white_wrong_figure)
{
    char board[8][8] = {{'R', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Rookw(board, 1, 1, 2, 2, '-'));
}
CTEST(rook, white_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'R', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Rookw(board, 1, 1, 2, 2, 'x'));
}
CTEST(rook, white_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'R', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Rookw(board, 1, 1, 2, 2, 'x'));
}
CTEST(rook, white_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'R', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Rookw(board, 1, 1, 2, 2, '-'));
}
CTEST(rook, white_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'R', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Rookw(board, 1, 1, 2, 2, 'x'));
}


CTEST(bishop, black_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'b', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Bishop(board, 2, 2, 3, 3, '-'));
}

CTEST(bishop, black_wrong_figure)
{
    char board[8][8] = {{'b', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Bishop(board, 1, 1, 2, 2, '-'));
}
CTEST(bishop, black_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'b', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Bishop(board, 1, 1, 2, 2, 'x'));
}
CTEST(bishop, black_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'b', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Bishop(board, 1, 1, 2, 2, 'x'));
}
CTEST(bishop, black_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'b', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Bishop(board, 1, 1, 2, 2, '-'));
}
CTEST(bishop, black_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'b', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Bishop(board, 1, 1, 2, 2, 'x'));
}

CTEST(bishop, white_move)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'B', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Bishopw(board, 2, 2, 3, 3, '-'));
}

CTEST(bishop, white_wrong_figure)
{
    char board[8][8] = {{'B', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(1, Bishopw(board, 1, 1, 2, 2, '-'));
}
CTEST(bishop, white_wrong_move_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'B', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(2, Bishopw(board, 1, 1, 2, 2, 'x'));
}
CTEST(bishop, white_attacking_team)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'B', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'Q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(3, Bishopw(board, 1, 1, 2, 2, 'x'));
}
CTEST(bishop, white_wrong_move_clean)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'B', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(4, Bishopw(board, 1, 1, 2, 2, '-'));
}
CTEST(bishop, white_attack)
{
    char board[8][8] = {{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', 'B', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'q', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};

    ASSERT_EQUAL(0, Bishopw(board, 1, 1, 2, 2, 'x'));
}
