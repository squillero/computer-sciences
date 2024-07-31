# Copyright © 2023 Giovanni Squillero <giovanni.squillero@polito.it>
# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.

FILENAME = "20231219 actions_carl.txt"
NUM_BOXES = 42


def add_object(boxes, object):
    """Add object to boxes, return True if no problem"""
    if object not in boxes:
        boxes[object] = 0
    boxes[object] += 1
    return len(boxes) <= NUM_BOXES


def remove_object(boxes, object):
    """Remove an object from boxes, return True if no problem"""
    if object not in boxes:
        return False
    else:
        boxes[object] -= 1
        if not boxes[object]:
            del boxes[object]
        return True


def main():
    magic_boxes = dict()

    try:
        with open(FILENAME) as actions:
            for line in actions:
                _, action, _, object = line.split()
                print(action, object)
                if action == "gives":
                    if not add_object(magic_boxes, object):
                        exit(
                            f"Yeuch! All {NUM_BOXES} boxes are full (can't add a {object})"
                        )
                elif action == "takes":
                    if not remove_object(magic_boxes, object):
                        exit(f"Yeuch! No box with {object}")
    except OSError:
        exit("Yeuch!")


if __name__ == "__main__":
    main()
