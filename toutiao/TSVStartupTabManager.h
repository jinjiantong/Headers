//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSVStartupTabManager : NSObject
{
    _Bool _shortVideoTabViewControllerVisibility;
    _Bool _detailViewControllerVisibility;
    _Bool _inShortVideoTabViewController;
}

+ (id)sharedManager;
@property(nonatomic) _Bool inShortVideoTabViewController; // @synthesize inShortVideoTabViewController=_inShortVideoTabViewController;
@property(nonatomic) _Bool detailViewControllerVisibility; // @synthesize detailViewControllerVisibility=_detailViewControllerVisibility;
@property(nonatomic) _Bool shortVideoTabViewControllerVisibility; // @synthesize shortVideoTabViewControllerVisibility=_shortVideoTabViewControllerVisibility;
- (_Bool)shouldEnterShortVideoTabWhenStartup;
- (id)init;

@end

