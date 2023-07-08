void printDuplicates(string str){
    
    int len = str.length();

    sort(str.begin(), str.end());
    for(int i = 0; i < len; i++) {
        int a = 1;

        while(i < len-1 && str[i] == str[i+1]) {
            a++;
            i++;
        }
        if(a > 1) {
            cout << str[i] << ", a = " << a << endl;
        }
    }
     
}