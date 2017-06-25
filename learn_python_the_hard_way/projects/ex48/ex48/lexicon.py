def scan(line):
    words = line.split()
    result = []
    for word in words:
        type = checker(word.lower())
        if type == 'number':
            result.append((type, int(word)))
        else:
            result.append((type, word))
    return result

def checker(word):
    options = {
        "direction": ['north', 'south', 'east', 'west', 'down', 'up', 'left', 'right', 'back'],
        "verb": ['go', 'stop', 'kill', 'eat'],
        "stop": ['the', 'in', 'of', 'from', 'at', 'it'],
        "noun": ['door', 'bear', 'princess', 'carbinet']
    }

    if word.isdigit():
        # if it's a number
        return 'number'
    for rule, rule_list in options.items():
        if word in rule_list:
            # if it match any rule above
            return rule
    return 'error'
