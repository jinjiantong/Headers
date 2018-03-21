//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage;

@interface TTFShareMessage : NSObject
{
    _Bool _isURLOnly;
    _Bool _isImageOnly;
    NSString *_title;
    NSString *_text;
    NSString *_url;
    UIImage *_image;
}

@property(nonatomic) _Bool isImageOnly; // @synthesize isImageOnly=_isImageOnly;
@property(nonatomic) _Bool isURLOnly; // @synthesize isURLOnly=_isURLOnly;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
