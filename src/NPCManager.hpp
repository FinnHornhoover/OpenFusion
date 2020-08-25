#pragma once

#include "CNProtocol.hpp"
#include "PlayerManager.hpp"
#include "NPC.hpp"

#include <map>
#include <vector>

#define RESURRECT_HEIGHT 400

// this should really be called vec3 or something...
struct WarpLocation {
    int x, y, z;
};

namespace NPCManager {
    extern std::map<int32_t, BaseNPC> NPCs;
    extern std::map<int32_t, WarpLocation> Warps;
    extern std::vector<WarpLocation> RespawnPoints;
    void init();

    void updatePlayerNPCS(CNSocket* sock, PlayerView& plr);
    void npcWarpManager(CNSocket* sock, CNPacketData* data);
}
