//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QZJPhotoAlbum;
@protocol QZAlbumCoverViewDelegate;

@interface QZAlbumCoverShareUserView : UIView
{
    _Bool _clickToInvite;
    long long _status;
    QZJPhotoAlbum *_albumInfo;
    _Bool _showJoinShareAlbumBtn;
    id <QZAlbumCoverViewDelegate> _delegate;
}

+ (id)shareViewWithFrame:(struct CGRect)arg1 albumInfo:(id)arg2 isHost:(_Bool)arg3 selfUin:(long long)arg4;
@property(nonatomic) _Bool showJoinShareAlbumBtn; // @synthesize showJoinShareAlbumBtn=_showJoinShareAlbumBtn;
@property(nonatomic) __weak id <QZAlbumCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onClickMultiView:(id)arg1;
- (id)titleOfShareUserStatus:(long long)arg1;
- (int)colorOfShareUserStatus:(long long)arg1;
- (long long)getStatusWithFaceUsersCount:(long long)arg1 isHost:(_Bool)arg2 selfAttr:(id)arg3 visitingAlbumOwner:(_Bool)arg4;
- (void)buildWithAlbumInfo:(id)arg1 isHost:(_Bool)arg2 selfUin:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 albumInfo:(id)arg2 isHost:(_Bool)arg3 selfUin:(long long)arg4;

@end
