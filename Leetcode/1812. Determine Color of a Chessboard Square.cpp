class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int num = int(coordinates[1]);
        if (coordinates[0] == 'a' or coordinates[0] == 'c' or coordinates[0] == 'e' or coordinates[0] == 'g') {
            if (num % 2 == 0) return true;
            else return false;
        } else {
            if (num % 2 == 0) return false;
            else return true;
        }

    }
};