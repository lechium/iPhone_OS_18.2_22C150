//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSSiriLauncher : NSObject
{
}

+ (id)sharedLauncher;	// IMP=0x00400000000901ca
- (void)notifyDarwinVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 myriadLateActivationExpirationTime:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x004000000008e82b
- (void)notifyDarwinVoiceTriggerPrewarmWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008e795
- (void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x001000000008e6da
- (void)notifyContinuousConversationActivation:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e5ac
- (void)notifyWakeKeywordSpokenRemora:(id)arg1 deviceId:(id)arg2;	// IMP=0x001000000008e5a6
- (void)notifyRemoraVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 deviceId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e593
- (void)notifyRemoraVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e505
- (void)notifyWakeKeywordSpokenBluetoothDevice:(id)arg1 deviceId:(id)arg2;	// IMP=0x001000000008e4c6
- (void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e35b
- (void)notifyBluetoothDeviceVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e298
- (void)notifyWakeKeywordSpokenCarPlay:(id)arg1 deviceId:(id)arg2;	// IMP=0x001000000008e259
- (void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008dfae
- (void)notifyCarPlayVoiceTriggerPrewarm:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008deeb
- (void)notifyWakeKeywordSpokenInBuiltInMic:(id)arg1;	// IMP=0x001000000008dec9
- (void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008dbdb
- (void)_notifyBuiltInVoiceTriggerPrewarm:(id)arg1 activationSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008db29
- (void)notifyBuiltInVoiceTriggerPrewarm:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008db0f
- (void)notifyBuiltInVoiceTriggerPrewarmExclave:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008daf5

@end

