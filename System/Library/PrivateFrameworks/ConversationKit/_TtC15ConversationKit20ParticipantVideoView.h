//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit20ParticipantVideoView : UIView
{
    MISSING_TYPE *frontFacingCameraView;	// 8 = 0x8
    MISSING_TYPE *backFacingCameraView;	// 16 = 0x10
    MISSING_TYPE *previousViewModelHash;	// 24 = 0x18
    MISSING_TYPE *previousVideoSnapshot;	// 40 = 0x28
    MISSING_TYPE *hasPerformedFirstVideoTransform;	// 48 = 0x30
    MISSING_TYPE *shouldSkipTransformsForLayerHostMode;	// 49 = 0x31
    MISSING_TYPE *pendingRegisterVideoLayerForFrontVideoProvider;	// 56 = 0x38
    MISSING_TYPE *pendingRegisterVideoLayerForBackVideoProvider;	// 96 = 0x60
    MISSING_TYPE *isViewFrozen;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000001e035b
- (void)layoutSubviews;	// IMP=0x00000000001dea5a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001de0fe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ddee5
- (id)init;	// IMP=0x00000000001ddd07

@end
