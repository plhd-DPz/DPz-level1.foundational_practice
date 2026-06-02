#include <stdio.h>
typedef struct{
    char MSSV[10];
    char HoTen[50];
    float DiemLT, DiemTH1, DiemTH2;
}SinhVien;
typedef struct{
    SinhVien A[40];
    int n;
}DanhSach;
DanhSach dsRong(){
    DanhSach L;
    L.n=0;
    return L;
}
int ktRong(DanhSach L){
    return L.n==0;
}
void chenCuoi(SinhVien s, DanhSach *pL){
    if (pL->n==40) printf("Loi! Danh sach day!");
    else{
        pL->A[pL->n]=s;
        pL->n++;
    }
}
int tim(char x[], DanhSach L){
    for (int i=0;i<L.n;i++){
        if (strcmp(L.A[i].MSSV, x)==0) return i+1;
    }
    return L.n+1;
}
void hienthi(DanhSach L){
    for (int i=0;i<L.n;i++){
        printf("%s - %s - %.2f - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2, L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2);
    }
}
DanhSach nhap(){
    DanhSach L=dsRong();
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        SinhVien s;
        scanf("%s", s.MSSV);
        getchar();
        fgets(s.HoTen,40,stdin);
        s.HoTen[strcspn(s.HoTen, "\n")] = '\0';
        scanf("%f%f%f", &s.DiemLT, &s.DiemTH1, &s.DiemTH2);
        if (tim(s.MSSV,L)==L.n+1){
            chenCuoi(s, &L);
        }
    }
    return L;
}
void hienThiDS(DanhSach L){
    for(int i = 0; i < L.n; i++)
        hienThiSV(L.A[i]);
}
void hienthiDat(DanhSach L){
    for (int i=0;i<L.n;i++){
        if (L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2>=4)
            printf("%s - %s - %.2f - %.2f - %.2f - %.2f\n", L.A[i].MSSV, L.A[i].HoTen, L.A[i].DiemLT, L.A[i].DiemTH1, L.A[i].DiemTH2, L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2);
    }
}
DanhSach khongDat(DanhSach L){
    DanhSach KQ = dsRong();

    for(int i = 0; i < L.n; i++){
        if(L.A[i].DiemLT +
           L.A[i].DiemTH1 +
           L.A[i].DiemTH2 < 4.0)
        {
            chenCuoi(L.A[i], &KQ);
        }
    }

    return KQ;
}
DanhSach chepKhongDat(DanhSach L){
    DanhSach KD;
    KD.n=0;
    for (int i=0;i<L.n;i++){
        if (L.A[i].DiemLT+L.A[i].DiemTH1+L.A[i].DiemTH2<4){
            KD.A[KD.n]=L.A[i];
            KD.n++;
        }
    }
    return KD;
}
int main(){
    return 0;
}