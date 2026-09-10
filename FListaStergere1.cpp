void sterge(nod *&p, nod *q){
    
 	nod *t = new nod;
    nod *last = new nod;
    t = p;
    last = p;
    
    if(p == q)
     	p = p -> urm; // sterg primul element din lista 
    else{
        
        while(t != q){
            last = t;
            t = t -> urm;
        }        
        
        if(t -> urm == NULL) // sterg ultimul element din lista
            last -> urm = NULL;
        else last -> urm = t -> urm;
        
    }
    
}