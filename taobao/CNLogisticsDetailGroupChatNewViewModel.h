//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNCreatViewModel.h"

@class VLView;

@interface CNLogisticsDetailGroupChatNewViewModel : CNCreatViewModel
{
    VLView *_vlView;
    Class _StorageModuleClass;
    id _storageInstance;
}

@property(retain, nonatomic) id storageInstance; // @synthesize storageInstance=_storageInstance;
@property(retain, nonatomic) Class StorageModuleClass; // @synthesize StorageModuleClass=_StorageModuleClass;
@property(retain, nonatomic) VLView *vlView; // @synthesize vlView=_vlView;
- (void).cxx_destruct;
- (_Bool)setItem:(id)arg1 value:(id)arg2 persistent:(_Bool)arg3;
- (_Bool)canLoadViewWithDictionary:(id)arg1;
- (double)height;
- (Class)viewClass;

@end

