#include <stdio.h>
#define MaxLength 100
typedef int ElementType;
typedef int Position;
typedef struct{
    ElementType Elements[MaxLength];
    Position Last;
}List;
void makenullList(List *pL){
    pL->Last=0;
    return;
}
int first(List L){
    return 1;
}
int endList(List L){
    return L.Last+1;
}
int retrieve(Position P, List L){
    return L.Elements[P-1];
}
int next(Position P, List L){
    return P+1;
}
int emptyList(List L){
    return L.Last==0;
}
int locate(ElementType X, List L){
    int Found=0;
    Position P=first(L);
    while (P!=endList(L) && !Found){
        if (retrieve(P, L) == X) Found=1;
        else P=next(P, L);
    }
    return P;
}
void insertSet(ElementType X, List *pL){
    pL->Elements[pL->Last]=X;
    pL->Last++;
}
void insertList(ElementType X, Position P, List *pL){
    if (pL->Last==MaxLength){
        printf("Danh sach day\n");
    }
    else if (P<first(*pL) || P>endList(*pL)){
        printf("Vi tri khong hop le\n");
    }
    else{
        for (int i=pL->Last; i>=P;i--){
            pL->Elements[i]=pL->Elements[i-1];
        }
        pL->Last++;
        pL->Elements[P-1]=X;
    }
}
void deleteList(int p, List *pL){
    if (p<1 || p>pL->Last){
        printf("Vi tri khong hop le\n");
    }
    else{
        for (int i=p-1;i<pL->Last;i++){
            pL->Elements[i]=pL->Elements[i+1];
        }
        pL->Last--;
    }
}
int member(int x, List L){
    for (int i=0;i<L.Last;i++){
        if (L.Elements[i]==x) return 1;
    }
    return 0;
}
void erase(int x, List *pL){
    int p=locate(x, *pL);
    if (p!=pL->Last+1){
        deleteList(p,pL);
    }
}
void normalize(List *pL){
    int p=1;
    while (p!=pL->Last+1){
        int q=p+1;
        while (q!=pL->Last+1){
            if (pL->Elements[p-1]==pL->Elements[q-1]){
                deleteList(q, pL);
            }
            else q++;
        }
        p++;
    }
}
void sort(List *pL){
    for (int i=0;i<pL->Last;i++){
        for (int j=i;j<pL->Last;j++){
            if (pL->Elements[i]>pL->Elements[j]){
                int temp=pL->Elements[i];
                pL->Elements[i]=pL->Elements[j];
                pL->Elements[j]=temp;
            }
        }
    }
}
float getAvg(List L){
    int sum=0;
    if (L.Last==0) return -10000.0000;
    for (int i=0;i<L.Last;i++){
        sum+=L.Elements[i];
    }
    return sum/(float)L.Last;
}
void unionSet(List L1, List L2, List *pL){
    makenullList(pL);
    for (int i=0;i<L1.Last;i++){
        insertSet(L1.Elements[i], pL);
    }
    for (int i=0;i<L2.Last;i++){
        if (!member(L2.Elements[i], *pL)) insertSet(L2.Elements[i], pL);
    }
}
void difference(List L1, List L2, List *pL){
    makenullList(pL);
    for (int i=0;i<L1.Last;i++){
        if(!member(L1.Elements[i], L2)) insertSet(L1.Elements[i], pL);
    }
}
void readList(List *pL){
    makenullList(pL);
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        insertList(x,i+1,pL);
    }
    return;
}
void printList(List L){
    for (int i=0;i<L.Last;i++){
        printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void printOddNumbers(List L){
    for (int i=0;i<L.Last;i++){
        if (L.Elements[i]%2!=0) printf("%d ", L.Elements[i]);
    }
    printf("\n");
}
void copyEvenNumbers(List L1, List *pL){
    makenullList(pL);
    for (int i=0;i<L1.Last;i++){
        if (L1.Elements[i]%2==0) insertList(L1.Elements[i], pL->Last+1, pL);
    }
}
int main(){
    return 0;
}