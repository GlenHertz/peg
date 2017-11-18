import pegs, os

let
  args = commandLineParams()
  pattern = args[0]
  p = peg(pattern)
  filenames = args[1..^1]
var
  matches: seq[string] = @[]
  line: TaintedString

for file in filenames:
  if not fileExists(file):
    echo "Error: cannot read file: " & file
    quit(1)
  var fh = open(file, fmRead)
  while readLine(fh, line):
    if contains(line, p):
      echo line
  close(fh)
