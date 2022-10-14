/* 
Name: Tiffanie KU
This project creates a social media application using two class, Account and Post. 
*/

#include "Post.hpp"
#include <iostream>

/**
 * Post constructor:
 * @param title  : The title of the post.
 * @param body   : The body content of the post.
 * 
 * Sets title and body of the Post to what was passed by user.
 * Generates and stores current time in variable "time".
 */
Post::Post(std::string title, std::string body) 
{
    this->title_ = title;
    this->body_ = body;  

    this->time_stamp_ = std::time(0);
}

/** 
 * @param title  : reference to title of post.
 * 
 * Sets title of the Post to new title passed by.
 */
void Post::setTitle(const std::string &title)
{
    this->title_ = title;
}

/** 
 * @return: returns the title of the Post.
 */
std::string Post::getTitle() const
{
    return this->title_;
}

/** 
 * @param body  : reference to body of post.
 * 
 * Sets body of the Post to new body passed by user.
 */
void Post::setBody(const std::string &body)
{
    this->body_ = body;
}

/** 
 * @return  : returns the body of post.
 */
std::string Post::getBody() const
{
    return this->body_; 
}

/** 
 * @post  :  prints the time the Post was created.
 */
void Post::getTimeStamp() const
{
    std::cout << asctime(localtime(&time_stamp_));
}

//Prints the title, body, and time of the Post. 
void Post::displayPost()
{
    std::cout << getTitle() << " posted at ";
    getTimeStamp();
    std::cout << ":" << std::endl << getBody() <<std::endl;
}