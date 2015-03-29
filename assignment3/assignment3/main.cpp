//
//  main.cpp
//  Assignment3
//
//  Created by chiting on 14-9-30.
//  Copyright (c) 2014年 chiting. All rights reserved.
//

//  CSI2372
//  Assignment3
//  Zhiting Lin
//  6270830

#include <iostream>
#include "soccer_team.h"

int main(int argc, const char * argv[]) {
    SoccerTeam TeamA, TeamB("Team B");
    int random,score_member;
    
    for (int goal = 5; goal>0; goal--) {
        random = rand()%10 + 1;
        score_member = rand()%11;
        if (random>5) {
            TeamA.scores(score_member);
        }else{
            TeamB.scores(score_member);
        }
    }
    
    for (int yellowCard = 11; yellowCard > 0; yellowCard--) {
        random = rand()%10 + 1;
        score_member = rand()%11;
        if (random>5) {
            TeamA.carded(score_member);
        }else{
            TeamB.carded(score_member);
        }
    }
    
    TeamA.print();
    TeamB.print();
    return 0;
}

