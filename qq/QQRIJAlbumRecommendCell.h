//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQRIJAlbumPageScrollViewCell.h>

@class QQRIJAlbumPhotoRecommendModel, QQRIJAlbumRecommendView;

@interface QQRIJAlbumRecommendCell : QQRIJAlbumPageScrollViewCell
{
    QQRIJAlbumRecommendView *_recommendView;
    QQRIJAlbumPhotoRecommendModel *_dataSource;
    id _touchDelegate;
}

@property(nonatomic) __weak id touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(retain, nonatomic) QQRIJAlbumPhotoRecommendModel *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) QQRIJAlbumRecommendView *recommendView; // @synthesize recommendView=_recommendView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

