//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TTPopTipItem : NSObject
{
    int _type;
    CDUnknownBlockType _block;
    NSString *_tipDesc;
    NSString *_tipBtnTitle;
    UIImage *_tipActionImage;
}

@property(retain, nonatomic) UIImage *tipActionImage; // @synthesize tipActionImage=_tipActionImage;
@property(copy, nonatomic) NSString *tipBtnTitle; // @synthesize tipBtnTitle=_tipBtnTitle;
@property(copy, nonatomic) NSString *tipDesc; // @synthesize tipDesc=_tipDesc;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

