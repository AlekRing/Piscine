find . -depth -not -path "*\/.*" | wc -l | sed 's/^[ \t]*//'
