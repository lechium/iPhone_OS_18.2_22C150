//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC18HealthExperienceUI8HelpTile : UIView
{
    MISSING_TYPE *imageView;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *bodyLabel;	// 24 = 0x18
    MISSING_TYPE *actionButton;	// 32 = 0x20
    MISSING_TYPE *separatorView;	// 40 = 0x28
    MISSING_TYPE *dismissButton;	// 48 = 0x30
    MISSING_TYPE *accessibilityConstraints;	// 56 = 0x38
    MISSING_TYPE *nonAccessibilityConstraints;	// 64 = 0x40
    MISSING_TYPE *actionHandler;	// 72 = 0x48
    MISSING_TYPE *viewModel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001ebd60
- (void)dismissTapped;	// IMP=0x00000000001eb980
- (void)actionTapped;	// IMP=0x00000000001eb900
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001ea380
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ea210
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ea1e0

@end
