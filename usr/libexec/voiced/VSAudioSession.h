//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface VSAudioSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _audioSessionIsSetUp;	// 16 = 0x10
    CDStruct_a87a0d46 _desiredState;	// 24 = 0x18
    CDStruct_a87a0d46 _cachedState;	// 40 = 0x28
    _Bool _bluetoothAllowed;	// 56 = 0x38
    struct __CFBag *_activityBag;	// 64 = 0x40
    long long _serverGeneration;	// 72 = 0x48
}

+ (long long)_VSAudioCategoryForActivity:(long long)arg1;	// IMP=0x004000000000f06e
+ (id)sharedInstance;	// IMP=0x001000000000f03e
- (void).cxx_destruct;	// IMP=0x002000000000e8d5
- (void)_safeSetBluetoothInputAllowed:(_Bool)arg1;	// IMP=0x001000000000e887
- (void)_safeSetActive:(_Bool)arg1 withActivity:(long long)arg2;	// IMP=0x001000000000e779
- (void)_safeSetCategoryForActivity:(long long)arg1;	// IMP=0x001000000000e72a
- (long long)_safeServerGeneration;	// IMP=0x001000000000e69e
- (void)_safeSetupAudioSession;	// IMP=0x001000000000e653
- (long long)_nextActivityForActive:(_Bool)arg1 activity:(long long)arg2 serverActivity:(long long)arg3;	// IMP=0x001000000000e464
- (void)_setCategoryForActivity:(long long)arg1;	// IMP=0x001000000000e109
- (void)_setupAudioSession;	// IMP=0x001000000000df7a
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x001000000000df2f
- (void)_audioSessionInterrupted:(id)arg1;	// IMP=0x001000000000de68
- (void)dealloc;	// IMP=0x001000000000dde5
- (id)init;	// IMP=0x001000000000dcfa

@end
