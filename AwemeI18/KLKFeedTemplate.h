//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KLKTemplate.h"

@class KLKContentObject, KLKSocialObject, NSArray, NSString;

@interface KLKFeedTemplate : KLKTemplate
{
    KLKContentObject *_content;
    KLKSocialObject *_social;
    NSString *_buttonTitle;
    NSArray *_buttons;
}

+ (id)feedTemplateWithBuilder:(id)arg1;
+ (id)feedTemplateWithBuilderBlock:(CDUnknownBlockType)arg1;
+ (id)feedTemplateWithContent:(id)arg1;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) KLKSocialObject *social; // @synthesize social=_social;
@property(copy, nonatomic) KLKContentObject *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)JSONObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBuilder:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)objectType;

@end

