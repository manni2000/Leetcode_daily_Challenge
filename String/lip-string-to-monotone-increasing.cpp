   int minFlipsMonoIncr(string s) {
        int flips = 0, counter=0;

        for(auto a: s){
            if(a=='1') counter++;
            else flips++;

            flips=min(flips, counter);
        }
        return flips;
    }