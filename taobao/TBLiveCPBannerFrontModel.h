//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveCPVideoModel;

@interface TBLiveCPBannerFrontModel : TBJSONModel
{
    NSString *_type;
    NSString *_pic;
    NSString *_picUrl;
    TBLiveCPVideoModel *_liveVideoDo;
}

@property(retain, nonatomic) TBLiveCPVideoModel *liveVideoDo; // @synthesize liveVideoDo=_liveVideoDo;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

