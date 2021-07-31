#!/bin/sh
find . -name '*.sh' | sed 's/.*\///' | awk -F '.' '{print $1}'

find			 procura arquivos, pastas etc (depende do que tu quiser procurar)
.				 Serve para indicar o diretório atual e as subpastas
-name '*.sh'

sed 's/.*\///'