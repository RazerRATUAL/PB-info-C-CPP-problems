unsigned nr_aparitii(char *sir, char *secventa){
    char *p = strstr(sir, secventa);
    if(p == nullptr)
        return 0;
    else
    return 1 + nr_aparitii(p + strlen(secventa), secventa);
}