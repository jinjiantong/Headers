//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MFAttributeLabel.h"

@class TLDanmakuModel;

@interface TLDanmakuView : MFAttributeLabel
{
    TLDanmakuModel *_danmakuData;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) TLDanmakuModel *danmakuData; // @synthesize danmakuData=_danmakuData;
- (void).cxx_destruct;
- (void)removeScrollAnimation;
- (void)addScrollAnimation;
- (struct CGSize)danmakuSize:(struct CGSize)arg1;
- (id)init;

@end

