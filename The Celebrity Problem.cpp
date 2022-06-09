int findCelebrity(int n) {
 	int celeb=0;
    for(int i=1;i<n;i++){
        if(knows(celeb,i)) celeb=i;
    }
    for(int i=0;i<n;i++){
        if( knows(celeb,i) or (!knows(i,celeb) and celeb!=i) ) return -1;
    }
    return celeb;
}
