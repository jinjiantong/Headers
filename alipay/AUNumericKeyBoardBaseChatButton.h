//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface AUNumericKeyBoardBaseChatButton : UIButton
{
    double _lineSize;
    CDUnknownBlockType _pressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pressBlock; // @synthesize pressBlock=_pressBlock;
- (void).cxx_destruct;
- (void)drawEdgingWithRect:(struct CGRect)arg1;
- (void)drawBackgroundColorWithRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (float)lineSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

