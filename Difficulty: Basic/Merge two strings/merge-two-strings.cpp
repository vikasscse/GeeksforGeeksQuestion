
string merge(string S1, string S2) {
    // your code here
    string s3;
    int i=0,j=0;
    while(i<S1.size() && j<S2.size()){
        s3=s3+S1[i];
        s3=s3+S2[j];
        i++;
        j++;
    }
    while(i<S1.size()){
        s3=s3+S1[i];
        i++;
    }
    while(j<S2.size()){
        s3=s3+S2[j];
        j++;
    }
    return s3;
}