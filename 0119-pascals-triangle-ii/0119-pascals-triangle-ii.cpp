class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long num = 1;
        vector<int> row;

        for(int j = 0; j <= rowIndex; j++){
            row.push_back(num);
            num = num * (rowIndex - j) / (j + 1);
        }
        return row;
    }
};