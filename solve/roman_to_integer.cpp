class Solution {
public:
    int romanToInt(string s) {
        reverse(s.begin(), s.end());

        int temp1 = 0, temp2 = 0, sum = 0;

        if (s[0] == 'I') temp1 = 1;
        else if (s[0] == 'V') temp1 = 5;
        else if (s[0] == 'X') temp1 = 10;
        else if (s[0] == 'L') temp1 = 50;
        else if (s[0] == 'C') temp1 = 100;
        else if (s[0] == 'D') temp1 = 500;
        else temp1 = 1000;

        sum += temp1;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == 'I') temp2 = 1;
            else if (s[i] == 'V') temp2 = 5;
            else if (s[i] == 'X') temp2 = 10;
            else if (s[i] == 'L') temp2 = 50;
            else if (s[i] == 'C') temp2 = 100;
            else if (s[i] == 'D') temp2 = 500;
            else temp2 = 1000;

            if (temp2 < temp1) {
                sum -= temp2;
            } else {
                sum += temp2;
            }

            temp1 = temp2;
        }

        return sum;
    }
};