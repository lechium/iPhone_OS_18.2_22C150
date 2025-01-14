//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSAttributedString, NSString, SGBannerDividerParameter, SGSuggestionAction, UIColor, UIVisualEffectView;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface _TtC17CoreSuggestionsUI15SGBannerContent : NSObject
{
    MISSING_TYPE *bannerForVisionDevice;	// 8 = 0x8
    MISSING_TYPE *title;	// 16 = 0x10
    MISSING_TYPE *attributedTitle;	// 32 = 0x20
    MISSING_TYPE *subtitle;	// 40 = 0x28
    MISSING_TYPE *attributedSubtitle;	// 56 = 0x38
    MISSING_TYPE *accessoryType;	// 64 = 0x40
    MISSING_TYPE *images;	// 72 = 0x48
    MISSING_TYPE *actionTitle;	// 80 = 0x50
    MISSING_TYPE *suggestion;	// 96 = 0x60
    MISSING_TYPE *delegate;	// 104 = 0x68
    MISSING_TYPE *primaryActionButtonWidth;	// 112 = 0x70
    MISSING_TYPE *closeButtonWidth;	// 120 = 0x78
    MISSING_TYPE *actionButtonType;	// 128 = 0x80
    MISSING_TYPE *imageSGViews;	// 136 = 0x88
    MISSING_TYPE *listTitle;	// 144 = 0x90
    MISSING_TYPE *backgroundVisualEffectView;	// 160 = 0xa0
    MISSING_TYPE *backgroundColor;	// 168 = 0xa8
    MISSING_TYPE *bannerDivider;	// 176 = 0xb0
    MISSING_TYPE *suggestionCategorySupportsBatchDismissal;	// 184 = 0xb8
    MISSING_TYPE *primaryAction;	// 192 = 0xc0
    MISSING_TYPE *dismissAction;	// 200 = 0xc8
    MISSING_TYPE *closeButtonXAnchorOffset;	// 208 = 0xd0
    MISSING_TYPE *prominentActionButton;	// 216 = 0xd8
    MISSING_TYPE *iconSFSymbols;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x000000000000fd1d
@property(nonatomic, copy) NSArray *iconSFSymbols;
@property(nonatomic) _Bool prominentActionButton; // @synthesize prominentActionButton;
@property(nonatomic) double closeButtonXAnchorOffset; // @synthesize closeButtonXAnchorOffset;
@property(nonatomic, retain) SGSuggestionAction *dismissAction; // @synthesize dismissAction;
@property(nonatomic, retain) SGSuggestionAction *primaryAction; // @synthesize primaryAction;
@property(nonatomic) _Bool suggestionCategorySupportsBatchDismissal; // @synthesize suggestionCategorySupportsBatchDismissal;
@property(nonatomic, retain) SGBannerDividerParameter *bannerDivider; // @synthesize bannerDivider;
@property(nonatomic, retain) UIColor *backgroundColor; // @synthesize backgroundColor;
@property(nonatomic, retain) UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView;
@property(nonatomic, copy) NSString *listTitle;
@property(nonatomic, copy) NSArray *imageSGViews;
@property(nonatomic) long long actionButtonType; // @synthesize actionButtonType;
@property(nonatomic) double closeButtonWidth; // @synthesize closeButtonWidth;
@property(nonatomic) double primaryActionButtonWidth; // @synthesize primaryActionButtonWidth;
@property(nonatomic) __weak id <SGSuggestionDelegate> delegate; // @synthesize delegate;
@property(nonatomic, retain) id <SGSuggestion> suggestion; // @synthesize suggestion;
@property(nonatomic, copy) NSString *actionTitle;
@property(nonatomic, copy) NSArray *images;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType;
@property(nonatomic, retain) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle;
@property(nonatomic, copy) NSString *subtitle;
@property(nonatomic, retain) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(nonatomic, copy) NSString *title;
- (id)init;	// IMP=0x000000000000dd3e

@end

