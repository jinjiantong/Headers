//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface KSPreviewMainStageCellItem : NSObject
{
    _Bool _highlight;
    NSString *_onImageName;
    NSString *_offImageName;
    NSString *_title;
    NSNumber *_identity;
    CDUnknownBlockType _selectBlock;
}

+ (id)itemsWithTab:(int)arg1;
+ (id)itemWithType:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) NSNumber *identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *offImageName; // @synthesize offImageName=_offImageName;
@property(retain, nonatomic) NSString *onImageName; // @synthesize onImageName=_onImageName;
- (void).cxx_destruct;

@end
