//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface _TtC16MusicRecognition22MatchingFlowCustomView : UIView
{
    MISSING_TYPE *retryHandler;	// 8 = 0x8
    MISSING_TYPE *cancellationHandler;	// 24 = 0x18
    MISSING_TYPE *appleMusicURLHandler;	// 40 = 0x28
    MISSING_TYPE *displayMatchedMediaItemHandler;	// 56 = 0x38
    MISSING_TYPE *matchedMediaItem;	// 72 = 0x48
    MISSING_TYPE *listeningView;	// 80 = 0x50
    MISSING_TYPE *matchView;	// 88 = 0x58
    MISSING_TYPE *noMatchView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000083820
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000837c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000835a0
- (void)displayMatchedMediaItemAction;	// IMP=0x0010000000084290
- (void)retryAction;	// IMP=0x0010000000084220
- (void)cancelAction;	// IMP=0x0010000000084200
- (void)appleMusicButtonAction;	// IMP=0x00100000000841d0

@end

