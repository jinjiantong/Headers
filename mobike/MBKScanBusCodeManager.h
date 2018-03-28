//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MBKTicketsModel, NSMutableArray, NSString, NSTimer;
@protocol MBKScanTicketDelegate;

@interface MBKScanBusCodeManager : NSObject
{
    MBKTicketsModel *_displayTickets;
    id <MBKScanTicketDelegate> _delegate;
    NSTimer *_timer;
    NSString *_applicationID;
    NSMutableArray *_tickets;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *tickets; // @synthesize tickets=_tickets;
@property(copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) id <MBKScanTicketDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MBKTicketsModel *displayTickets; // @synthesize displayTickets=_displayTickets;
- (void).cxx_destruct;
- (void)scanFailure:(id)arg1;
- (void)parseBusCode:(id)arg1;
- (void)scanBusCode;
- (_Bool)isExpire;
- (void)scanBuscode:(id)arg1;
- (void)endScan;
- (void)startScanWithApplicationID:(id)arg1;
- (id)init;

@end
