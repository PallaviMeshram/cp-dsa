class Solution {
public:
    string interpret(string command) {
        int n = command.length();
        string ncommand = "";
        for (int i = 0; i < n; i++) {
            if (command[i] == 'G') ncommand += 'G';
            else if (command[i] == '(' and command[i + 1] == ')') {
                ncommand += 'o';
                i++;
            }
            else if (command[i] == '(' and command[i + 1] == 'a') {
                ncommand += "al";
                i++;
            }
        }
        return ncommand;
    }
};