//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PUImportOneUpCellBadgeView, PXImportMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUImportOneUpTransitionView
{
    UIImage *_startingImage;	// 8 = 0x8
    PXImportMediaProvider *_mediaProvider;	// 16 = 0x10
    PUImportOneUpCellBadgeView *_badgeView;	// 24 = 0x18
    NSArray *_badgeViewOffsetConstraints;	// 32 = 0x20
    double _initialPhotoViewAlpha;	// 40 = 0x28
    double _targetPhotoViewAlpha;	// 48 = 0x30
    struct CGRect _initialFrame;	// 56 = 0x38
    struct CGRect _targetFrame;	// 88 = 0x58
}

+ (double)interpolatedValueBetweenInitialValue:(double)arg1 andFinalValue:(double)arg2 atProgress:(double)arg3;	// IMP=0x00100000003014a1
- (void).cxx_destruct;	// IMP=0x0000000000301349
@property(nonatomic) double targetPhotoViewAlpha; // @synthesize targetPhotoViewAlpha=_targetPhotoViewAlpha;
@property(nonatomic) double initialPhotoViewAlpha; // @synthesize initialPhotoViewAlpha=_initialPhotoViewAlpha;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(readonly, nonatomic) NSArray *badgeViewOffsetConstraints; // @synthesize badgeViewOffsetConstraints=_badgeViewOffsetConstraints;
@property(readonly, nonatomic) PUImportOneUpCellBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) PXImportMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) UIImage *startingImage; // @synthesize startingImage=_startingImage;
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;	// IMP=0x00000000003011cd
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003010ea
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;	// IMP=0x00000000003010d8
- (void)setPhotoViewInitialAlpha:(double)arg1 targetAlpha:(double)arg2;	// IMP=0x0000000000301027
- (void)setInitialFrame:(struct CGRect)arg1 targetFrame:(struct CGRect)arg2;	// IMP=0x0000000000300f5e
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000300e86
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000300dbd
- (void)updateAlphaIfNeeded;	// IMP=0x0000000000300cab
- (void)updateConstraints;	// IMP=0x00000000003009cb
- (double)currentProgress;	// IMP=0x00000000003007af
- (void)updateBadgeView;	// IMP=0x0000000000300731
- (void *)contextForObservingViewModelChanges;	// IMP=0x0000000000300724
- (id)initWithImportItem:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;	// IMP=0x0000000000300323

@end

