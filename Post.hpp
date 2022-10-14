#ifndef POST_HPP_
#define POST_HPP_

#include <ctime>
#include <string>

class Post
{
    public:
        //Constructor for Post class.
        Post(std::string title, std::string body);

        //Accessor and mutator functions for title.
        void setTitle(const std::string &title);
        std::string getTitle() const;

        //Accesssor and mutator functions for body.
        void setBody(const std::string &body);
        std::string getBody() const;

        //Accessor function for time.
        void getTimeStamp() const;

        //Displays title, body, and time.
        void displayPost();

    private:
        std::string title_;
        std::string body_;
        time_t time_stamp_;
    
};

#endif