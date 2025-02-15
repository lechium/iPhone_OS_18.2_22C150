//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ADSAEAssetsAvailabilityObserver : NSObject
{
    Class _gmAvailabilityWrapperClass;	// 8 = 0x8
    _Bool _saeAssetsForCurrentLocaleAvailable;	// 16 = 0x10
}

@property _Bool saeAssetsForCurrentLocaleAvailable; // @synthesize saeAssetsForCurrentLocaleAvailable=_saeAssetsForCurrentLocaleAvailable;
- (void)assetManager:(id)arg1 didChangeLanguageCode:(id)arg2;	// IMP=0x00100000001acaf1
- (void)assetManagerDidChangeAssetAvailability:(id)arg1;	// IMP=0x00100000001acadf
- (void)refreshAssetsAvailabilityWithAssetManager:(id)arg1;	// IMP=0x00100000001ac9f5
- (id)init;	// IMP=0x00100000001ac92f
- (id)initWithGMAvailabilityWrapperClass:(Class)arg1;	// IMP=0x00100000001ac8f2

@end

