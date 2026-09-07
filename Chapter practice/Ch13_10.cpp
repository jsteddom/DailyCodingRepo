#include <iostream>


struct WebsiteAds {
    int ads { 0 };
    double adsClicked { 0 };
    double earnings { 0 };
};

void printWebStats(WebsiteAds mysite) {
    std::cout << "Your sites watched ads: " << mysite.ads << std::endl;
    std::cout << "Your sites percetange clicked ads: " << mysite.adsClicked << std::endl;
    std::cout << "Your sites average earnings per advertisement: " << mysite.earnings << std::endl;
    std::cout << "Total earnings today: " << (mysite.ads * mysite.adsClicked * mysite.earnings) << std::endl;
}

int main() {
    int ads { 0 };
    double adsClicked { 0 };
    double earnings { 0 };
    std::cout << "Enter ads watched: ";
    std::cin >> ads;
    std::cout << "\nEnter how many ads clicked on: ";
    std::cin >> adsClicked;
    std::cout << "\nEnter average ad earnings: ";
    std::cin >> earnings;

    WebsiteAds mySite {ads, adsClicked/ads, earnings};
    printWebStats(mySite);

    return 0;
}