//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTextLabel.h"

@class TBSNSCustomRichTextInfos;

@interface TBSNSCustomRichTextLabel : TBTextLabel
{
    TBSNSCustomRichTextInfos *_infos;
}

@property(retain, nonatomic) TBSNSCustomRichTextInfos *infos; // @synthesize infos=_infos;
- (void).cxx_destruct;
- (void)setTextValue:(id)arg1 withInfos:(id)arg2 andFont:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
