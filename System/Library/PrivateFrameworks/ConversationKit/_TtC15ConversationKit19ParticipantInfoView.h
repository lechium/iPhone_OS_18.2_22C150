//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, _TtC15ConversationKit33ParticipantViewLabelContainerView;

@interface _TtC15ConversationKit19ParticipantInfoView : UIView
{
    MISSING_TYPE *gradientView;	// 8 = 0x8
    MISSING_TYPE *nameLabel;	// 16 = 0x10
    MISSING_TYPE *shutterButton;	// 24 = 0x18
    MISSING_TYPE *expandButton;	// 32 = 0x20
    MISSING_TYPE *localParticipant;	// 40 = 0x28
    MISSING_TYPE *isExpanded;	// 41 = 0x29
    MISSING_TYPE *customCornerRadius;	// 48 = 0x30
    MISSING_TYPE *isMomentsAvailable;	// 56 = 0x38
    MISSING_TYPE *recordingLocalVideo;	// 57 = 0x39
    MISSING_TYPE *delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001d8425
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d83f2
- (void)didTapShutterButton;	// IMP=0x00000000001d8339
- (void)didTapExpandButton;	// IMP=0x00000000001d8298
- (void)layoutSubviews;	// IMP=0x00000000001d7c22
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d79ed
@property(nonatomic) _Bool isMomentsAvailable; // @synthesize isMomentsAvailable;
@property(nonatomic, readonly) _TtC15ConversationKit33ParticipantViewLabelContainerView *nameLabel; // @synthesize nameLabel;

@end
