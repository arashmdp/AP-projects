#ifndef FILMS_H
#define FILMS_H

#include "Comment.h"

#include <map>
#include <vector>
#include <string>

class User; 

class Film {
public:
    Film(std::map <std::string,std::string> _info, User* _thePublisher, int _filmID);
    void edit(std::map<std::string,std::string> editMap);
    void setRate(int _rate);
    void setComment(Comment* comment);
    void buy();

    std::map<std::string,std::string> getMapInfo() const;
    int getID() const;
    int getRate() const;
    int getPrice() const;
    User* getUser() const;
    int getNumberPurchased() const;
    std::vector<Comment*> getComments() const;

private:
    std::map <std::string,std::string> info;
    User* thePublisher;
    int id;
    std::vector<int> rates;
    int aveRate;
    int numberPurchased = 0;
    std::vector<Comment*> comments;

};

#endif