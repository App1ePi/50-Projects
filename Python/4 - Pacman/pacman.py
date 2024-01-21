def eat_ghost(powerPellet, touchingGhost):
    if powerPellet == True and touchingGhost == True:
        return True

    else:
        return False

def add_score(touchingPowerPellet, touchingDot):
    if touchingPowerPellet == True or touchingDot == True:
        return True
    
    else:
        return False

def game_lose(powerPellet, touchingGhost):
    if touchingPowerPellet == False and touchingGhost == True:
        return True

    else:
        return False

def game_win(allDots, powerPellet, touchingGhost):
    if touchingGhost == False:
        if allDots == True:
            return True
        else:
            return False
    else:
        return False
        
    if touchingGhost == True and powerPellet == True:
        if allDots == True:
            return True
        else:
            return False
    else:
        return False
        
