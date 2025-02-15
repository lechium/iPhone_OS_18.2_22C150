//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue, XCTAccessibilityFramework;

@interface XCTDAccessibilitySystem : NSObject
{
    _Bool _accelerometerEnabled;	// 8 = 0x8
    _Bool _passiveListeningModeEnabled;	// 9 = 0x9
    _Bool _accessibilityLoaded;	// 10 = 0xa
    id <XCTAccessibilityFramework> _accessibilityFramework;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    struct __AXUIElement *_systemWideElement;	// 32 = 0x20
    NSMutableSet *_activeTokens;	// 40 = 0x28
    CDStruct_f25c63ae _accessibilityFunctions;	// 48 = 0x30
}

+ (id)sharedSystem;	// IMP=0x002000000001031e
- (void).cxx_destruct;	// IMP=0x0020000000011b96
@property(retain) NSMutableSet *activeTokens; // @synthesize activeTokens=_activeTokens;
@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property _Bool accessibilityLoaded; // @synthesize accessibilityLoaded=_accessibilityLoaded;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) CDStruct_f25c63ae accessibilityFunctions; // @synthesize accessibilityFunctions=_accessibilityFunctions;
@property(readonly) id <XCTAccessibilityFramework> accessibilityFramework; // @synthesize accessibilityFramework=_accessibilityFramework;
@property(nonatomic) _Bool passiveListeningModeEnabled; // @synthesize passiveListeningModeEnabled=_passiveListeningModeEnabled;
@property(nonatomic) _Bool accelerometerEnabled; // @synthesize accelerometerEnabled=_accelerometerEnabled;
@property(readonly) CDUnknownFunctionPointerType observerGetRunLoopSourceFunc;
@property(readonly) CDUnknownFunctionPointerType observerCreateFunc;
@property(readonly) CDUnknownFunctionPointerType observerAddNotificationFunc;
- (id)_queue_createAccessibilitySessionToken;	// IMP=0x00100000000119bf
- (void)invalidateToken:(id)arg1;	// IMP=0x00100000000117af
- (void)_queue_setAccelerometerEnabled:(_Bool)arg1;	// IMP=0x0010000000011630
- (void)_queue_setPassiveListeningModeEnabled:(_Bool)arg1;	// IMP=0x00100000000113a7
- (void)_queue_unloadAccessibility;	// IMP=0x001000000001117e
- (_Bool)_queue_setDisableOnTerminationWithError:(id *)arg1;	// IMP=0x0010000000010f87
- (_Bool)_queue_loadAccessibilityIfNeeded:(_Bool)arg1 andWaitForNotificationWithTimeout:(double)arg2 error:(id *)arg3;	// IMP=0x0010000000010bc5
- (id)_queue_loadAccessibilityWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x0010000000010855
- (id)loadAccessibilityWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x00100000000105ae
- (void)dealloc;	// IMP=0x00100000000104ad
- (id)initWithAccessibilityFunctions:(CDStruct_f25c63ae)arg1;	// IMP=0x00100000000103c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

