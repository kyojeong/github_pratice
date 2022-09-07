class Solution {
public:
    bool judgeCircle(string moves) {
        int col=0,row=0;
        
        for(int i=0;i<moves.length();++i){
            switch(moves[i]){
                case 'R':
                    ++col;
                    break;
                case 'L':
                    --col;
                    break;
                case 'U':
                    ++row;
                    break;
                case 'D':
                    --row;
                    break;
                default:
                    break;
            }
        }
        
        if(row==0 && col==0) return true;
        else return false;
    }
};
