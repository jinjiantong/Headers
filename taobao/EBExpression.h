//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface EBExpression : NSObject
{
    NSDictionary *_root;
}

@property(retain, nonatomic) NSDictionary *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (id)executeNodeInScope:(id)arg1 node:(id)arg2;
- (id)toBoolean:(id)arg1;
- (_Bool)toBool:(id)arg1;
- (double)toNumber:(id)arg1;
- (id)executeInScope:(id)arg1;
- (id)initWithRoot:(id)arg1;

@end

