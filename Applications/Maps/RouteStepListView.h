//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSString, RouteStepItem;

@interface RouteStepListView : UIView
{
    UIView *_hairlineView;	// 8 = 0x8
    NSLayoutConstraint *_hairlineLeadingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_hairlineTrailingConstraint;	// 24 = 0x18
    NSLayoutConstraint *_hairlineHeightConstraint;	// 32 = 0x20
    RouteStepItem *_item;	// 40 = 0x28
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x0020000000d608ff
- (void).cxx_destruct;	// IMP=0x0020000000d60d37
@property(retain, nonatomic) RouteStepItem *item; // @synthesize item=_item;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d60c5d
- (void)_updateHairline;	// IMP=0x0010000000d60bc3
@property(nonatomic) _Bool shouldUseTextToBottomConstraint;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000d602f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

