class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ascii = coordinates[0] - 'a';
        int row = coordinates[1] - '0';

        return (ascii + row) % 2 !=1;
    }
};