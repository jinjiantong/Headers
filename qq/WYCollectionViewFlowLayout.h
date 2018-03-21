//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <QQMainProject/NSCopying-Protocol.h>

@interface WYCollectionViewFlowLayout : UICollectionViewFlowLayout <NSCopying>
{
    _Bool _autoSpace;
    long long _columnCount;
    long long _zoomMinColumnCount;
    long long _zoomMaxColumnCount;
    long long _zoomVolumeToColumnCountChange;
}

+ (double)autoDefaultMinimumInteritemSpacingWithColumnCount:(long long)arg1 sectionInset:(struct UIEdgeInsets)arg2;
@property(nonatomic) long long zoomVolumeToColumnCountChange; // @synthesize zoomVolumeToColumnCountChange=_zoomVolumeToColumnCountChange;
@property(nonatomic) long long zoomMaxColumnCount; // @synthesize zoomMaxColumnCount=_zoomMaxColumnCount;
@property(nonatomic) long long zoomMinColumnCount; // @synthesize zoomMinColumnCount=_zoomMinColumnCount;
@property(nonatomic, getter=isAutoSpace) _Bool autoSpace; // @synthesize autoSpace=_autoSpace;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
