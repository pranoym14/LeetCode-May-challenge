class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        fun(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
    public void fun(int [][] image,int i,int j,int color,int newColor)
    {
        if(i<0 ||i>=image.length||j<0 || j>=image[i].length|| image[i][j]!=color)
            return;
        image[i][j]=newColor;
        fun(image,i+1,j,color,newColor);
        fun(image,i-1,j,color,newColor);
        fun(image,i,j+1,color,newColor);
        fun(image,i,j-1,color,newColor);
    }
}