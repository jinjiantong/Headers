//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBPayInterface : NSObject
{
}

+ (void)configurationWithUserID:(id)arg1 gsid:(id)arg2 schemeString:(id)arg3;
+ (void)showPasswordFieldViewWithUserID:(id)arg1 gsid:(id)arg2 params:(id)arg3 callback:(CDUnknownBlockType)arg4;
+ (void)showHostSettingPageWithUserID:(id)arg1 gsid:(id)arg2;
+ (void)showCheckstandPageWithUserID:(id)arg1 gsid:(id)arg2 payParam:(id)arg3 schemeString:(id)arg4;
+ (void)showChargeMoneyPageWithUserID:(id)arg1 gsid:(id)arg2 schemeString:(id)arg3;
+ (void)showWithdrawMoneyPageWithUserID:(id)arg1 gsid:(id)arg2 schemeString:(id)arg3;
+ (id)topViewControllerWithRootViewController:(id)arg1;
+ (void)showController:(id)arg1;

@end

