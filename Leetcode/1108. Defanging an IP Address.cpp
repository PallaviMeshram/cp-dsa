class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.length();
        string def = "";
        for (int i = 0; i < n; i++) {
            if (address[i] == '.') {
                def += "[.]";
            }
            else {
                def += address[i];
            }
        }
        return def;
    }
};