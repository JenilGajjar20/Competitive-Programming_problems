## Greedy Darts 
It is desired to implement a type of darts game, where three types of game modes will be allowed:
1 = only single values sections can be used, double or triple setions are worth 0
2 = only double areas score, all other areas are worth 0
3 = only triple areas score, all other areas are worth 0
The centre of tha board is always 0. 

The aim is to archieve a specific score P, using the least number of darts and the selected game mode {1,2,3}

#### Example
To archieve P = 63 in game mode 3
We need a 20 and 1 with 2 shoots 

To archieve P = 146 in game mode 2
We need three 20 and 13 with 4 shoots 

#### Function Description

The function has the following parameter(s):
main:
- `int argc`: file that contains the game mode, the score P and the board

numDardosGreedy
- `set<int, zonas_comparador> zonas`: the game board 
- `int modo`: game mode 
- `int puntuacion`: score P

#### Returns

- returns if is possible find a Greedy solution, if is not, returns error.  


