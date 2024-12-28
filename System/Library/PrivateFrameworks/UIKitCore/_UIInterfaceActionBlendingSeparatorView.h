//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIBlendingHighlightView.h"

@class NSString, _UIInterfaceActionSeparatorConstraintController;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionBlendingSeparatorView : _UIBlendingHighlightView
{
    double _horizontalLineLeadingInset;	// 160 = 0xa0
    _UIInterfaceActionSeparatorConstraintController *_separatorViewConstraints;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000002fb68b
@property(readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // @synthesize separatorViewConstraints=_separatorViewConstraints;
@property(nonatomic) double horizontalLineLeadingInset; // @synthesize horizontalLineLeadingInset=_horizontalLineLeadingInset;
- (void)_updateContentDirectionalInsets;	// IMP=0x00000000002fb5f6
- (void)updateConstraints;	// IMP=0x00000000002fb5ad
- (long long)constantSizedAxis;	// IMP=0x00000000002fb590
- (void)setConstantSizedAxis:(long long)arg1;	// IMP=0x00000000002fb557
@property(nonatomic) double constantAxisDimension;
- (id)init;	// IMP=0x00000000002fb455
- (id)initWithTopLevelFilters:(id)arg1 compositingColors:(id)arg2 compositingFilterModes:(id)arg3;	// IMP=0x00000000002fb3e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
