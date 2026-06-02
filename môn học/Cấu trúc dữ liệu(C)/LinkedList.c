#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
struct Node{
    ElementType Element;
    struct Node* Next;
};
typedef struct Node* Position;
typedef struct Node* List;
void makenullList(List *pL){
    (*pL)=malloc(sizeof(struct Node));
    (*pL)->Next=NULL;
}
Position first(List L){
    return L;
}
Position endList(List L){
    Position P;
    P=first(L);
    while (P->Next!=NULL){
        P=P->Next;
    }
    return P;
}
Position Next(Position P, List L){
    return P->Next;
}
void insertList(int x, Position p, List *pL){
	Position t;
	t=malloc(sizeof(struct Node));
	t->Element=x;
	t->Next=p->Next;
	p->Next=t;
}
void addFirst(int x, List *pL){
    Position P=*pL;
    Position t;
    t=malloc(sizeof(struct Node));
    t->Element=x;
    t->Next=P->Next;
    P->Next=t;
}
void append(int x, List *pL){
	Position p=*pL;
	while (p->Next!=NULL) p=p->Next;
	Position t;
	t=malloc(sizeof(struct Node));
	t->Element=x;
	t->Next=NULL;
	p->Next=t;
}
void deleteList(Position p, List *pL){
	Position t;
	t=p->Next;
	p->Next=t->Next;
	free(t);
}
Position locate(ElementType x, List L){
	Position p=L;
	while (p->Next!=NULL){
		if (p->Next->Element==x) return p;
		else p=p->Next;
	}
	return p;
}
int member(int x, List L){
    Position p=L;
	while (p->Next!=NULL){
		if (p->Next->Element==x) return 1;
		else p=p->Next;
	}
	return 0;
}
void erase(int x, List *pL){
    Position P = locate(x, *pL);
    if(P->Next != NULL)
        deleteList(P, pL);
    else
        printf("Not found %d\n", x);
}
void removeAll(int x, List *pL){
    Position P=locate(x, *pL);
    while (P->Next!=NULL){
        deleteList(P, pL);
        P=locate(x, *pL);
    }
}
void normalize(List *pL){
    Position P=*pL;
    while (P->Next!=NULL){
        Position Q=P->Next;
        while (Q->Next!=NULL){
            if (P->Next->Element==Q->Next->Element) deleteList(Q, pL);
            else Q=Q->Next;
        }
        P=P->Next;
    }
}
void sort(List *pL){
    Position p, q, min;

    for(p = (*pL)->Next; p != NULL; p = p->Next){
        min = p;

        for(q = p->Next; q != NULL; q = q->Next){
            if(q->Element < min->Element)
                min = q;
        }

        int t = p->Element;
        p->Element = min->Element;
        min->Element = t;
    }
}
float getAVG(List L){
    float sum=0, cnt=0;
    while (L->Next!=NULL){
        sum+=L->Next->Element;
        cnt++;
        L=L->Next;
    }
    return sum/cnt;
}
void readList(List *pL){
    makenullList(pL);
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        append(x, pL);
    }
}
void printOddNumbers(List L){
    while (L->Next!=NULL){
        if (L->Next->Element%2!=0) printf("%d ", L->Next->Element);
        L=L->Next;
    }
    printf("\n");
}
void copyEvenNumbers(List L1, List *pL2){
    makenullList(pL2);
    while (L1->Next!=NULL){
        if (L1->Next->Element%2!=0) append(L1->Next->Element, pL2);
        L1=L1->Next;
    }
}
int main(){
    return 0;
}