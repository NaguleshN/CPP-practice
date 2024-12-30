    int n;
    cin>>n;
    int arr[n],arr1[n];

    fstream file1 ;
    file1.open("sample.txt",ios::out);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        file1<<arr[i]<<" ";
    }
    file1.close();
    
    file1.open("sample.txt",ios::in);
    int i=0,t;
    while(file1>>t&&i<n){
        arr1[i++]=t;
    }
    file1.close();
    
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr1[i]>arr1[j]){
                int c=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=c;
            }
        }
    }
    
    fstream file;
    file.open("sample.txt",ios::out);
    for(int i=0;i<n;i++){
        file<<arr1[i];
        cout<<arr1[i]<<endl;
    }
    
    