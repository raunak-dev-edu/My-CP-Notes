// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0pndUFDYldnZU95VHg5NnJlaGlsdG9HRnNwQXxBQ3Jtc0tuSEFMay1SVnVTdVE0SkZOZVd3Uk5mSE9LNjNmYkNYek5pUHI5eDhhR3BON3JVOEx1bFRXYVZPWEpsUW5CSXUzb1IzZ2MxWG1CUzQ1Zm0xbmRsTXpNbllkNy1hZnJ0aXBObS1JY19tN3BYZVNpaDBBOA&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fcircular-tour%2F1&v=_gJ3to4RyeQ
/*
->Circular tour

int tour(petrolPump p[], int n){
    int deficit =0;
    int balance =0;
    int start =0;

    for(int i =0; i<n; i++){
        balance += p[i].petrol - p[i].distance;
        if(balance<0){
            deficit += balance;
            start = i+1;
            balance = 0;
        }
    }
    if(deficit + balance >= 0){
        return start;
    }
    else{
        return -1;
    }
}



*/