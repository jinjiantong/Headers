//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ReadInJoyComponentHelper : NSObject
{
}

+ (id)getArticleKey:(id)arg1;
+ (_Bool)KandianZhiTuSwitch;
+ (long long)getReadInJoyConfigureSwitch:(id)arg1;
+ (void)gdt_auto_test:(id)arg1 identifier:(id)arg2;
+ (void)gdt_auto_test_feed:(id)arg1 isAd:(_Bool)arg2;
+ (_Bool)canOpenLocalApp:(id)arg1;
+ (_Bool)isBigImgAppAdFeeds:(id)arg1;
+ (_Bool)isAppAdFeeds:(id)arg1;
+ (_Bool)isAdFeeds:(id)arg1;
+ (_Bool)isTopicCardUGCFeeds:(unsigned long long)arg1;
+ (_Bool)isTopicCardFeeds:(unsigned long long)arg1;
+ (void)allInOneJump:(id)arg1 viewController:(id)arg2;
+ (_Bool)isTopicFeeds:(unsigned long long)arg1;
+ (_Bool)isSubscribePublishTopic:(id)arg1;
+ (_Bool)isNotComponent:(id)arg1 channelType:(long long)arg2;
+ (unsigned long long)getFeedsTypeByKey:(id)arg1;
+ (unsigned long long)getFeedsIdByKey:(id)arg1;
+ (id)getFeedsKeyById:(unsigned long long)arg1 type:(unsigned long long)arg2;
+ (void)setComponet:(id)arg1 layout:(id)arg2 frame:(struct CGRect)arg3;
+ (double)setTopicTagLayout:(id)arg1 article:(id)arg2 startY:(double)arg3;
+ (double)setUGCVideoTitleLayout:(id)arg1 article:(id)arg2 startY:(double)arg3;
+ (double)setUGCPicLayout:(id)arg1 article:(id)arg2 startY:(double)arg3;
+ (struct CGRect)getUGCPicFrameWithModel:(id)arg1 startY:(double)arg2;
+ (id)getUGCFeedsContentCoverUrl:(id)arg1;
+ (_Bool)isUGCFeedsContent:(id)arg1;
+ (_Bool)isSocializedFeeds:(unsigned long long)arg1;
+ (_Bool)isHorizonCollectionView:(id)arg1;
+ (_Bool)isBiuTopicFeeds:(id)arg1;
+ (_Bool)isUGCFeeds:(unsigned long long)arg1;
+ (_Bool)isPGCFeed:(unsigned long long)arg1;
+ (id)getSummaryParseResult:(id)arg1 maxWidth:(double)arg2;
+ (id)getSummaryString:(id)arg1;
+ (id)getsubscribeNameAndSummaryParseResult:(id)arg1 maxWidth:(double)arg2;
+ (id)getsubscribeNameAndSummaryString:(id)arg1;
+ (void)updateNickNameWithUinArray:(id)arg1;
+ (id)getSocialBiuParseResult:(id)arg1 isBiu:(_Bool)arg2 maxWidth:(double)arg3 withNickNameChangeBlock:(CDUnknownBlockType)arg4;
+ (_Bool)isUGCAtMode:(id)arg1;
+ (id)getBiuMultiContent:(id)arg1 andRangeArray:(id)arg2 andNickArray:(id)arg3 ugcInfo:(id)arg4 isBiu:(_Bool)arg5;
+ (_Bool)hasBiuUGCCommentInArticle:(id)arg1;
+ (id)getNickNameStringByUin:(long long)arg1;
+ (_Bool)isCropConfigOpen;
+ (struct CGSize)closestSizeWithOriginSize:(struct CGSize)arg1 FromOptionalSizeArray:(id)arg2;
+ (id)urlStrWithPtSize:(struct CGSize)arg1 FromOriginUrlStr:(id)arg2 cellTitle:(id)arg3 optionalSizes:(id)arg4 keyword:(id)arg5;
+ (id)urlStrWithPtSize:(struct CGSize)arg1 FromOriginUrlStr:(id)arg2 cellTitle:(id)arg3;
+ (id)getLinesArrayOfStringInLabel:(id)arg1;
+ (_Bool)isSupportChangeLineBreak;
+ (_Bool)calculateIsNeedToChangeLineBreakForNoCacheInLabel:(id)arg1 model:(id)arg2;
+ (_Bool)isNeedToChangeLineBreakInLabel:(id)arg1 withModel:(id)arg2;
+ (double)heightForText:(id)arg1 fontSize:(double)arg2 constraintWidth:(double)arg3 constrainLength:(int)arg4;
+ (double)heightForTitleWithBold:(id)arg1 fontSize:(double)arg2 lineSpace:(double)arg3 constraintWidth:(double)arg4;
+ (double)heightForTitle:(id)arg1 fontSize:(double)arg2 lineSpace:(double)arg3 constraintWidth:(double)arg4;
+ (double)heightForTitle:(id)arg1 fontSize:(double)arg2 constraintWidth:(double)arg3;
+ (double)heightForTitle:(id)arg1 constraintWidth:(double)arg2;
+ (void)clearUinNickDicCache;
+ (id)uinNickDic;

@end

