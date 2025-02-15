//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SRSiriSystemUIController : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *viewMode;	// 16 = 0x10
    MISSING_TYPE *lockState;	// 24 = 0x18
    MISSING_TYPE *activityId;	// 32 = 0x20
    MISSING_TYPE *systemUIDevice;	// 48 = 0x30
    MISSING_TYPE *systemApertureSupportedDevice;	// 49 = 0x31
    MISSING_TYPE *currentActivitySupportsLandscape;	// 50 = 0x32
    MISSING_TYPE *domainResponseId;	// 56 = 0x38
    MISSING_TYPE *shouldIgnoreLiveActivity;	// 72 = 0x48
    MISSING_TYPE *isInAmbient;	// 73 = 0x49
    MISSING_TYPE *currentProminentAssertion;	// 80 = 0x50
    MISSING_TYPE *sessionListener;	// 88 = 0x58
    MISSING_TYPE *hasUpdatedForLockScreen;	// 96 = 0x60
    MISSING_TYPE *didHaveSpeakableText;	// 97 = 0x61
}

- (void).cxx_destruct;	// IMP=0x0040000000099550
- (id)init;	// IMP=0x001000000009c210
- (void)collapseSystemUI;	// IMP=0x001000000009b6b0
- (_Bool)presentingSystemUI;	// IMP=0x001000000009b540
- (void)orientationChangedTo:(long long)arg1;	// IMP=0x001000000009b4a0
- (void)userDrilledIntoSnippet;	// IMP=0x001000000009b440
- (void)tapToEditPresented;	// IMP=0x001000000009b430
- (void)tearDown;	// IMP=0x001000000009b400
- (_Bool)shouldRedactSnippetForAddViews:(id)arg1;	// IMP=0x001000000009b320
- (id)transformAddViews:(id)arg1 mode:(unsigned long long)arg2 idiom:(long long)arg3;	// IMP=0x001000000009b2b0
- (void)updateSystemUIForAddViews:(id)arg1 viewMode:(long long)arg2 lockState:(unsigned long long)arg3 isInAmbient:(_Bool)arg4;	// IMP=0x0010000000099fd0
- (void)dealloc;	// IMP=0x0010000000099510
- (id)initWithDelegate:(id)arg1 systemUIDevice:(_Bool)arg2 systemApertureSupportedDevice:(_Bool)arg3;	// IMP=0x0010000000099490

@end

