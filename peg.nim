import pegs, os

let
  args = commandLineParams()
  pattern = args[0]
  filenames = args[1..^1]

#echo "pattern: " & pattern
#echo "filenames: " & $filenames

let p = peg(pattern)
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
