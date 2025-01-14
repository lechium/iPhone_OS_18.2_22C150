//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, RouteStepItem, RouteStepListView;

@interface RouteStepListCollectionCell : UICollectionViewCell
{
    RouteStepListView *_stepView;	// 8 = 0x8
    NSLayoutConstraint *_heightConstraint;	// 16 = 0x10
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x0020000000d61608
+ (Class)stepViewClass;	// IMP=0x0010000000d6134b
- (void).cxx_destruct;	// IMP=0x0020000000d616b6
@property(retain, nonatomic) RouteStepItem *item;
@property(nonatomic) _Bool shouldUseTextToBottomConstraint;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000d6135c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

