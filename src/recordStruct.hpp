#ifndef BILLBOARD_TOP100_RECORDSTRUCT_HPP
#define BILLBOARD_TOP100_RECORDSTRUCT_HPP

#include <string>

typedef struct billboardSong {
    int rank;
    int last_week;
    int peak_rank;
    int weeks_on_board;
    std::string date;
    std::string song;
    std::string artist;
} BillboardSong;

#endif //BILLBOARD_TOP100_RECORDSTRUCT_HPP
