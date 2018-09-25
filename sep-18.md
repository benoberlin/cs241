# Shell variables

Arguments:

- `$0`
- `$1`
- `$2`
- ...
- `${10}`

Last exit code: `$?`

# Test expression
`/usr/bin/test`
Will make an evaluation and returns
- 0 for true
- 1 for false

`/usr/bin/[`
Alias `[ $OPERATION_TO_CHECK ]`

## File tests

- `-e` True if file exists
- `-d` True if directory exists
- `file1 -nt file2` True if `file1` exists and is newer than `file2` 
- `file1 -ot file2` True if `file1` exists and is older than `file2`

# Internal Field Separator
```shell
IFS=':'
for dir in $PATH; do
  echo $dir
done
```

# Number tests
See man pages presentation

# String test
- `-n string` True if the lengths of string is nonzero
- `-z string` True if the lengths of string is zero
- `String` True if string is not the null string

See man pages or presentation...

> Tip: do `[ "X${var1}" = "X${var2} ]` (adding X before to ensure value is string)

# Shell debugging
(use within script, comes a after `#!/bin/sh`)
- `set -v` echos the lines of the procedure as they are read
- `set -n` prevents execution
- `set -x` execution trace, prints each command after parameter substitution
