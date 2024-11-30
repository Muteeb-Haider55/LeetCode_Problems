class Solution {
public:
    int finalValueAfterOperations(vector<string>operations) {
        int X=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="x++"||operations[i]=="X++")
            X++;
            else if(operations[i]=="++x"||operations[i]=="++X")
            ++X;
            else if(operations[i]=="x--"||operations[i]=="--X")
            X--;
            else
            --X;
        }
        return X;
    }
};