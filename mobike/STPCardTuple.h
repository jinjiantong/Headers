//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, STPCard;

@interface STPCardTuple : NSObject
{
    STPCard *_selectedCard;
    NSArray *_cards;
}

+ (id)tupleWithSelectedCard:(id)arg1 cards:(id)arg2;
@property(retain, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) STPCard *selectedCard; // @synthesize selectedCard=_selectedCard;
- (void).cxx_destruct;

@end

