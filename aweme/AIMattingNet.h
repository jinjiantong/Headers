//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AIMattingNet : NSObject
{
    void *handle;
    _Bool released;
}

- (void)dealloc;
- (void)releaseModel;
- (int)predict:(struct __CVBuffer *)arg1 alpha:(char *)arg2 orient:(int)arg3;
- (id)init:(id)arg1 largeOutShape:(id)arg2;

@end
