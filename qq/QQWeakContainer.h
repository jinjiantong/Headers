//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQWeakContainer : NSObject
{
    id _target;
    id _strongTarget;
    NSString *_targetDescription;
}

@property(retain, nonatomic) NSString *targetDescription; // @synthesize targetDescription=_targetDescription;
@property(retain, nonatomic) id strongTarget; // @synthesize strongTarget=_strongTarget;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)dealloc;

@end
