//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneModel.h>

@class MQZPhotoPoiArea, MQZTimeLineBirth, NSDictionary, NSMutableArray, NSString;

@interface QZEventPhotoModel : QZoneModel
{
    NSMutableArray *_recommendAlbumList;
}

@property(retain, nonatomic) NSMutableArray *recommendAlbumList; // @synthesize recommendAlbumList=_recommendAlbumList;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *dateStr; // @dynamic dateStr;
@property(retain, nonatomic) NSString *descStr; // @dynamic descStr;
@property(nonatomic) long long eventDateForModify; // @dynamic eventDateForModify;
@property(retain, nonatomic) NSString *eventTitle; // @dynamic eventTitle;
@property(retain, nonatomic) NSString *festivalStr; // @dynamic festivalStr;
@property(nonatomic) _Bool hideYear; // @dynamic hideYear;
@property(retain, nonatomic) NSMutableArray *photoModels; // @dynamic photoModels;
@property(retain, nonatomic) MQZPhotoPoiArea *poiArea; // @dynamic poiArea;
@property(nonatomic) long long shootTime; // @dynamic shootTime;
@property(retain, nonatomic) MQZTimeLineBirth *timeLineBirth; // @dynamic timeLineBirth;
@property(retain, nonatomic) NSDictionary *uinNickDict; // @dynamic uinNickDict;
@property(nonatomic) long long uploadTime; // @dynamic uploadTime;

@end
