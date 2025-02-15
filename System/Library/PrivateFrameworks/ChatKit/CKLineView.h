//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CKLineView : UIView
{
    _Bool _shouldUseDarkFSMStrokeColor;	// 8 = 0x8
    CABackdropLayer *_backdropFilterLayer;	// 16 = 0x10
    CAShapeLayer *_lineShapeLayer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a97ed
@property(nonatomic) _Bool shouldUseDarkFSMStrokeColor; // @synthesize shouldUseDarkFSMStrokeColor=_shouldUseDarkFSMStrokeColor;
@property(retain, nonatomic) CAShapeLayer *lineShapeLayer; // @synthesize lineShapeLayer=_lineShapeLayer;
@property(retain, nonatomic) CABackdropLayer *backdropFilterLayer; // @synthesize backdropFilterLayer=_backdropFilterLayer;
- (void)clearFilters;	// IMP=0x00000000000a969b
- (void)addFilter:(id)arg1;	// IMP=0x00000000000a934a
- (void)_updateReplyLineColor;	// IMP=0x00000000000a9234
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a9184
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000a90f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a8fef

@end

