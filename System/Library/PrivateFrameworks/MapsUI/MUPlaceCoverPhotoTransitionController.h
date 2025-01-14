//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUPlaceCoverPhotoTransitionController : NSObject
{
    struct MUPlaceHeaderMetrics _metrics;	// 8 = 0x8
    CDUnknownBlockType _updateHandler;	// 80 = 0x50
    long long _currentScrollDirection;	// 88 = 0x58
    double _expansionProgress;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000085839
@property(nonatomic) double expansionProgress; // @synthesize expansionProgress=_expansionProgress;
@property(readonly, nonatomic) long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property(readonly, nonatomic) _Bool shouldBlurChromeHeaderButtons;
@property(readonly, nonatomic) double interpolatedCoverPhotoToTitleSpacing;
- (double)_logoImageAlphaForVerticalDrag;	// IMP=0x00000000000856a7
@property(readonly, nonatomic) double logoImageAlpha;
- (void)_updateWithOldProgress:(double)arg1;	// IMP=0x000000000008564b
- (double)coverPhotoHeightForProposedWidth:(double)arg1;	// IMP=0x000000000008560c
@property(readonly, nonatomic) double coverPhotoAlpha;
@property(readonly, nonatomic) _Bool hideLogo;
- (id)initWithMetrics:(struct MUPlaceHeaderMetrics)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085515

@end

