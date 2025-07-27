#include "../include/downloader.h"
#include <iostream>
#include <string>

std::string Downloader::downloadUrl(std::string url) {
    std::cout << "Downloading page from url: " << url << std::endl;

    return R"(
        <div>some html</div>
    )";
}
