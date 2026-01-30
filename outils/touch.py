import os
import sys
import pathlib
from datetime import datetime

def touch(target_path):
    path = pathlib.Path(target_path)
    try:
        if path.exists():
            # Update the access and modified times to 'now'
            os.utime(path, None)
            print(f"Updated timestamp for: {path}")
        else:
            # Create an empty file
            path.touch()
            print(f"Created new file: {path}")
    except Exception as e:
        print(f"Error touching {path}: {e}")

if __name__ == "__main__":
    # Supports multiple files: python touch.py file1.cc file2.h
    files = sys.argv[1:]
    if not files:
        print("Usage: python touch.py <filename1> <filename2> ...")
    else:
        for f in files:
            touch(f)
