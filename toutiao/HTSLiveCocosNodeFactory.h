//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LiveRoomModel;

@interface HTSLiveCocosNodeFactory : NSObject
{
    LiveRoomModel *_roomModel;
}

@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (id)transformToCocosUser:(id)arg1 name:(id)arg2 avatar:(id)arg3 honorUrl:(id)arg4 honorLevel:(id)arg5;
- (id)doodleWith:(id)arg1;
- (id)doodleNodeWith:(id)arg1;
- (id)enterNodeWith:(id)arg1;
- (id)barrigeNodeWith:(id)arg1;
- (id)diggNodeWith:(id)arg1;
- (id)giftNodeWith:(id)arg1;
- (id)initWithRoomModel:(id)arg1;

@end
