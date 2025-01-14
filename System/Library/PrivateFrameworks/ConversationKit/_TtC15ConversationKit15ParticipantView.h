//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, _TtC15ConversationKit19ParticipantInfoView, _TtC15ConversationKit21ParticipantViewButton, _TtC15ConversationKit23ParticipantMonogramView;

@interface _TtC15ConversationKit15ParticipantView : UIView
{
    MISSING_TYPE *backgroundEffectsView;	// 8 = 0x8
    MISSING_TYPE *contentView;	// 16 = 0x10
    MISSING_TYPE *monogramView;	// 24 = 0x18
    MISSING_TYPE *videoView;	// 32 = 0x20
    MISSING_TYPE *alertView;	// 40 = 0x28
    MISSING_TYPE *videoOverlayView;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_infoView;	// 56 = 0x38
    MISSING_TYPE *prominenceBorderView;	// 64 = 0x40
    MISSING_TYPE *debugLabel;	// 72 = 0x48
    MISSING_TYPE *kickMemberButton;	// 80 = 0x50
    MISSING_TYPE *gradientOverlayView;	// 88 = 0x58
    MISSING_TYPE *mostRecentViewModelHash;	// 96 = 0x60
    MISSING_TYPE *loggingIdentifier;	// 0 = 0x0
    MISSING_TYPE *hideInfoViewTimer;	// 0 = 0x0
    MISSING_TYPE *hideAlertViewTimer;	// 0 = 0x0
    MISSING_TYPE *localParticipant;	// 0 = 0x0
    MISSING_TYPE *orientationCancellable;	// 0 = 0x0
    MISSING_TYPE *participantIdentifier;	// 1701667186 = 0x656d6172
    MISSING_TYPE *delegate;	// 1884499827 = 0x70532f73
    MISSING_TYPE *isInRoster;	// 1986622032 = 0x76697250
    MISSING_TYPE *shouldOverrideShadowHidden;	// 1701013878 = 0x65636976
    MISSING_TYPE *customCornerRadius;	// 1918988098 = 0x72616f42
    MISSING_TYPE *isExpanded;	// 2003135841 = 0x77656d61
}

- (void).cxx_destruct;	// IMP=0x00000000005edcbd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005ef1d8
- (void)didTapKickMember;	// IMP=0x00000000005ef11f
- (void)layoutSubviews;	// IMP=0x00000000005ee40d
- (void)dealloc;	// IMP=0x00000000005edca0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005edc1c
@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded;
@property(nonatomic) _Bool shouldOverrideShadowHidden; // @synthesize shouldOverrideShadowHidden;
@property(nonatomic) _Bool isInRoster; // @synthesize isInRoster;
@property(nonatomic, readonly) _TtC15ConversationKit21ParticipantViewButton *kickMemberButton; // @synthesize kickMemberButton;
@property(nonatomic, retain) _TtC15ConversationKit19ParticipantInfoView *infoView;
@property(nonatomic, readonly) _TtC15ConversationKit23ParticipantMonogramView *monogramView; // @synthesize monogramView;
@property(nonatomic) struct CGAffineTransform transform;

@end

