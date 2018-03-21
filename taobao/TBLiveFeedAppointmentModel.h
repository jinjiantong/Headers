//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBLiveFeedAccountModel;

@interface TBLiveFeedAppointmentModel : TBJSONModel
{
    NSString *_feedId;
    NSString *_title;
    NSString *_appointmentTime;
    NSString *_coverImg;
    NSString *_alert;
    NSString *_nativeFeedDetailUrl;
    TBLiveFeedAccountModel *_accountDO;
}

@property(retain, nonatomic) TBLiveFeedAccountModel *accountDO; // @synthesize accountDO=_accountDO;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *appointmentTime; // @synthesize appointmentTime=_appointmentTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;

@end
