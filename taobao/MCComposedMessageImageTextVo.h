//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCComposedMessageTextExtVo.h"

@class NSString;

@interface MCComposedMessageImageTextVo : MCComposedMessageTextExtVo
{
    NSString *_imageUrl;
    NSString *_image;
    long long _imageType;
}

@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)initWithDatas:(id)arg1;

@end

