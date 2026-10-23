//hourglass sum
// B)   B:|   

int hourglassSum(vector<vector<int>> arr) {
    int maxSum=INT_MIN,sum=0;
    for(int y=0;y<4;y++){
        for(int z=0;z<4;z++){
            sum=(arr[z][y]+arr[z][y+1]+arr[z][y+2]) + (arr[z+1][y+1]) + (arr[z+2][y]+arr[z+2][y+1]+arr[z+2][y+2]);
            cout<<sum<<" ";
            if(sum>maxSum){
                maxSum=sum;
            }
        }   cout<<endl;
    }
    return maxSum;
}
