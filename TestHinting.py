import sys
def showName(_name: str) -> None:
    print(f"Hello {_name}")
name: str = sys.stdin.readline().strip()
showName(name)