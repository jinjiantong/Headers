//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@class NSString, QQReadInJoySubsVideoCell, QQReadInJoyVideoView, ReadInJoyChannel, ReadInJoyChannelArticle, UIButton, UIImage, UIView;

@protocol QQReadInJoySubsVideoCellDelegate <NSObject>
- (void)readInJoySubsVideoCell:(QQReadInJoySubsVideoCell *)arg1 progressUpdateToCurrentTime:(double)arg2 duration:(double)arg3;
- (void)onNatureSizeLoaded:(QQReadInJoySubsVideoCell *)arg1 videoSize:(struct CGSize)arg2;
- (void)onPlayerStateButtonClicked:(QQReadInJoySubsVideoCell *)arg1;
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 playerView:(UIView *)arg2 parentView:(UIView *)arg3 onEnterFullScreen:(_Bool)arg4;
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 onStopPlayVideo:(double)arg2 currentImage:(UIImage *)arg3 articleID:(unsigned long long)arg4;
- (void)onStartPlayVideo:(QQReadInJoySubsVideoCell *)arg1;
- (_Bool)shouldPlayVideo:(QQReadInJoySubsVideoCell *)arg1 player:(QQReadInJoyVideoView *)arg2;

@optional
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 didClickCommentButton:(UIButton *)arg2;
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 willDisplaySubChannelLabel:(ReadInJoyChannel *)arg2;
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 fullScreenWillActive:(_Bool)arg2;
- (void)tableViewCell:(QQReadInJoySubsVideoCell *)arg1 itemFullScreenWillActive:(_Bool)arg2;
- (void)onAvatarClickAtCell:(QQReadInJoySubsVideoCell *)arg1 withUin:(NSString *)arg2;
- (void)onReadInJoySubsVideoCellClick:(QQReadInJoySubsVideoCell *)arg1;
- (void)readInJoySubsVideoCell:(QQReadInJoySubsVideoCell *)arg1 shareWithChannelArticle:(ReadInJoyChannelArticle *)arg2;
- (void)onReadInJoySubsVideoCellBiuClick:(QQReadInJoySubsVideoCell *)arg1;
- (void)readInJoySubsVideoCell:(QQReadInJoySubsVideoCell *)arg1 didChangeState:(int)arg2;
- (void)onReadInJoySubsVideoCellLabelClick:(QQReadInJoySubsVideoCell *)arg1 channelInfo:(ReadInJoyChannel *)arg2;
- (void)onReadInJoySubsVideoCellTitlelableClick:(QQReadInJoySubsVideoCell *)arg1;
- (void)onPlayVideoErrorWithErrorCode:(QQReadInJoySubsVideoCell *)arg1 ErrorCode:(long long)arg2;
@end

