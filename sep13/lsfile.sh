#!/bin/sh

FILENAME="this file has spaces"

echo "No quotes:"
ls -l $FILENAME
echo "Quotes:"
ls -l "$FILENAME"
echo "Double Quotes:"
ls -l ""$FILENAME""

if [$1 = "-h"]; then
    echo "This does pretty much nothing. Thanks!"
fi
