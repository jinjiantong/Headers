//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol Knapsack01Deletage;

@interface Knapsack01 : NSObject
{
    double _capacity;
    double _cost;
    id <Knapsack01Deletage> _delegate;
}

@property(nonatomic) __weak id <Knapsack01Deletage> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double cost; // @synthesize cost=_cost;
@property(nonatomic) double capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (long long)process:(id)arg1 withResult:(id)arg2;
- (id)initWithCapacity:(double)arg1 delegate:(id)arg2;

@end

