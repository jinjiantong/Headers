//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol ALBBAddressUIDelegate;

@interface ALBBAddressManager : NSObject
{
    _Bool _hasOpenAddress;
    _Bool _openKinshipAddress;
    id <ALBBAddressUIDelegate> _uiDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool openKinshipAddress; // @synthesize openKinshipAddress=_openKinshipAddress;
@property(nonatomic) __weak id <ALBBAddressUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) _Bool hasOpenAddress; // @synthesize hasOpenAddress=_hasOpenAddress;
- (void).cxx_destruct;
- (void)registWindVaneJsBridge;
- (void)openAddress:(id)arg1 vc:(id)arg2;
- (void)openEditAddressViewController:(id)arg1 parentNavigationController:(id)arg2 sourceAddress:(id)arg3;
- (void)openAddAddressViewController:(id)arg1 parentNavigationController:(id)arg2;
- (void)openAddressSelectViewController:(id)arg1 parentNavigationController:(id)arg2;
- (void)openAddressManagerViewController:(id)arg1;
- (void)setOpenKinshipAddress;

@end

