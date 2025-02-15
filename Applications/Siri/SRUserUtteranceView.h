//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, SRTapToEditView, SUICStreamingTextView;

@interface SRUserUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;	// 8 = 0x8
    SUICStreamingTextView *_clonedStreamingTextView;	// 40 = 0x28
    SUICStreamingTextView *_streamingTextView;	// 48 = 0x30
    _Bool _blendEffectEnabled;	// 56 = 0x38
    SRTapToEditView *_tapToEditView;	// 64 = 0x40
    _Bool _chevronHasBeenShown;	// 72 = 0x48
    _Bool _editable;	// 73 = 0x49
}

+ (double)insertionAnimatedZPosition;	// IMP=0x004000000006a90d
- (void).cxx_destruct;	// IMP=0x002000000006ba7a
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (double)_scaledSiriTapToEditViewLeading;	// IMP=0x001000000006b9fb
- (double)_indentWidth;	// IMP=0x001000000006b9d1
- (double)_streamingTextMaxYToTapToEditOriginDistance;	// IMP=0x001000000006b8cd
- (void)layoutSubviews;	// IMP=0x001000000006b5b3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000006b4be
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(copy, nonatomic) NSString *text;
- (double)baselineOffsetFromBottom;	// IMP=0x001000000006a972
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x001000000006a91b
- (void)setChevronHidden:(_Bool)arg1;	// IMP=0x001000000006a8bf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006a6fa

@end

