//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBAdTime : NSObject
{
    int start;
    int end;
    int allowDisplayCount;
    int allowClickCount;
    int currentDisplaycount;
    int currentClickCount;
    int visible;
}

@property int visible; // @synthesize visible;
@property int currentDisplaycount; // @synthesize currentDisplaycount;
@property int currentClickCount; // @synthesize currentClickCount;
@property int allowDisplayCount; // @synthesize allowDisplayCount;
@property int allowClickCount; // @synthesize allowClickCount;
@property int end; // @synthesize end;
@property int start; // @synthesize start;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

