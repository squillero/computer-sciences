# FANTASY FOOTBALL

In the game of fantasy football, you need to form a virtual team made up of real players. Real footballers are
listed in the `fantafoot.txt` file, organized as follows:

surname, team, role, price

The players are listed in the file in alphabetical order by surname. The role of the player is one of the following:
goalkeeper, defender, midfielder, forward. The quote is a strictly positive integer and represents the
value (in Millions of Fanta_USDs) of the player.

The squad of the virtual team is made up of 25 players:

- 3 goalkeepers
- 8 defenders
- 8 midfielders
- 6 forwards.

The budget available to form the team is 260 Millions of Fanta_USDs.

Write a plan to form the virtual team squad. 20 Millions of Fanta_USDs are destined for goalkeepers, 40 for
defenders, 80 to midfielders and 120 to forwards. For each role, the program buys the most expensive footballer
among those that meet the following two conditions:

- the player's price is less than or equal to the budget
- after the purchase, at least as many Millions of Fanta_USDs as there are players of the same role must remain available
  still to buy.

The second condition ensures that you can buy all the players required for each position. Indeed, for each role there
are many players with a rating of 1 Millions of Fanta_USDs. For example, the budget for buying the first forward is 120 -
5 = 115 Millions of Fanta_USDs. If the price of the purchased forward is 56, the remaining budget is 120 - 56 = 64. The budget
for the purchase of the second forward it is therefore 64 - 4 = 60. For each role, the program prints on the screen the list of
players purchased and their price.

** N.B.: ** After purchasing a player, he must be removed from the list of real players to avoid
buy it a second time.

At the same price, there are no criteria on which player to buy (the choice is free).

If the budget for a role is not fully consumed, you can choose whether to add it to the budget for the role
next or lose it (both solutions are fine).

## Example file fantafoot.txt (for the sake of brevity, only the goalkeepers are shown, but the real file contains all the roles):

```text
Alia, Lazio, goalkeeper, 1
Aresti, Cagliari, goalkeeper, 1
Audero, Sampdoria, goalkeeper, 17
Advice, Sassuolo, goalkeeper, 14
Cragno, Cagliari, goalkeeper, 14
Donnarumma G, Milan, goalkeeper, 25
Dragowski, Fiorentina, goalkeeper, 21
Gollini, Atalanta, goalkeeper, 21
Handanovic, Inter Milan, goalkeeper, 20
Pau Lopez, Rome, goalkeeper, 18
Perin, Genoa, goalkeeper, 13
Skorupski, Bologna, goalkeeper, 11
Strakosha, Lazio, goalkeeper, 17
Szczesny, Juventus, goalkeeper, 22
```

## Example program output:

```text
Goalkeepers: Pau Lopez 18 Alia 1 Aresti 1

Defenders: Hakimi 33 Armini 1 Balogh 1 Good morning 1 Calafiori 1 Dragusin 1 Ferigra 1 Khailoti 1
 
Midfielders: Mkhitaryan 39 Chiesa 33 Anderson D 3 Adopo 1 Baldursson 1 Basit 1 Danzi 1 Ebongue 1
 
Forwards: C Ronaldo 56 Property 46 Caprari 15 Adorante 1 Case 1 Cleonise 1
```
