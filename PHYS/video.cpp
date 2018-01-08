#include "video.h"
#include "ui_video.h"
//视频播放窗口
video::video(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::video)
{
/*    QMediaPlayer *player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("\MOVIE\ACI\3\tes.mp4"));
    player->setVolume(50);
    player->play();
*/
    ui->setupUi(this);
}

video::~video()
{
    delete ui;
}
