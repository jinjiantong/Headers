//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBDetailHint : NSObject
{
}

+ (id)createHintView:(id)arg1 subTitle:(id)arg2 iconFont:(id)arg3 toView:(id)arg4 yPos:(double)arg5;
+ (id)createHintView:(id)arg1 subTitle:(id)arg2 iconType:(unsigned long long)arg3 toView:(id)arg4 yPos:(double)arg5;
+ (id)createIconLabel:(id)arg1 padding:(double)arg2;
+ (id)getIconFontStrByType:(unsigned long long)arg1;
+ (id)createTextLabel:(id)arg1 padding:(double)arg2 fontSize:(long long)arg3 contentWidth:(double)arg4;
+ (void)showNaviBarToast:(id)arg1 withVC:(id)arg2 originY:(float)arg3 displayTime:(float)arg4 target:(id)arg5 action:(SEL)arg6;
+ (void)toast:(id)arg1 subTitle:(id)arg2 toView:(id)arg3 iconFont:(id)arg4;
+ (void)toast:(id)arg1 subTitle:(id)arg2 toView:(id)arg3 iconType:(unsigned long long)arg4;
+ (void)toast:(id)arg1 toView:(id)arg2 iconType:(unsigned long long)arg3;
+ (void)toastTransparency:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 postion:(int)arg4 iconType:(unsigned long long)arg5;
+ (void)toast:(id)arg1 subTitle:(id)arg2 toView:(id)arg3 displaytime:(float)arg4 postion:(int)arg5 iconFont:(id)arg6;
+ (void)toast:(id)arg1 subTitle:(id)arg2 toView:(id)arg3 displaytime:(float)arg4 postion:(int)arg5 iconType:(unsigned long long)arg6;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 postion:(int)arg4 iconType:(unsigned long long)arg5;
+ (void)toast:(id)arg1 toView:(id)arg2 displaytime:(float)arg3 iconType:(unsigned long long)arg4;

@end

