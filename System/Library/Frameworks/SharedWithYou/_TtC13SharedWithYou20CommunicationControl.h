//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIControl.h>

@class MISSING_TYPE, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC13SharedWithYou20CommunicationControl : UIControl
{
    MISSING_TYPE *touchUpInsideActionIdentifier;	// 8 = 0x8
    MISSING_TYPE *communicationChannel;	// 16 = 0x10
    MISSING_TYPE *contentView;	// 24 = 0x18
    MISSING_TYPE *imageView;	// 32 = 0x20
    MISSING_TYPE *label;	// 40 = 0x28
    MISSING_TYPE *sBehaviors;	// 0 = 0x0
    MISSING_TYPE *menu;	// 48 = 0x30
    MISSING_TYPE *enablementLock;	// 56 = 0x38
    MISSING_TYPE *tintLock;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x000000000002fb00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002faa0
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000002fa40
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002f980
- (void)tintColorDidChange;	// IMP=0x000000000002f7f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f660
@property(nonatomic, retain) UIColor *tintColor;
@property(nonatomic) _Bool enabled;
- (_Bool)isEnabled;	// IMP=0x000000000002def0
@property(nonatomic, readonly) UILabel *label; // @synthesize label;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end
