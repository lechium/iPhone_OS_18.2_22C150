//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewListCell.h>

@class MISSING_TYPE, UILabel, _TtC15ConversationKit19InCallControlButton;

@interface _TtC15ConversationKit29InCallControlsParticipantCell : UICollectionViewListCell
{
    MISSING_TYPE *nameLabel;	// 8 = 0x8
    MISSING_TYPE *subtitleLabel;	// 16 = 0x10
    MISSING_TYPE *statusIcon;	// 24 = 0x18
    MISSING_TYPE *avatarView;	// 32 = 0x20
    MISSING_TYPE *actionButton;	// 40 = 0x28
    MISSING_TYPE *viewModel;	// 0 = 0x0
    MISSING_TYPE *cameraSymbolImage;	// 0 = 0x0
    MISSING_TYPE *copresenceSymbolImage;	// 0 = 0x0
    MISSING_TYPE *linkSymbolImage;	// 0 = 0x0
    MISSING_TYPE *messagesSymbolImage;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiApproveButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_lmiRejectButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_kickMemberButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_contentViews;	// 0 = 0x0
    MISSING_TYPE *callDelegate;	// 0 = 0x0
    MISSING_TYPE *participantCellDelegate;	// 1414745679 = 0x54534e4f
}

- (void).cxx_destruct;	// IMP=0x00000000002fbf5a
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000002fb9e2
- (void)layoutSubviews;	// IMP=0x00000000002fb916
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f9f55
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002f9a5a
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *kickMemberButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiRejectButton;
@property(nonatomic, retain) _TtC15ConversationKit19InCallControlButton *lmiApproveButton;
@property(nonatomic, readonly) _TtC15ConversationKit19InCallControlButton *actionButton; // @synthesize actionButton;
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, readonly) UILabel *nameLabel; // @synthesize nameLabel;

@end
