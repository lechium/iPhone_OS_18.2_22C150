//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSTimer, XCElementSnapshot, XCUIRecorderAction;
@protocol XCAXManager, XCTMessagingChannel_DaemonRecorderToIDE;

@interface XCUIRecorderService_iOS : NSObject
{
    _Bool _recordingEnabled;	// 8 = 0x8
    _Bool _enabledAccelerometer;	// 9 = 0x9
    int _processPID;	// 12 = 0xc
    id <XCTMessagingChannel_DaemonRecorderToIDE> _client;	// 16 = 0x10
    id <XCAXManager> _axManager;	// 24 = 0x18
    struct __AXUIElement *_systemWideElement;	// 32 = 0x20
    XCUIRecorderAction *_currentAction;	// 40 = 0x28
    XCElementSnapshot *_snapshotForCurrentEventSequence;	// 48 = 0x30
    NSTimer *_reportRetryTimer;	// 56 = 0x38
    NSNumber *_hidEventNotificationToken;	// 64 = 0x40
    NSNumber *_firstResponderChangedNotificationToken;	// 72 = 0x48
    NSArray *_applicationSnapshotAttributes;	// 80 = 0x50
    NSDictionary *_applicationSnapshotParameters;	// 88 = 0x58
    NSArray *_elementSnapshotAttributes;	// 96 = 0x60
    NSDictionary *_elementSnapshotParameters;	// 104 = 0x68
    NSArray *_simpleTargetGestureNames;	// 112 = 0x70
    NSDictionary *_touchBeganLocation;	// 120 = 0x78
    long long _eventCount;	// 128 = 0x80
    long long _keyEventCounter;	// 136 = 0x88
    long long _keyEventCountForLastFirstResponderChanged;	// 144 = 0x90
}

+ (void)provideCapabilitiesToBuilder:(id)arg1;	// IMP=0x0020000000033346
- (void).cxx_destruct;	// IMP=0x00200000000335b6
@property long long keyEventCountForLastFirstResponderChanged; // @synthesize keyEventCountForLastFirstResponderChanged=_keyEventCountForLastFirstResponderChanged;
@property long long keyEventCounter; // @synthesize keyEventCounter=_keyEventCounter;
@property long long eventCount; // @synthesize eventCount=_eventCount;
@property _Bool enabledAccelerometer; // @synthesize enabledAccelerometer=_enabledAccelerometer;
@property(retain) NSDictionary *touchBeganLocation; // @synthesize touchBeganLocation=_touchBeganLocation;
@property(retain) NSArray *simpleTargetGestureNames; // @synthesize simpleTargetGestureNames=_simpleTargetGestureNames;
@property(retain) NSDictionary *elementSnapshotParameters; // @synthesize elementSnapshotParameters=_elementSnapshotParameters;
@property(retain) NSArray *elementSnapshotAttributes; // @synthesize elementSnapshotAttributes=_elementSnapshotAttributes;
@property(retain) NSDictionary *applicationSnapshotParameters; // @synthesize applicationSnapshotParameters=_applicationSnapshotParameters;
@property(retain) NSArray *applicationSnapshotAttributes; // @synthesize applicationSnapshotAttributes=_applicationSnapshotAttributes;
@property int processPID; // @synthesize processPID=_processPID;
@property(retain) NSNumber *firstResponderChangedNotificationToken; // @synthesize firstResponderChangedNotificationToken=_firstResponderChangedNotificationToken;
@property(retain) NSNumber *hidEventNotificationToken; // @synthesize hidEventNotificationToken=_hidEventNotificationToken;
@property(retain) NSTimer *reportRetryTimer; // @synthesize reportRetryTimer=_reportRetryTimer;
@property _Bool recordingEnabled; // @synthesize recordingEnabled=_recordingEnabled;
@property(retain) XCElementSnapshot *snapshotForCurrentEventSequence; // @synthesize snapshotForCurrentEventSequence=_snapshotForCurrentEventSequence;
@property(retain) XCUIRecorderAction *currentAction; // @synthesize currentAction=_currentAction;
@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(readonly) id <XCAXManager> axManager; // @synthesize axManager=_axManager;
@property(retain) id <XCTMessagingChannel_DaemonRecorderToIDE> client; // @synthesize client=_client;
- (id)_snapshotForTargetApplicationWithError:(id *)arg1;	// IMP=0x00100000000331fd
- (id)_snapshotForApplicationContainingElement:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000032faa
- (void)_processKeyboardEvent:(id)arg1;	// IMP=0x0010000000032efb
- (void)_processDeviceOrientationEvent:(id)arg1;	// IMP=0x0010000000032de3
- (void)_recognizedGestures:(id)arg1;	// IMP=0x0010000000032756
- (void)_recognizedEventTypeName:(id)arg1 atAbsoluteTime:(double)arg2 withStartSnapshot:(id)arg3 endSnapshot:(id)arg4;	// IMP=0x0010000000032515
- (id)_recordedEventNames:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 startLocation:(id)arg4 startElementSnapshot:(id)arg5 startApplicationSnapshot:(id)arg6 endLocation:(id)arg7 endElementSnapshot:(id)arg8 endApplicationSnapshot:(id)arg9;	// IMP=0x001000000003237e
- (void)_reportDeferredActionForEventCount:(id)arg1;	// IMP=0x00100000000322bc
- (_Bool)_reportCurrentActionWaitForTimeInterval:(double *)arg1;	// IMP=0x00100000000320cc
- (void)_processHandEvent:(id)arg1;	// IMP=0x0010000000031ae5
- (void)_processButtonUpEventType:(unsigned int)arg1 withHIDTime:(long long)arg2;	// IMP=0x0010000000031966
- (void)_processButtonDownEventType:(unsigned int)arg1 withHIDTime:(long long)arg2;	// IMP=0x001000000003167f
- (void)_processButtonUpEvent:(id)arg1;	// IMP=0x0010000000031605
- (void)_processButtonDownEvent:(id)arg1;	// IMP=0x001000000003158b
- (void)_releasePendingEvents:(double)arg1;	// IMP=0x001000000003140a
- (id)stringForHandEventType:(unsigned int)arg1;	// IMP=0x0010000000031221
- (id)_elementSnapshotForLocation:(struct CGPoint)arg1 rootElementSnapshot:(id *)arg2;	// IMP=0x0010000000030e30
- (void)_handleHIDEventReceived:(id)arg1;	// IMP=0x0010000000030a2f
- (void)stopRecording;	// IMP=0x001000000003065a
- (void)_registerForKeyEventNotification;	// IMP=0x00100000000301cc
- (void)startRecordingProcessPID:(int)arg1 applicationSnapshotAttributes:(id)arg2 applicationSnapshotParameters:(id)arg3 elementSnapshotAttributes:(id)arg4 elementSnapshotParameters:(id)arg5 simpleTargetGestureNames:(id)arg6;	// IMP=0x001000000002f897
- (void)dealloc;	// IMP=0x001000000002f7cf
- (id)initWithAXManager:(id)arg1;	// IMP=0x001000000002f771
- (id)initWithError:(id *)arg1;	// IMP=0x001000000002f6b3

@end

