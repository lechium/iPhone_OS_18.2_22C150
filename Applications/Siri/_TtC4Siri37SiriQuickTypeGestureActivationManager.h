//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE;

@interface _TtC4Siri37SiriQuickTypeGestureActivationManager : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *previousFaceDetectionResult;	// 112 = 0x70
    MISSING_TYPE *latestFaceDetectionResult;	// 136 = 0x88
    MISSING_TYPE *latestFaceDetectionResultFuture;	// 0 = 0x0
    MISSING_TYPE *isFaceDetectionInFlight;	// 0 = 0x0
    MISSING_TYPE *attentionAwarenessClient;	// 0 = 0x0
}

- (void)canActivateWithCompletionHandler:(void (^)(_Bool))arg1;	// IMP=0x00400000000a0550
- (void)cancelPrewarmForFirstTapOfQuickTypeToSiriGestureWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x001000000009f2e0
- (void)prewarmForFirstTapOfQuickTypeToSiriGestureWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x001000000009eae0
- (id)init;	// IMP=0x001000000009e0d0

@end

