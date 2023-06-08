bool searchMatrix(vector<vector<int>>& mat, int target) {
        //https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge&leftPanelTab=1

        for(auto val:mat)
            for(auto x:val) if(x==target) return true;
            
        return false;
}