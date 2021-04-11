#include <sstream>
#include <vector>
#include "fileReaderClass.hpp"
#include "csv/csv.h"
#include "recordStruct.hpp"

fileReaderClass::fileReaderClass(const std::string &_path) {
    path = _path;
}

std::vector<BillboardSong> fileReaderClass::getData() {
    io::CSVReader<7, io::trim_chars<' '>, io::double_quote_escape<',', '"'>> in(path);
    std::string date, song, artist;
    std::vector<BillboardSong> songs;
    BillboardSong billboardSong;
    int rank, peak_rank, weeks_on_board;
    float last_week;
    in.read_header(io::ignore_extra_column, "date", "rank", "song", "artist", "last-week", "peak-rank",
                   "weeks-on-board");

    // for some reason, 'last_week' column has a comma in it
    // therefore we are unable to read it directly as an integer
    // it was necessary to read it as floating point and then cast to int
    while (in.read_row(date, rank, song, artist, last_week, peak_rank, weeks_on_board)) {
        billboardSong = BillboardSong{date, rank, song, artist, (int) last_week, peak_rank, weeks_on_board};
        songs.emplace_back(billboardSong);
    }
    return songs;
}

fileReaderClass::~fileReaderClass() = default;
