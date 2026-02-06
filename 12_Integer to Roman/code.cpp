class Solution {
public:
    string intToRoman(int num) {
        string s = to_string( num );
        int n = s.length();
        string res = "";

        for( int i = 0; i < n; i++ )
        {
            int pos = n - i;
            if( pos == 4 )
            {
                if( s[i] == '1' )
                    res = res + "M";
                else if( s[i] == '2' )
                    res = res + "MM";
                else if( s[i] == '3' )
                    res = res + "MMM";
            }
            else if( pos == 3 )
            {
                if( s[i] == '1' )
                    res = res + "C";
                else if( s[i] == '2' )
                    res = res + "CC";
                else if( s[i] == '3' )
                    res = res + "CCC";
                else if( s[i] == '4' )
                    res = res + "CD";
                else if( s[i] == '5' )
                    res = res + "D";
                else if( s[i] == '6' )
                    res = res + "DC";
                else if( s[i] == '7' )
                    res = res + "DCC";
                else if( s[i] == '8' )
                    res = res + "DCCC";
                else if( s[i] == '9' )
                    res = res + "CM";
            }
            else if( pos == 2 )
            {
                if( s[i] == '1' )
                    res = res + "X";
                else if( s[i] == '2' )
                    res = res + "XX";
                else if( s[i] == '3' )
                    res = res + "XXX";
                else if( s[i] == '4' )
                    res = res + "XL";
                else if( s[i] == '5' )
                    res = res + "L";
                else if( s[i] == '6' )
                    res = res + "LX";
                else if( s[i] == '7' )
                    res = res + "LXX";
                else if( s[i] == '8' )
                    res = res + "LXXX";
                else if( s[i] == '9' )
                    res = res + "XC";
            }
            else if( pos == 1 )
            {
                if( s[i] == '1' )
                    res = res + "I";
                else if( s[i] == '2' )
                    res = res + "II";
                else if( s[i] == '3' )
                    res = res + "III";
                else if( s[i] == '4' )
                    res = res + "IV";
                else if( s[i] == '5' )
                    res = res + "V";
                else if( s[i] == '6' )
                    res = res + "VI";
                else if( s[i] == '7' )
                    res = res + "VII";
                else if( s[i] == '8' )
                    res = res + "VIII";
                else if( s[i] == '9' )
                    res = res + "IX";
            }
        }
        return res;
    }
};
