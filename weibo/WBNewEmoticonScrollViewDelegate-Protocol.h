//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBEmoticon, WBVipEmoticon, WBVipEmoticonPackage;

@protocol WBNewEmoticonScrollViewDelegate <NSObject>
- (void)emoticonScrollViewUpdated:(id)arg1 currentPage:(unsigned long long)arg2;
- (void)emoticonDidSelectBackspace;
- (void)emoticonDidSelect:(WBEmoticon *)arg1;
- (void)gifChooseViewRemovePackage:(WBVipEmoticonPackage *)arg1;
- (void)gifChooseViewDownloadFinish:(WBVipEmoticonPackage *)arg1;
- (void)gifDidSelect:(WBVipEmoticon *)arg1;
@end

