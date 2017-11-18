import pegs, os

let
  args = commandLineParams()
  pattern = args[0]
  p = peg(pattern)
  filenames = args[1..^1]
var
  matches: array[0.. MaxSubpatterns-1, string]
  line: TaintedString

proc fill[I,T](arr: var array[I, T], val: T) =
  for i in 0.. len(arr) - 1:
    arr[i] = val

for file in filenames:
  if not fileExists(file):
    echo "Error: cannot read file: " & file
    quit(1)
  var fh = open(file, fmRead)
  while readLine(fh, line):
    fill(matches, nil)
    if contains(line, p, matches):
      for i, m in pairs(matches):
        if m != nil:
          echo m
        elif i == 0:
          echo line
          break

  close(fh)
