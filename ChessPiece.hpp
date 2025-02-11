/*
File:
Author:
Date:

*/


#include <string>
#ifndef CHESS_PIECE_HPP
#define CHESS_PIECE_HPP

class ChessPiece {
    private:
    std::string color_;
    int row_;
    int column_;
    bool movingUp_;




    public:
ChessPiece();
ChessPiece(const std::string& color, int row = -1, int column = -1, bool movingUp = false);
static const int BOARD_LENGTH = 8;

/**
 * @brief Gets the color of the chess piece.
 * @return std::string - The value stored in color_
 */

std::string getColor() const;

/**
 * @brief Gets the row position of the chess piece.
 * @return The integer value stored in row_
 */
int getRow() const;
/**
 * @brief Gets the column position of the chess piece.
 * @return The integer value stored in column_
 */
int getColumn() const;
/**
 * @brief Gets the value of the flag for if a chess piece is moving up
 * @return The boolean value stored in movingUp_
 */
bool isMovingUp() const;


/**
 * @brief Sets the color of the chess piece.
 * @param color A const string reference, representing the color to set the piece to. 
 *     If the string contains non-alphabetic characters, the value is not set (ie. nothing happens)
 *     If the string is alphabetic, then all characters are converted and stored in uppercase
 * @post The color_ member variable is updated to the parameter value in uppercase
 * @return True if the color was set. False otherwise.
 */
bool setColor(const std::string& color_);
/**
 * @brief Sets the row position of the chess piece 
 * @param row A const reference to an integer representing the new row of the piece
 *
 * If the supplied value is outside the board dimensions [0, BOARD_LENGTH), 
 *    the ChessPiece is considered to be taken off the board, and its row AND column are set to -1 instead.
 */
void setRow(const int row);
/**
 * @brief Sets the column position of the chess piece 
 * @param row A const reference to an integer representing the new column of the piece
 *
 * If the supplied value is outside the board dimensions [0, BOARD_LENGTH),
 *  the ChessPiece is considered to be taken off the board, and its row AND column are set to -1 instead.
 */
void setColumn(const int column);
/**
 * @brief Sets the movingUp flag of the chess piece 
 * @param flag A const reference to an boolean representing whether the piece is now moving up or not
 */
void setMovingUp(const bool movingUp);

/**
 * @brief Displays the chess piece's information in the following format,
 *        if it is considered on the board (ie. its row and col are not -1):
 * <COLOR> piece at (row, col) is moving <UP / DOWN>\n
 * 
 * Otherwise an alternative format is used:
 * <COLOR> piece is not on the board\n
 * @note "\n" just means endline in this case. Please use "std::endl," don't print out the text "\n".
 * Example output 1:
   BLACK piece at (2,4) is moving UP
   Example output 2:
   WHITE piece is not on the board
 */
void display() const;


/**
 * @brief Destructor.
 */
~ChessPiece();
};




#endif