//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BEEBarPopMenu;

@protocol BEEBarPopMenuDelegate <NSObject>
- (void)popMenu:(BEEBarPopMenu *)arg1 didSelectAtIndex:(int)arg2;

@optional
- (void)popMenuDidCancel:(BEEBarPopMenu *)arg1;
@end

