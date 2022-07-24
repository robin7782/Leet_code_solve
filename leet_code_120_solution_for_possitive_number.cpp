class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int sum=triangle[0][0];
        int min= INT_MAX;
      
       
        for(int i=1;i<triangle.size();i++){
                 
              for(int j=0;j<i+1;j++){
                if(triangle[i][j]<min){
                    min = triangle[i][j];
                    }
                }
          sum = sum + min;
        }
        return sum;
    }
};
