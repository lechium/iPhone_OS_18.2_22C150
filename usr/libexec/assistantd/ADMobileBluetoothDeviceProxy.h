//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource, AFBluetoothDeviceInfo, AFBluetoothHeadphoneInEarDetectionState, MISSING_TYPE, NSHashTable, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ADMobileBluetoothDeviceProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    AFBluetoothDeviceInfo *_deviceInfo;	// 32 = 0x20
    AFBluetoothHeadphoneInEarDetectionState *_headphoneInEarDetectionState;	// 40 = 0x28
    long long _headphoneListeningMode;	// 48 = 0x30
    NSString *_address;	// 56 = 0x38
    NSUUID *_deviceUID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000012a141
@property(readonly, copy, nonatomic) NSUUID *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000012a06e
- (void)_invalidate;	// IMP=0x0010000000129f63
- (void)_accessBTDeviceAndAccessoryManagerUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129ca0
- (void)_changeHeadphoneListeningMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129b6f
- (void)_fetchHeadphoneListeningModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129a5b
- (void)_fetchHeadphoneInEarDetectionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129947
- (void)_fetchDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129833
- (void)_updateHeadphoneListeningMode:(long long)arg1;	// IMP=0x00100000001296cd
- (MISSING_TYPE *)_updateHeadphoneInEarDetectionState: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001294c8
- (void)_updateDeviceInfo:(id)arg1;	// IMP=0x00100000001292c3
- (void)_getPersonalVolume:(CDUnknownBlockType)arg1;	// IMP=0x0010000000129236
- (void)_getConversationAwareness:(CDUnknownBlockType)arg1;	// IMP=0x00100000001291a9
- (void)_setPersonalVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012910a
- (void)_setConversationAwareness:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012906b
- (void)_setHeadphoneListeningMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128fcb
- (void)_getHeadphoneListeningMode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128f34
- (void)_getHeadphoneInEarDetectionState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128e9d
- (void)_getDeviceInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128dfc
- (void)_reload:(_Bool)arg1;	// IMP=0x0010000000128ba5
- (void)invalidate;	// IMP=0x0010000000128b5a
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000128ac3
- (void)addObserver:(id)arg1;	// IMP=0x0010000000128a2c
- (void)getHeadGestures:(CDUnknownBlockType)arg1;	// IMP=0x001000000012899f
- (void)getPersonalVolume:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128912
- (void)getConversationAwareness:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128885
- (void)setHeadGestures:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001287f8
- (void)setPersonalVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000128759
- (void)setConversationAwareness:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001286ba
- (void)setHeadphoneListeningMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000012861a
- (void)getHeadphoneListeningMode:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128583
- (void)getHeadphoneInEarDetectionState:(CDUnknownBlockType)arg1;	// IMP=0x00100000001284ec
- (void)getDeviceInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000128455
- (id)deviceInfo;	// IMP=0x00100000001282a3
- (id)identifier;	// IMP=0x0010000000128258
- (void)prewarm;	// IMP=0x001000000012820d
- (void)reload;	// IMP=0x00100000001281c2
- (void)updateHeadphoneListeningMode:(long long)arg1;	// IMP=0x0010000000128173
- (void)updateHeadphoneInEarDetectionState:(id)arg1;	// IMP=0x00100000001280e6
- (void)updateDeviceInfo:(id)arg1;	// IMP=0x0010000000128059
- (id)initWithDeviceUID:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000127eb6
- (id)initWithAddress:(id)arg1 dataSource:(id)arg2 queue:(id)arg3;	// IMP=0x0010000000127d13
- (void)dealloc;	// IMP=0x0010000000127c5e
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

