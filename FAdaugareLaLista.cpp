void adaugare(nod* &p, int x)
{
    if(!p)
    {
        p = new nod;
        p -> info = x;
        p -> urm = 0;
    }
    else
    {
        nod *q = p;
        while(q -> urm != nullptr)
            q = q -> urm;
        nod * r = new nod;
        r -> info = x;
        r -> urm = 0;
        q -> urm = r;
    }
}