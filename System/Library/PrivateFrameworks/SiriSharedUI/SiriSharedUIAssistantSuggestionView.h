//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

@interface SiriSharedUIAssistantSuggestionView : UIView
{
    MISSING_TYPE *suggestion;	// 8 = 0x8
    MISSING_TYPE *suggestionsModel;	// 16 = 0x10
    MISSING_TYPE *hostingView;	// 24 = 0x18
    MISSING_TYPE *suggestionsMaxWidth;	// 32 = 0x20
    MISSING_TYPE *index;	// 40 = 0x28
    MISSING_TYPE *isDismissed;	// 48 = 0x30
    MISSING_TYPE *pressDownHandler;	// 56 = 0x38
    MISSING_TYPE *pressUpHandler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000007d2f0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007d290
- (void)layoutSubviews;	// IMP=0x000000000007d1b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007d000
- (_Bool)isPresented;	// IMP=0x000000000007c780
- (void)performSuggestionInPlaceAnimationDismissing;	// IMP=0x000000000007c610
- (void)performSuggestionInPlaceAnimationPresenting;	// IMP=0x000000000007c360
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007bd80
@property(nonatomic, copy) CDUnknownBlockType pressUpHandler;
@property(nonatomic, copy) CDUnknownBlockType pressDownHandler;

@end

