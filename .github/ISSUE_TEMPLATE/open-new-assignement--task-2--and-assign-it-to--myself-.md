---
name: Open new assignement [Task-2] and assign it to <myself>
about: "\U0001F516 List out of an integer."
title: "[Task-2 Assignement]"
labels: enhancement, good first issue, training
assignees: ''

---

Fork the repository [linux-hobby-club](https://github.com/karastoyanov/linux-hobby-club)if you didn't do it yet. 

Write an application which takes a random integer in the range between 19999 - 99999 and creates a new list where every index is separate digit from the initial integer. You program should return also:
* The max number from the list
* The min number from the list
* The total sum of the list
* The sum between max and min number
:warning: If the sum number between max and min is odd number, your code should repeat again

➡️ Example: 
* Random integer input = `43756`
* List = `[4, 3, 7, 5, 6]`
* Max number = `7`
* Min number =  `3`
* Sum Min/Max = `10` // Stop the program

➡️ Example: 
* Random integer input = 23431
* List = `[2, 3, 4, 3, 1]`
* Max number = `4`
* Min number = `1`
* Sum Min/Max = `5` // Repeat until sum min/max % 2 == 0

:warning: As before, all pull requests should be opened to [karastoyanov:development](https://github.com/karastoyanov/linux-hobby-club/tree/development) branch. Put your code in the respective directory and try to be descriptive.
