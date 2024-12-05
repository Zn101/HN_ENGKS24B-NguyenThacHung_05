#include <stdio.h>
#include <math.h>
int main() {
    int choose,arr[100],n,position,value;
    do{
    printf("\tMenu\n");
    printf("1. Nhap so phan tu va gia tri cho mang\n");
    printf("2. In ra cac phan tu trong mang\n");
    printf("3. Dem so luong cac so hoan hao trong mang\n");
    printf("4. Tim gia tri nho thu 2 trong mang\n");
    printf("5. Them mot phan tu vao vi tri dau tien trong mang\n");
    printf("6. Xoa phan tu trong mang tai mot vi tri cu the\n");
    printf("7. Sap xep mang theo thu tu giam dan\n");
    printf("8. Tim xem phan tu co ton tai trong mang hay khong\n");
    printf("9. Sap xep mang va in ra sao cho so le dung truoc, so chan dung sau\n");
    printf("10. Dao nguoc thu tu trong mang va in ra\n");
    printf("11. Thoat\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choose);
    switch(choose){
        case 1:
        {
            printf("Moi nhap vao so phan tu trong mang: ");
            scanf("%d",&n);
            if (n>100){
                printf("So phan tu khong hop le!\n");
                break;
            }
            for (int i=0; i<n; i++){
                printf("Moi nhap vao phan tu thu %d trong mang: ",i+1);
                scanf("%d",&arr[i]);
            }
        }
        break;
        case 2:
        {
            if (n==0){
                printf("Mang chua duoc nhap!");
                break;
            }
            for (int i=0; i<n; i++){
                printf("arr[%d]=%d\n",i ,arr[i]);
            }
        }
        break;
        case 3:
        {   
            int perfectNumber=0;
            int sumPerfectNumber=0;
            if (n==0){
                printf("Mang chua duoc nhap!");
                break;
            }
            for (int i=0; i<n; i++){
                int sum = 0;
                for(int f = 1; f <= sqrt(arr[i]); f++){
                if(arr[i] % f == 0){
                sum += f;
                if(f != arr[i] / f){
                    sum += arr[i] / f;
                        }
                    }
                }
                if(sum - arr[i] == arr[i]){
                    sumPerfectNumber++;
                    perfectNumber=1;
                }
            }
            if(perfectNumber==0){
                printf("Khong co so hoan hao!");
            }
            printf("So so hoan hao trong mang la: %d\n",sumPerfectNumber);
        }
        break;
        case 4:
        {
            if (n<2){
                printf("Mang can it nhat 2 phan tu!");
                break;
            }
            int max;
            for (int i=0; i<n; i++){
                if(arr[i]>max)
                max=arr[i];
            }
            int min1 = max;
            int min2 = max;
            for (int i=0; i<n; i++){
                if (arr[i]<min1){
                    min2=min1;
                    min1=arr[i];
                }
                else if (arr[i]<min2 && arr[i]!=min1){
                    min2=arr[i];
                }
            }
            printf("Phan tu nho thu 2 trong mang la: %d\n",min2);
        }
        break;
        case 5:
        {
            printf("Nhap gia tri muon them vao: ");
            scanf("%d",&value);
            for(int i=n;i>0;i--){
                arr[i] = arr[i - 1];
            }
            arr[0]=value;
            n++;
        }
        break;
        case 6:
        {
            if (n==0){
                printf("Mang chua duoc nhap!");
                break;
            }
            printf("Chon vi tri muon xoa trong mang: ");
            scanf("%d",&position);
            for(int i=position;i<n-1;i++){
            arr[i]=arr[i+1];
            }
            n--;
        }
        break;
        case 7:
        {
        if (n==0){
                printf("Mang chua duoc nhap!");
                break;
            }    
        for(int i=0; i<n-1; i++){
            int min_idx = i;
            for(int j=i+1; j>n; j++){
                if (arr[j] > arr[min_idx]){
                    min_idx = j;
                }
            }
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
            }
        }
        break;
        case 8:
        break;
        case 9:
        break;
        case 10:
        break;
        case 11:
        break;
        }
    }
    while(choose!=11);
}
