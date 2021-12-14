#include <iostream>
using namespace std;

int main()
{
    int n, i, j=0, count=1, con=1, n2;
    cin >> n;
    n2=n;
    int a[n];
    for (i=0; i<n; i++){
        cin >> a[i];
        if (i!=0 and a[i]!=a[i-1]) count+=1;
    }
    int l;
    cin >> l;
    
    int b[count], c[count];
    for (i=0; i<n; i++){
        while (a[i]==a[i+1]){
            con++; i++;
        }
        b[j]=con; c[j]=a[i];
        if (con>l) n2-=con-1;
        j++; con=1;
    }
    
    
    j=0; con=1;
    int arr[n2];
    for (i=0; i<n2; i++){
        if (b[j]<=l){
            arr[i]=c[j];
            con++;
        }
        else{
            arr[i]=0;
            j++; con=1;
        }
        
        if (con>b[j]){
            con=1; j++;
        }
    }
    
    for (i=0; i<n2; i++){
        cout << arr[i] << " ";
    }

}