//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface ArticleMomentListCellCommentItemManager : NSObject
{
    NSMutableSet *_commentItems;
    NSMutableSet *_reuseCommentItems;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableSet *reuseCommentItems; // @synthesize reuseCommentItems=_reuseCommentItems;
@property(retain, nonatomic) NSMutableSet *commentItems; // @synthesize commentItems=_commentItems;
- (void).cxx_destruct;
- (void)queueReusableCommentItem:(id)arg1;
- (id)dequeueReusableCommentItem;
- (void)dealloc;

@end

