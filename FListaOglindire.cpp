
void oglindire(nod* & p)
{
    nod *prev = NULL;
    nod *current = p;

    while(current) {
        nod *nxt = current->urm;
        current->urm = prev;
        prev = current;
        current = nxt;
    }
    p = prev;
}
