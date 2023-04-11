#ifndef STATUS_HPP
#define STATUS_HPP

enum mode{
    main_window,
    game
};

class Status
{
private:
    mode status_;
public:
    Status(mode stat): status_(stat){};
    Status() = default;
    void set_status(mode stat){ this->status_ = stat; }
    mode get_status(){ return this->status_; }
    ~Status() = default;
};

#endif
