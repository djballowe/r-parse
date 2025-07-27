#pragma once

#include "downloader.h"
#include <iostream>
#include <memory>
#include <string>

class WebScraper {
private:
    std::unique_ptr<Downloader> downloader;

public:
    WebScraper() {
       downloader = std::make_unique<Downloader>();
    };

    std::string scrapeInfo(std::string url);
};
