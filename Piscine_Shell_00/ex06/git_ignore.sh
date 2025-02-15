git status --ignored --porcelain | awk '/^!! / {print $2}'
