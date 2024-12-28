//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFWallpaperCompoundLayerStack, PHAsset;
@protocol PISegmentationItem;

__attribute__((visibility("hidden")))
@interface PUParallaxVisualDiagnosticsProvider : NSObject
{
    PHAsset *_asset;	// 8 = 0x8
    PFWallpaperCompoundLayerStack *_compoundLayerStack;	// 16 = 0x10
    id <PISegmentationItem> _segmentationItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000386a2e
@property(retain, nonatomic) id <PISegmentationItem> segmentationItem; // @synthesize segmentationItem=_segmentationItem;
@property(retain, nonatomic) PFWallpaperCompoundLayerStack *compoundLayerStack; // @synthesize compoundLayerStack=_compoundLayerStack;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void)_addSegmentationItemProperties:(id)arg1;	// IMP=0x00000000003866f4
- (void)_addImagingGatingScores:(id)arg1;	// IMP=0x00000000003862c0
- (void)_addLayerStackProperties:(id)arg1;	// IMP=0x0000000000385f87
- (void)_addLayersTable:(id)arg1;	// IMP=0x0000000000385e29
- (void)_drawLayer:(id)arg1 inRect:(struct CGRect)arg2 context:(id)arg3;	// IMP=0x0000000000385a03
- (void)_addLayerStack:(id)arg1;	// IMP=0x000000000038542b
- (void)_addCoverPage:(id)arg1;	// IMP=0x0000000000385408
- (void)addVisualDiagnosticsToContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000385341

@end
