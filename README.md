# peg
A version of grep with PEGs instead of regular expressions

This uses Parsing Expression Grammars (PEG) expressions to print out lines in a file.  It also supports selectively printing of captures.  For more info on PEGs:

* [Syntax manual](https://nim-lang.org/docs/pegs.html).  Use this to determine what PEG syntax to use.
* [Tutorial](https://github.com/PhilippeSigaud/Pegged/wiki/PEG-Basics)
* [Site](http://bford.info/packrat/) from the inventor

## Examples

Using the following password file:

```
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:Daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
syslog:x:104:108:System Logger:/home/syslog:/bin/false
_apt:x:105:65534:Package Manager:/nonexistent:/bin/false
lxd:x:106:65534:Container Hypervisor:/var/lib/lxd/:/bin/false
messagebus:x:107:111:Message Bus:/var/run/dbus:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
sshd:x:110:65534:SSH Daemon:/var/run/sshd:/usr/sbin/nologin
```

To find all lines that contain "false":

```
$ peg "'false'" passwd
syslog:x:104:108:System Logger:/home/syslog:/bin/false
_apt:x:105:65534:Package Manager:/nonexistent:/bin/false
lxd:x:106:65534:Container Hypervisor:/var/lib/lxd/:/bin/false
messagebus:x:107:111:Message Bus:/var/run/dbus:/bin/false
dnsmasq:x:109:65534:dnsmasq,,,:/var/lib/misc:/bin/false
```

Note: the above can be written as `peg false passwd` since the whole PEG expression is a single expression so identifiers are interpretted as literals.

To find lines that start with `bin`:

```
$ peg "^'bin'" passwd  # or:
$ peg ^bin passwd
bin:x:2:2:bin:/bin:/usr/sbin/nologin
```

To print usernames of lines that end with `nologin`:

```
$ peg "^ @@':' @'nologin' $" passwrd
daemon
bin
sys
sshd
```

To print all usernames who have an id in the 100s and a full name that starts with a capital letter:

```
$ peg "@@':x:' '1' [0-9] [0-9] ':' @':' [A-Z]" passwd
syslog
_apt
lxd
messagebus
sshd
```

Print full names that have a lower or upper case `p`:

```
$ peg "@':x:' @':' @':' @@':'" passwd | peg "i'p'"
Package Manager
Container Hypervisor
```

Print username and user id if the user name is the same as the full name:

```
$ peg "s <- {user} ':x:' {\d+} ':' \d+ ':' user ""user <- [a-z]+" passwd
root 0
bin 2
sys 3
sync 4
dnsmasq 109






