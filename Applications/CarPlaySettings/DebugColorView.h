//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DebugColorModel, NSString, UIImageView, UILabel;
@protocol DebugColorViewDelegate;

@interface DebugColorView : UIView
{
    id <DebugColorViewDelegate> _delegate;	// 8 = 0x8
    DebugColorModel *_colorModel;	// 16 = 0x10
    UIView *_colorView;	// 24 = 0x18
    UILabel *_nameLabel;	// 32 = 0x20
    UIImageView *_selectedImageView;	// 40 = 0x28
    struct CGSize _contentSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000000baf3
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) DebugColorModel *colorModel; // @synthesize colorModel=_colorModel;
@property(nonatomic) __weak id <DebugColorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000000b9f0
@property(nonatomic, getter=isCellHighlighted) _Bool cellHighlighted;
@property(nonatomic, getter=isCellSelected) _Bool cellSelected;
@property(nonatomic, getter=isCellFocused) _Bool cellFocused;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000000b783
- (_Bool)canBecomeFocused;	// IMP=0x000000000000b77b
- (void)_tappyTap;	// IMP=0x001000000000b6fc
- (id)initWithModel:(id)arg1;	// IMP=0x001000000000aa59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

