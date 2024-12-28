//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKConversationListEmbeddedCollectionViewCell.h"

@class CKConversationListCellLayout, NSString, _CKCollectionViewTapGestureRecognizer;
@protocol CKConversationListCollectionViewCellDelegate;

__attribute__((visibility("hidden")))
@interface CKConversationListCollectionViewConversationCell : CKConversationListEmbeddedCollectionViewCell
{
    id <CKConversationListCollectionViewCellDelegate> _delegate;	// 8 = 0x8
    _CKCollectionViewTapGestureRecognizer *_avatarViewTapGestureRecognizer;	// 16 = 0x10
    struct UIEdgeInsets _marginInsets;	// 24 = 0x18
}

+ (Class)embeddedTableViewCellClass;	// IMP=0x0010000000312969
+ (double)cellHeightForDisplayScale:(double)arg1;	// IMP=0x0010000000312934
+ (Class)conversationCellClassForCurrentSizeCategory;	// IMP=0x00100000003128c8
+ (id)identifierForConversation:(id)arg1;	// IMP=0x00100000003128b6
+ (id)reuseIdentifier;	// IMP=0x001000000031288b
- (void).cxx_destruct;	// IMP=0x0000000000313220
@property(retain, nonatomic) _CKCollectionViewTapGestureRecognizer *avatarViewTapGestureRecognizer; // @synthesize avatarViewTapGestureRecognizer=_avatarViewTapGestureRecognizer;
@property(nonatomic) __weak id <CKConversationListCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (void)dragStateDidChange:(long long)arg1;	// IMP=0x000000000031312c
- (id)summaryLabelTextColor;	// IMP=0x00000000003130dc
- (void)didHoverOverCell:(id)arg1;	// IMP=0x0000000000313005
- (void)layoutSubviews;	// IMP=0x0000000000312f6e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000312e09
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;	// IMP=0x0000000000312d9e
- (void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2;	// IMP=0x0000000000312d35
- (double)widthForDeterminingAvatarVisibility;	// IMP=0x0000000000312ce5
- (void)forceUnreadIndicatorVisibility:(_Bool)arg1 forConversation:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000312c6b
- (id)avatarView;	// IMP=0x0000000000312c1b
- (void)setEditingMode:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000312b90
- (_Bool)avatarView:(id)arg1 shouldShowContact:(id)arg2;	// IMP=0x0000000000312b00
- (void)updateContentsForConversation:(id)arg1 fastPreview:(_Bool)arg2;	// IMP=0x0000000000312a8b
- (void)updateContentsForConversation:(id)arg1;	// IMP=0x0000000000312a22
@property(nonatomic) _Bool shouldHidePreviewSummary;
- (id)embeddedConversationTableViewCell;	// IMP=0x0000000000312982

// Remaining properties
@property(retain, nonatomic) CKConversationListCellLayout *cellLayout;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
