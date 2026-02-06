class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p = 0;
        for( int i = 0; i < s.length(); i++ )
        {
            while( p < t.length() )
            {
                if( s[i] == t[p] )
                {
                    break;
                }
                p++;
            }
            if( p >= t.length() )
                return false;
            
            p++;
        }
        return true;
    }
};
