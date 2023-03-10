// :::: Question 1 ::::
// Numbers containing 1, 2 and 3

// problem statement:::
// https://practice.geeksforgeeks.org/.../numbers.../1

// :::: Solution ::::

void findAll() {
    mp[1] = mp[2] = mp[3] = 1;
    for(int i=11;i<=1000000;i++){
        if(i % 10 >= 1 && i % 10 <= 3 && mp[i/10] == 1){
            mp[i] = 1;
        }
    }
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Maximum AND Value

// problem statement:::
// https://practice.geeksforgeeks.org/.../maximum-and.../1

// :::: Solution ::::

-------NOT DONE--------
