//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;
@protocol CKTapbackViewDelegate;

@interface _TtC7ChatKit29TapbackEmojiKeyboardGlyphView
{
    MISSING_TYPE *attributionScaleFactor;	// 8 = 0x8
    MISSING_TYPE *platterEdgeInsets;	// 16 = 0x10
    MISSING_TYPE *isSelected;	// 48 = 0x30
    MISSING_TYPE *delegate;	// 56 = 0x38
    MISSING_TYPE *contentView;	// 64 = 0x40
    MISSING_TYPE *horizontalOffset;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000881e40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000881db0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000881c30
- (id)init;	// IMP=0x0000000000881c10
@property(nonatomic, retain) id <CKTapbackViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected;
@property(nonatomic, readonly) struct UIEdgeInsets platterEdgeInsets; // @synthesize platterEdgeInsets;
@property(nonatomic, readonly) double attributionScaleFactor; // @synthesize attributionScaleFactor;
- (void)interfaceStyleChanged;	// IMP=0x0000000000881e70
- (void)performViewControllerDismissingAnimation;	// IMP=0x0000000000881ed0
- (void)configureForTapback:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x0000000000881eb0

@end

