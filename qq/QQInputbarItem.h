//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQInputbarItem : NSObject
{
    _Bool _shouldShowRedPoint;
    _Bool _selected;
    _Bool _skinIsSetDefault;
    _Bool _animated;
    _Bool _hasAttatchedView;
    _Bool _shouldShowIcon;
    NSString *_identifier;
    NSString *_imageName;
    NSString *_selectedImageName;
    id _target;
    SEL _selectedAction;
    SEL _deselectedAction;
    unsigned long long _selectedCount;
    NSString *_iconPath;
}

@property(nonatomic) _Bool shouldShowIcon; // @synthesize shouldShowIcon=_shouldShowIcon;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(nonatomic) _Bool hasAttatchedView; // @synthesize hasAttatchedView=_hasAttatchedView;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool skinIsSetDefault; // @synthesize skinIsSetDefault=_skinIsSetDefault;
@property(nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) SEL deselectedAction; // @synthesize deselectedAction=_deselectedAction;
@property(nonatomic) SEL selectedAction; // @synthesize selectedAction=_selectedAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool shouldShowRedPoint; // @synthesize shouldShowRedPoint=_shouldShowRedPoint;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithImageName:(id)arg1 selectedImageName:(id)arg2 target:(id)arg3 selectedAction:(SEL)arg4 deselectedAction:(SEL)arg5;

@end

