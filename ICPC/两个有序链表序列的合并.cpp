//
// Created by longxing on 19-8-2.
//

List Merge( List L1, List L2 ){
    List p1 = L1->Next, p2 = L2->Next;
    List C = (List)malloc(sizeof(struct Node));
    List p = c;
    while(p1 && p2){
        if(p1 -> Date > p2 -> Date){
            p->Next  =p2;
            p2 = p1->Next;
        }else {
            p->Next = p1;
            p1 = p1 -> Next;
        }
        p= p->Next;
    }
    if(p1) p->Next = p1;
    if(p2) p->Next = p2;
    L1->Next =Null;
    L2->Next = Null;
    return  c;
}