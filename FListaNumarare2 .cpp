int cmmdc (int a, int b)
{
    if(b == 0)
        return a;
    return cmmdc(b, a % b);
}
 
int numarare (nod* p)
{
    int cnt = 0;
    if(!p)
        return 0;
    for (nod* q = p; q->urm; q = q->urm)
        for (nod* r = q->urm; r; r = r->urm)
        {
            if(cmmdc(q->info, r->info) == 1)
                cnt++;
        }
 
    return cnt;
}