//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUAirPlaySettings : PXSettings
{
    _Bool _ignoreMirroredScreens;	// 8 = 0x8
    _Bool _ignoreScreenRecordingScreens;	// 9 = 0x9
    _Bool _compensateForOverscan;	// 10 = 0xa
    _Bool _switchToMediaPresentationMode;	// 11 = 0xb
    unsigned long long _placeholderForSecondScreen;	// 16 = 0x10
    unsigned long long _placeholderForMirroredScreen;	// 24 = 0x18
    double _minimumZoomForScrollPadding;	// 32 = 0x20
    double _maximumZoomForScrollPadding;	// 40 = 0x28
    double _simulatedScreenContentWidth;	// 48 = 0x30
    double _simulatedScreenContentHeight;	// 56 = 0x38
    long long _routeAvailabilityOverride;	// 64 = 0x40
}

+ (id)settingsControllerModule;	// IMP=0x00600000001d653d
+ (id)sharedInstance;	// IMP=0x00600000001d650d
@property(nonatomic) long long routeAvailabilityOverride; // @synthesize routeAvailabilityOverride=_routeAvailabilityOverride;
@property(nonatomic) double simulatedScreenContentHeight; // @synthesize simulatedScreenContentHeight=_simulatedScreenContentHeight;
@property(nonatomic) double simulatedScreenContentWidth; // @synthesize simulatedScreenContentWidth=_simulatedScreenContentWidth;
@property(nonatomic) _Bool switchToMediaPresentationMode; // @synthesize switchToMediaPresentationMode=_switchToMediaPresentationMode;
@property(nonatomic) double maximumZoomForScrollPadding; // @synthesize maximumZoomForScrollPadding=_maximumZoomForScrollPadding;
@property(nonatomic) double minimumZoomForScrollPadding; // @synthesize minimumZoomForScrollPadding=_minimumZoomForScrollPadding;
@property(nonatomic) unsigned long long placeholderForMirroredScreen; // @synthesize placeholderForMirroredScreen=_placeholderForMirroredScreen;
@property(nonatomic) unsigned long long placeholderForSecondScreen; // @synthesize placeholderForSecondScreen=_placeholderForSecondScreen;
@property(nonatomic) _Bool compensateForOverscan; // @synthesize compensateForOverscan=_compensateForOverscan;
@property(nonatomic) _Bool ignoreScreenRecordingScreens; // @synthesize ignoreScreenRecordingScreens=_ignoreScreenRecordingScreens;
@property(nonatomic) _Bool ignoreMirroredScreens; // @synthesize ignoreMirroredScreens=_ignoreMirroredScreens;
- (id)debugDescription;	// IMP=0x00000000001d61e2
- (void)setDefaultValues;	// IMP=0x00000000001d6105
- (id)parentSettings;	// IMP=0x00000000001d60ec

@end

