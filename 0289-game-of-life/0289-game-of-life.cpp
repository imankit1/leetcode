class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {

        int r=board.size();
        int c=board[0].size();
            vector<vector<int>>dummy(r, vector<int>(c, 0));

            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    dummy[i][j]=board[i][j];
                }
            }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){

                int top=0, down=0, right=0, left=0, nw=0, ne=0, sw=0, se=0;
                //top
                if(i-1>=0 && dummy[i-1][j]==1) top=1;
                //down 
                if(i+1<r && dummy[i+1][j]==1) down=1;

                //right

                if(j+1<c && dummy[i][j+1]==1) right=1;

                //left
                if(j-1>=0 && dummy[i][j-1]==1) left=1;

                //nw

                if(i-1>=0 && j-1>=0 && dummy[i-1][j-1]==1) nw=1;

                //ne

                if(i-1>=0 && j+1<c && dummy[i-1][j+1]==1) ne=1;
                    //sw
                if(i+1<r && j-1>=0 && dummy[i+1][j-1]==1) sw=1;

                //se
                if(i+1<r && j+1<c && dummy[i+1][j+1]==1) se=1;
                
                 int live=left+right+top+down+sw+se+ne+nw;

                 if(dummy[i][j]==0 && live==3){
                    board[i][j]=1;
                 }
                 else if(dummy[i][j]==1 && live<2) board[i][j]=0;

                 else if(dummy[i][j]==1 && (live==2 || live==3)) continue;

                 else if(dummy[i][j]==1 && live>3) board[i][j]=0;

            }
        }
    }
};