//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CCUIButtonModuleView;

__attribute__((visibility("hidden")))
@interface MRUVolumeStepperView : UIView
{
    CCUIButtonModuleView *_increaseButton;	// 8 = 0x8
    CCUIButtonModuleView *_decreaseButton;	// 16 = 0x10
    double _continuousButtonCornerRadius;	// 24 = 0x18
    UIView *_increaseMaterialView;	// 32 = 0x20
    UIView *_decreaseMaterialView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000bd53c
@property(retain, nonatomic) UIView *decreaseMaterialView; // @synthesize decreaseMaterialView=_decreaseMaterialView;
@property(retain, nonatomic) UIView *increaseMaterialView; // @synthesize increaseMaterialView=_increaseMaterialView;
@property(nonatomic) double continuousButtonCornerRadius; // @synthesize continuousButtonCornerRadius=_continuousButtonCornerRadius;
@property(readonly, nonatomic) CCUIButtonModuleView *decreaseButton; // @synthesize decreaseButton=_decreaseButton;
@property(readonly, nonatomic) CCUIButtonModuleView *increaseButton; // @synthesize increaseButton=_increaseButton;
- (void)layoutSubviews;	// IMP=0x00000000000bd288
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000bcf9f

@end

