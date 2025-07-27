#include "../include/web-scraper.h"
#include <string>

int main() {
    WebScraper scraper;
    std::string html = scraper.scrapeInfo("https://some-site.com");

    std::cout << html << std::endl;
}
