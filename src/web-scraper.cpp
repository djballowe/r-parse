#include "../include/web-scraper.h"
#include <iostream>

std::string WebScraper::scrapeInfo(std::string url) {
    std::cout << "scraping webpage : " << std::endl;

    return downloader->downloadUrl(url);
}
