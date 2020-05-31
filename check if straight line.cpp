class Solution {
    public boolean checkStraightLine(int[][] c) {
        int points=c.length;
        if(points==2)
            return true;
         int y1=c[0][1];
         int x1=c[0][0];
         int y2=c[1][1];
         int x2=c[1][0];
        double m;
        int p=0;
        int f=0;
        if(x2-x1!=0)
         m=(y2-y1)/(x2-x1);
        else
          { m=-9999999;
            p=x1;
           f=1;
          }
        //System.out.println(x2-x1);
        if(f==0)
         {for(int i=2;i<points;i++)
         {
             if(c[i][1]!=m*(c[i][0]-x1)+y1)
                 return false;
         }}
        else
        {
            for(int i=2;i<points;i++)
         {
                if(p!=c[i][0])
                    return false;
            }
        }
        return true;
        
        
        
    }
}