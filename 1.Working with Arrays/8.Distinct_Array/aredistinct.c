int areDistinct(int **arr, int len){
    int i,k;
    for(i=0; i<len; i++){
        for(k=i+1;k<len;k++){
            if(arr[i]==arr[k]){
                return 0;
            }
        }
    }
    return 1;
}