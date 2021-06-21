class Solution
{
public:
    string intToRoman(int num)
    {       
        string st = "";
        string s[] = {"I", "X", "C", "M", "V", "L", "D", ""};
        int i = 0;
        while (num)
        {
            switch(num % 10)
            {
                case 1: st.insert(0, s[i]); break;
                case 2: st.insert(0, s[i] + s[i]); break;
                case 3: st.insert(0, s[i] + s[i] + s[i]); break;
                case 4: st.insert(0, s[i] + s[i + 4]); break;
                case 5: st.insert(0, s[i + 4]); break;
                case 6: st.insert(0, s[i + 4] + s[i]); break;
                case 7: st.insert(0, s[i + 4] + s[i] + s[i]); break;
                case 8: st.insert(0, s[i + 4] + s[i] + s[i] + s[i]); break;
                case 9: st.insert(0, s[i] + s[i + 1]); break;  
            }
            num /= 10;
            i++;
        }
        return st;
    }
};
