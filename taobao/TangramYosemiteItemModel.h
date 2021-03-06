//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMuiRectModel.h"

#import "TangramItemModelProtocol-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface TangramYosemiteItemModel : TMMuiRectModel <TangramItemModelProtocol>
{
    _Bool _innerItemModel;
    NSString *_type;
    NSString *_spm;
    NSString *_scm;
    NSString *_acm;
    NSString *_pageParam;
    NSString *_ctrClickParam;
    NSArray *_margin;
    NSString *_display;
    NSString *_position;
    unsigned long long _colspan;
    double _modelAspectRatio;
    double _heightFromStyle;
    double _widthFromStyle;
    double _heightFromElement;
    unsigned long long _index;
    NSString *_action;
    NSDictionary *_jsonDict;
    NSString *_linkElementName;
    NSString *_inLayoutIdentifier;
    NSString *_layoutIdentifierForLayoutModel;
    NSMutableDictionary *_bizDict;
    NSMutableDictionary *_styleDict;
    struct CGRect _modelRect;
}

@property(retain, nonatomic) NSMutableDictionary *styleDict; // @synthesize styleDict=_styleDict;
@property(nonatomic) struct CGRect modelRect; // @synthesize modelRect=_modelRect;
@property(retain, nonatomic) NSMutableDictionary *bizDict; // @synthesize bizDict=_bizDict;
@property(retain, nonatomic) NSString *layoutIdentifierForLayoutModel; // @synthesize layoutIdentifierForLayoutModel=_layoutIdentifierForLayoutModel;
@property(retain, nonatomic) NSString *inLayoutIdentifier; // @synthesize inLayoutIdentifier=_inLayoutIdentifier;
@property(nonatomic) _Bool innerItemModel; // @synthesize innerItemModel=_innerItemModel;
@property(retain, nonatomic) NSString *linkElementName; // @synthesize linkElementName=_linkElementName;
@property(retain, nonatomic) NSDictionary *jsonDict; // @synthesize jsonDict=_jsonDict;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double heightFromElement; // @synthesize heightFromElement=_heightFromElement;
@property(nonatomic) double widthFromStyle; // @synthesize widthFromStyle=_widthFromStyle;
@property(nonatomic) double heightFromStyle; // @synthesize heightFromStyle=_heightFromStyle;
@property(nonatomic) double modelAspectRatio; // @synthesize modelAspectRatio=_modelAspectRatio;
@property(nonatomic) unsigned long long colspan; // @synthesize colspan=_colspan;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
@property(retain, nonatomic) NSArray *margin; // @synthesize margin=_margin;
@property(retain, nonatomic) NSString *ctrClickParam; // @synthesize ctrClickParam=_ctrClickParam;
@property(retain, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(retain, nonatomic) NSString *acm; // @synthesize acm=_acm;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *spm; // @synthesize spm=_spm;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)feedMap;
- (void)setStyleValue:(id)arg1 forKey:(id)arg2;
- (void)setBizValue:(id)arg1 forKey:(id)arg2;
- (id)styleKeys;
- (id)bizKeys;
- (id)styleValueForKey:(id)arg1 desiredClass:(Class)arg2;
- (id)styleValueForKey:(id)arg1;
- (id)bizValueForKey:(id)arg1 desiredClass:(Class)arg2;
- (id)bizValueForKey:(id)arg1;
- (id)reuseIdentifier;
@property(nonatomic) struct CGRect itemFrame;
- (struct NSString *)itemType;
- (double)marginLeft;
- (double)marginBottom;
- (double)marginRight;
- (double)marginTop;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) struct CGRect absRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *muiID;
@property(readonly) Class superclass;

@end

