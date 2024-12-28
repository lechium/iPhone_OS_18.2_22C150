//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionView.h"

@class NSIndexPath, NSMutableArray, NSString, UIKeyboardEmojiCollectionViewCell, UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiAndStickerCollectionView : UICollectionView
{
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;	// 8 = 0x8
    UIKeyboardEmojiCollectionViewCell *_lastTouchedEmojiCell;	// 16 = 0x10
    NSMutableArray *_gestureRecognizersToEnable;	// 24 = 0x18
    _Bool _touchDidMove;	// 32 = 0x20
    NSIndexPath *_rearrangingPath;	// 40 = 0x28
    _Bool _isInSearchPopover;	// 48 = 0x30
    UIResponder *_hitTestResponder;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000163fd9d
@property(nonatomic) _Bool isInSearchPopover; // @synthesize isInSearchPopover=_isInSearchPopover;
@property(nonatomic) __weak UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property(readonly) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
- (void)willCancelVariants:(id)arg1;	// IMP=0x000000000163fad4
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f90c
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f847
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f782
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f6d7
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000163f395
- (void)enableConflictingGestureRecognizers;	// IMP=0x000000000163f23c
- (void)disableConflictingGestureRecognizers;	// IMP=0x000000000163f00c
- (id)closestCellForPoint:(struct CGPoint)arg1;	// IMP=0x000000000163ec88
- (id)backgroundColor;	// IMP=0x000000000163ec6f
- (double)_currentScreenScale;	// IMP=0x000000000163ec5d
- (void)layoutSubviews;	// IMP=0x000000000163ebab
- (id)accessibilityIdentifier;	// IMP=0x000000000163eb9e
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3;	// IMP=0x000000000163ea83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
