//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSearchJSONModel.h"

@class NSArray, NSString;

@interface TBXSearchHintModel : XSearchJSONModel
{
    NSString *_title;
    NSArray *_words;
    NSString *_rewriteQ;
    NSString *_img;
    NSString *_template2;
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *template2; // @synthesize template2=_template2;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *rewriteQ; // @synthesize rewriteQ=_rewriteQ;
@property(retain, nonatomic) NSArray *words; // @synthesize words=_words;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

