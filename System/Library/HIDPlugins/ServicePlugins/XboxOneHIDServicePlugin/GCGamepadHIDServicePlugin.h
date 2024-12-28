//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDConnection, HIDDevice, HIDUserDevice, MISSING_TYPE, NSArray, NSNumber, NSString, NSXPCConnection;
@protocol GCBatteryServiceClientInterface, HIDEventDispatcher, OS_dispatch_queue, OS_dispatch_source;

@interface GCGamepadHIDServicePlugin : NSObject
{
    CDUnknownBlockType _cancelHandler;	// 8 = 0x8
    NSNumber *_prop;	// 16 = 0x10
    _Bool _activated;	// 24 = 0x18
    _Bool _clientAdded;	// 25 = 0x19
    NSObject<OS_dispatch_source> *_idleDispatchSource;	// 32 = 0x20
    struct BTSessionImpl *_session;	// 40 = 0x28
    _Bool _buttonHome;	// 48 = 0x30
    _Bool _buttonMenu;	// 49 = 0x31
    _Bool _buttonOptions;	// 50 = 0x32
    _Bool _buttonSearch;	// 51 = 0x33
    _Bool _buttonShare;	// 52 = 0x34
    struct {
        double directionPadUp;
        double directionPadDown;
        double directionPadLeft;
        double directionPadRight;
        double buttonA;
        double buttonB;
        double buttonX;
        double buttonY;
        double buttonL1;
        double buttonR1;
        double buttonL2;
        double buttonR2;
        _Bool leftThumbstick__rightThumbstick__buttonL3;
        _Bool buttonR3;
        unsigned int controllerType;
    } _gameControllerState;	// 56 = 0x38
    CDStruct_ba80db9a _gameControllerExtendedState;	// 176 = 0xb0
    unsigned int _motionSequenceNumber;	// 376 = 0x178
    CDStruct_06597ee6 _motionState;	// 384 = 0x180
    _Bool _hapticsActive;	// 488 = 0x1e8
    int _pendingHapticZeroReports;	// 492 = 0x1ec
    float _hapticDispatchFrequency;	// 496 = 0x1f0
    double _currentHapticClipTime;	// 504 = 0x1f8
    struct timespec _currentHapticDispatchTime;	// 512 = 0x200
    _Bool _loopHapticEvent;	// 528 = 0x210
    NSObject<OS_dispatch_source> *_hapticDispatchSource;	// 536 = 0x218
    NSXPCConnection *_daemonConnection;	// 544 = 0x220
    id <GCBatteryServiceClientInterface> _batteryClient;	// 552 = 0x228
    NSObject<OS_dispatch_queue> *_internalQueue;	// 560 = 0x230
    double _inputEventDelay;	// 568 = 0x238
    _Bool _bluetoothClassic;	// 576 = 0x240
    _Bool _usb;	// 577 = 0x241
    _Bool _bluetoothLE;	// 578 = 0x242
    _Bool _virtualDevice;	// 579 = 0x243
    unsigned int _service;	// 580 = 0x244
    float _idleTimeoutDuration;	// 584 = 0x248
    float _leftThumbstickNoiseBuffer;	// 588 = 0x24c
    float _rightThumbstickNoiseBuffer;	// 592 = 0x250
    float _leftThumbstickDeadzoneRadius;	// 596 = 0x254
    float _leftThumbstickAxisSnapRadius;	// 600 = 0x258
    float _rightThumbstickDeadzoneRadius;	// 604 = 0x25c
    float _rightThumbstickAxisSnapRadius;	// 608 = 0x260
    HIDConnection *_client;	// 616 = 0x268
    id <HIDEventDispatcher> _dispatcher;	// 624 = 0x270
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 632 = 0x278
    HIDDevice *_device;	// 640 = 0x280
    HIDUserDevice *_batteryUserDevice;	// 648 = 0x288
    unsigned long long _regID;	// 656 = 0x290
    unsigned long long _lastEventTime;	// 664 = 0x298
    NSString *_uniqueIdentifier;	// 672 = 0x2a0
    CDStruct_f4b747e6 *_batteryReport;	// 680 = 0x2a8
    NSArray *_hapticMotors;	// 688 = 0x2b0
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0010000000003b83
- (void).cxx_destruct;	// IMP=0x00000000000083a2
@property(nonatomic) float rightThumbstickAxisSnapRadius; // @synthesize rightThumbstickAxisSnapRadius=_rightThumbstickAxisSnapRadius;
@property(nonatomic) float rightThumbstickDeadzoneRadius; // @synthesize rightThumbstickDeadzoneRadius=_rightThumbstickDeadzoneRadius;
@property(nonatomic) float leftThumbstickAxisSnapRadius; // @synthesize leftThumbstickAxisSnapRadius=_leftThumbstickAxisSnapRadius;
@property(nonatomic) float leftThumbstickDeadzoneRadius; // @synthesize leftThumbstickDeadzoneRadius=_leftThumbstickDeadzoneRadius;
@property(retain, nonatomic) NSArray *hapticMotors; // @synthesize hapticMotors=_hapticMotors;
@property(nonatomic) float hapticDispatchFrequency; // @synthesize hapticDispatchFrequency=_hapticDispatchFrequency;
@property(nonatomic) float rightThumbstickNoiseBuffer; // @synthesize rightThumbstickNoiseBuffer=_rightThumbstickNoiseBuffer;
@property(nonatomic) float leftThumbstickNoiseBuffer; // @synthesize leftThumbstickNoiseBuffer=_leftThumbstickNoiseBuffer;
@property(nonatomic) float idleTimeoutDuration; // @synthesize idleTimeoutDuration=_idleTimeoutDuration;
@property(readonly, nonatomic, getter=isVirtualDevice) _Bool virtualDevice; // @synthesize virtualDevice=_virtualDevice;
@property(readonly, nonatomic, getter=isBluetoothLE) _Bool bluetoothLE; // @synthesize bluetoothLE=_bluetoothLE;
@property(readonly, nonatomic, getter=isUSB) _Bool usb; // @synthesize usb=_usb;
@property(readonly, nonatomic, getter=isBluetoothClassic) _Bool bluetoothClassic; // @synthesize bluetoothClassic=_bluetoothClassic;
@property(readonly, nonatomic) CDStruct_f4b747e6 *batteryReport; // @synthesize batteryReport=_batteryReport;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(readonly, nonatomic) HIDUserDevice *batteryUserDevice; // @synthesize batteryUserDevice=_batteryUserDevice;
@property(readonly, nonatomic) HIDDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) unsigned int service; // @synthesize service=_service;
@property(nonatomic) __weak id <HIDEventDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak HIDConnection *client; // @synthesize client=_client;
- (void)readBatteryWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008128
- (void)connectToGenericDeviceDriverConfigurationServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008116
- (void)connectToGameIntentServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008104
- (void)connectToBatteryServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008021
- (void)connectToMotionServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000800f
- (void)connectToAdaptiveTriggersServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007ffd
- (void)connectToLightServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007feb
- (void)connectToNintendoJoyConFusionGestureServiceWithClient:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007fd9
- (void)enqueueTransient:(id)arg1 hapticMotor:(unsigned long long)arg2;	// IMP=0x0000000000007f08
- (void)setHapticMotor:(unsigned long long)arg1 frequency:(float)arg2 amplitude:(float)arg3;	// IMP=0x0000000000007e94
- (void)fetchDeviceRegistryIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007e11
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000007e03
- (id)defaultHapticMotors;	// IMP=0x0000000000007dea
- (float)defaultRightAxisSnapRadius;	// IMP=0x0000000000007de1
- (float)defaultLeftAxisSnapRadius;	// IMP=0x0000000000007dd8
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000007dca
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x0000000000007dbc
- (float)defaultIdleTimeoutDuration;	// IMP=0x0000000000007dae
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000007da5
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000007d9c
- (void)enableHaptics;	// IMP=0x0000000000007ad4
- (_Bool)updateHapticMotor:(id)arg1;	// IMP=0x00000000000079cc
- (void)stopHaptics;	// IMP=0x00000000000077e0
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x00000000000077d5
- (_Bool)isHapticsActive;	// IMP=0x00000000000077c9
- (void)updateHaptics:(_Bool)arg1;	// IMP=0x00000000000077c3
- (void)dispatchHapticEvent;	// IMP=0x00000000000077bd
- (_Bool)isAnyHapticMotorEnabled;	// IMP=0x00000000000075ad
- (void)dispatchShareButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000074d7
- (void)dispatchSearchButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000007401
- (void)dispatchOptionsButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000732b
- (void)dispatchMenuButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000007255
- (void)dispatchHomeButtonEventWithValue:(_Bool)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000717f
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_ba80db9a)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x000000000000716b
- (void)dispatchGameControllerExtendedEventWithState:(CDStruct_ba80db9a)arg1 timestamp:(unsigned long long)arg2 children:(id)arg3;	// IMP=0x0000000000006ade
- (void)dispatchMotionEventWithState:(CDStruct_06597ee6)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000006824
- (_Bool)isTwoAxisInputIdle:(MISSING_TYPE **)arg1 prevInput:(MISSING_TYPE **)arg2 noiseBuffer:(float)arg3;	// IMP=0x00000000000067ce
- (void)applyDeadzone:(float)arg1 axisSnapRadius:(float)arg2 input:(MISSING_TYPE **)arg3;	// IMP=0x00000000000066cd
- (void)dispatchIdleEvent:(id)arg1 withInputDelay:(_Bool)arg2;	// IMP=0x000000000000656c
- (void)dispatchEvent:(id)arg1 withInputDelay:(_Bool)arg2;	// IMP=0x00000000000063c1
- (void)dispatchIdleEvent:(id)arg1;	// IMP=0x00000000000063b2
- (void)dispatchEvent:(id)arg1;	// IMP=0x00000000000063a0
- (id)createEvent:(unsigned int)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000006277
- (_Bool)shouldDisconnectWhenIdle;	// IMP=0x000000000000626f
- (_Bool)isIdle;	// IMP=0x00000000000060fc
- (void)updateIdleState;	// IMP=0x0000000000006042
- (void)scheduleIdleTimer;	// IMP=0x0000000000005f0c
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x0000000000005f04
- (void)sendBatteryReport;	// IMP=0x0000000000005df7
- (void)updateClientBattery;	// IMP=0x0000000000005d2a
- (void)createVirtualHIDDeviceForBattery;	// IMP=0x00000000000059ec
- (void)disconnect;	// IMP=0x000000000000578b
- (void)setupRawReportHandling;	// IMP=0x0000000000005785
- (id)createHIDDeviceForService:(unsigned int)arg1;	// IMP=0x0000000000005751
- (void)clientNotification:(id)arg1 added:(_Bool)arg2;	// IMP=0x000000000000566c
- (void)setDispatchQueue:(id)arg1;	// IMP=0x000000000000557f
- (void)cancel;	// IMP=0x0000000000005415
- (void)activate;	// IMP=0x0000000000005386
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005186
- (void)setEventDispatcher:(id)arg1;	// IMP=0x00000000000050c8
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000000004f57
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000004e22
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x00000000000048fa
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000045b7
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000003f42
- (void)initGameControllerDaemonXPC;	// IMP=0x0000000000003b8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
