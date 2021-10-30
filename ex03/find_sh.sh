find . -type f -name '*\.sh' -print | sed 's/.*\///; s/.sh$//'
