//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface PXWallpaperTipsHelper_Swift
{
    MISSING_TYPE *trySettlingEffectTip;	// 32 = 0x20
    MISSING_TYPE *failedSettlingEffectTip;	// 48 = 0x30
    MISSING_TYPE *hasStartedTips;	// 64 = 0x40
}

+ (void)presentFailedSettlingEffectTip:(id)arg1;	// IMP=0x00400000004befd0
+ (void)presentTrySettlingEffectTip:(id)arg1;	// IMP=0x00400000004bee90
+ (void)dismissTip:(CDUnknownBlockType)arg1;	// IMP=0x00400000004bed40
+ (void)removeAllPresentationDelegates;	// IMP=0x00400000004beb00
+ (void)startObservingTips;	// IMP=0x00400000004beaa0
+ (id)shared;	// IMP=0x00400000004be8d0
- (void).cxx_destruct;	// IMP=0x00000000004bf150
- (id)init;	// IMP=0x00000000004bf090

@end

