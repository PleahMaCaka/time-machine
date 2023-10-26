from time import sleep

_DEFAULT_PAST_TIME_SECONDS = -1000


def go_past(sec: int = _DEFAULT_PAST_TIME_SECONDS):
    sleep(sec)
    # do something you want!
