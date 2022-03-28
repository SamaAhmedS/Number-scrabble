main_list = [i for i in range(1, 10)]
player1 = []
player2 = []


def can_choose_number(n):
    # check if the numbers are from 1 to 9 and not repeated
    if n in main_list and n not in player1 and n not in player2:
        return True
    else:
        return False


def play_turn(player_name, player_list):
    chosen_num = int(input("to the " + player_name + ", chose a number from 1 to 9 and not repeated "))
    while not can_choose_number(chosen_num):
        chosen_num = int(input("to the " + player_name + ", chose a number from 1 to 9 and not repeated "))
    player_list.append(chosen_num)
    # take the chosen numbers from the player


def the_winner(player_list):
    if len(player_list) == 3:
        return player_list[0]+player_list[1]+player_list[2] == 15
    elif len(player_list) == 4:
        return player_list[0]+player_list[1]+player_list[2] == 15 or player_list[0]+player_list[1]+player_list[3] == 15 or \
            player_list[0]+player_list[2]+player_list[3] == 15 or player_list[1] + player_list[2] + player_list[3] == 15
    elif len(player_list) == 5:
        return player_list[0]+player_list[1]+player_list[2] == 15 or player_list[0]+player_list[1]+player_list[3] == 15 or \
            player_list[0]+player_list[2]+player_list[3] == 15 or player_list[1] + player_list[2] + player_list[3] == 15 or\
            player_list[0]+player_list[1]+player_list[4] == 15 or player_list[1] + player_list[2] + player_list[4] == 15 or \
            player_list[2] + player_list[3] + player_list[4] == 15 or player_list[0] + player_list[3] + player_list[4] == 15 or \
            player_list[0] + player_list[2] + player_list[4] == 15 or player_list[1] + player_list[3] + player_list[4] == 15


while len(player1) < 5:
    play_turn('player1', player1)
    if the_winner(player1):
        print("the winner is player1")
        break
# if player1 had taken 5 numbers the game has finished
    if len(player1) < 5:
        play_turn('player2', player2)
        if the_winner(player2):
            print("the winner is player2")
            break

if not the_winner(player1) and not the_winner(player2):
    print(" game is a draw")
