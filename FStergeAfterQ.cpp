void StergeAfterQ(nod *&prim,nod *&ultim, nod *q){

    nod *last = new nod;
    nod *next = new nod;

    if(prim != NULL){



        if(prim != ultim){

            if(prim == q){
                next = prim -> urm -> urm;
                prim -> urm = next;

                if(next != NULL)
                    next -> ant = prim;

            }else if(ultim != q){
                last = q;
                next = (q -> urm) -> urm;
                last -> urm = next;

                if(next != NULL)
                    next -> ant = last;

            }

        }

    }


}
