//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ALBBAddressDetailAreaView, ALBBAddressDetailView, UIImageView;

@interface ALBBAddressDetailEditView : UIView
{
    _Bool _needArrowView;
    _Bool _isArea;
    ALBBAddressDetailView *_detailView;
    ALBBAddressDetailAreaView *_areaDetailView;
    UIImageView *_rightImage;
    UIView *_lineView;
}

@property(nonatomic) _Bool isArea; // @synthesize isArea=_isArea;
@property(nonatomic) _Bool needArrowView; // @synthesize needArrowView=_needArrowView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *rightImage; // @synthesize rightImage=_rightImage;
@property(retain, nonatomic) ALBBAddressDetailAreaView *areaDetailView; // @synthesize areaDetailView=_areaDetailView;
@property(retain, nonatomic) ALBBAddressDetailView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 title:(id)arg3 placeholder:(id)arg4 needArrowView:(_Bool)arg5 withTextFeildDelegate:(id)arg6 isArea:(_Bool)arg7;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 title:(id)arg3 placeholder:(id)arg4 needArrowView:(_Bool)arg5 withTextFeildDelegate:(id)arg6;

@end

