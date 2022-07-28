class Solution {
public:
    void dfs (vector<vector<int>>& image, int sr, int sc, int newColor,int m,int n,int curr){
    if(sr>=n||sr<0||sc>=m||sc<0||image[sr][sc]!=curr||image[sr][sc]==newColor)return;
    image[sr][sc]=newColor;
    dfs(image,sr+1,sc,newColor,m,n,curr);
    dfs(image,sr-1,sc,newColor,m,n,curr);
    dfs(image,sr,sc+1,newColor,m,n,curr);
    dfs(image,sr,sc-1,newColor,m,n,curr);
    return;
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]==newColor)return image;
        dfs(image,sr,sc,newColor,m,n,image[sr][sc]);
        return image;
    }
};