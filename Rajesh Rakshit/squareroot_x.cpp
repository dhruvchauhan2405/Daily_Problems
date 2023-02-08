
class Solution {
public:int mySqrt(int x) {

unsigned int  p=1;
unsigned int y=x;
int count=1;
int z=1;
if(x==0){

    return 0;
}

if(x==1||x==2 || x==3){
    return 1;
}

while(y>p){
    z+=2;
    p+=z;//4
    if(y>=p)
    {
       count++; 
        
    }  

}

return count;
}
};
