# SOCCER STATS

You are asked to write a Python program able to compute the statistics regarding the last soccer world coup edition. You have a file named `player_stats.csv` containing the information regarding any soccer player involved in the last world coup edition in 2022. The file is a Comma Separated Values (csv) file saved using Unicode format. The first line in the file contains the mane of all the different fields. From the second line on, information for every soccer player is given according to the following fields:

```
player - player name
position -  position (GK goalkeeper, DF Defender, MF Midfield player, FW Forward player)
team -  Nationality
birth_year - Birth year
minutes - Minutes played
goals - Goals 
assists - Goal Assists 
offsides - Offsides 
crosses -  Reached crosses
interceptions -  Intercepted balls
tackles_won - Tackles won
pens_conceded -  Fouls committed
ball_recoveries - Recovered balls
aerials_won - Aerial duels won
aerials_lost - Aerial duels lost
```

The program must find and print the more **efficient Midfield and Forward players** according to the next metrics:

>Forward_efficiency = (Goals / Minutes played) + (Goal Assists / Minutes played) - (Offsides / Minutes played)

>Midfield_efficiency = (Intercepted balls + Recovered balls + (Goal Assists  / Reached crosses) / Minutes played)

The program must also find and print the **three teams** having the **lower average age**, assuming 2022 as the reference year.

Finally, it is necessary to find the most **efficient team**. The team efficiency is computed by adding the efficiency of its three most efficient forward players.

## Example

***File player_stats.csv***

```
player,position,team,birth_year,minutes,goals,assists,offsides,crosses,interceptions,tackles_won,pens_conceded,ball_recoveries,aerials_won,aerials_lost
Aaron Mooy,MF,Australia,1990,360,0,0,0,10,3,6,0,35,2,3
Aaron Ramsey,MF,Wales,1990,266,0,0,0,5,0,0,0,19,0,2
Abdelhamid Sabiri,MF,Morocco,1996,181,0,1,0,1,5,1,0,7,2,2
Abdelkarim Hassan,DF,Qatar,1993,270,0,0,1,6,1,3,0,11,3,1
Abderrazak Hamdallah,FW,Morocco,1990,68,0,0,0,0,0,0,0,4,1,7
Abdessamad Ezzalzouli,FW,Morocco,2001,93,0,0,0,1,0,2,0,4,1,2
```

***output***

```
Name                           Team                             Forward efficiency
Abdelhamid Sabiri              Morocco                                       0.006
Aaron Mooy                     Australia                                     0.000
Aaron Ramsey                   Wales                                         0.000

Name                           Team                            Midfield efficiency
Aaron Mooy                     Australia                                     0.106
Abdelhamid Sabiri              Morocco                                       0.072
Aaron Ramsey                   Wales                                         0.071

The three teams with lower age average are:
Morocco              26.33 years
Qatar                29.00 years
Australia            32.00 years

The most efficient team is Morocco
Abdelhamid Sabiri's forward efficiency: 0.006
Abderrazak Hamdallah's forward efficiency: 0.000
Abdessamad Ezzalzouli's forward efficiency: 0.000
```
