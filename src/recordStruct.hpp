#ifndef BILLBOARD_TOP100_RECORDSTRUCT_HPP
#define BILLBOARD_TOP100_RECORDSTRUCT_HPP

#include <string>

typedef struct billboardSong {
    std::string date;
    int rank;
    std::string song;
    std::string artist;
    int last_week;
    int peak_rank;
    int weeks_on_board;
} BillboardSong;

#endif //BILLBOARD_TOP100_RECORDSTRUCT_HPP
