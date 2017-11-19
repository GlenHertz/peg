import pegs, os
const h = """Usage: peg <pattern> [<filename> <filename2> ...]]
If a filename is not provided then it will read input from stdin"""

let
  args = commandLineParams()
if len(args) < 1:
  echo h
  quit(1)
if len(args) > 0 and args[0] == "-h":
  echo h
  quit(0)

let
  pattern = args[0]
  p = peg(pattern)
  filenames = args[1..^1]

var
  matches: array[0.. MaxSubpatterns-1, string]
  line: TaintedString

proc fill[I,T](arr: var array[I, T], val: T) =
  for i in 0.. len(arr) - 1:
    arr[i] = val

proc grep(fh: File, p: Peg) =
    while readLine(fh, line):
      fill(matches, nil)
      if contains(line, p, matches):
        for i, m in pairs(matches):
          if m != nil:
            if i > 0:
              write(stdout, " ")
            write(stdout, m)
          elif i == 0:
            echo line
            break
          else:
            write(stdout, "\n")
            break

if len(filenames) == 0:
  grep(stdin, p)
  quit(0)

for file in filenames:
  if not fileExists(file):
    echo "Error: cannot read file: " & file
    quit(1)
  var fh = open(file, fmRead)
  grep(fh, p)
  close(fh)
