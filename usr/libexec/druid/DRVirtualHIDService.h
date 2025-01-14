//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDVirtualEventService, MISSING_TYPE, NSDictionary, NSString, UIScreen;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface DRVirtualHIDService : NSObject
{
    _Bool _sentUp;	// 8 = 0x8
    _Bool _isOpen;	// 9 = 0x9
    unsigned int _currentPathIndex;	// 12 = 0xc
    UIScreen *_screen;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    HIDVirtualEventService *_eventService;	// 32 = 0x20
    MISSING_TYPE *_queue;	// 40 = 0x28
    struct __IOHIDEvent *_HIDEventBase;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_waitForOpenGroup;	// 56 = 0x38
    struct __IOHIDEvent *_exitedEvent;	// 64 = 0x40
    struct CAPoint3D _currentLocation;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000001b62f
@property(nonatomic) unsigned int currentPathIndex; // @synthesize currentPathIndex=_currentPathIndex;
@property(nonatomic) struct __IOHIDEvent *exitedEvent; // @synthesize exitedEvent=_exitedEvent;
@property(nonatomic) struct CAPoint3D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *waitForOpenGroup; // @synthesize waitForOpenGroup=_waitForOpenGroup;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) _Bool sentUp; // @synthesize sentUp=_sentUp;
@property(nonatomic) struct __IOHIDEvent *HIDEventBase; // @synthesize HIDEventBase=_HIDEventBase;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HIDVirtualEventService *eventService; // @synthesize eventService=_eventService;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (_Bool)_isNormalizedPointOutOfBounds:(struct CAPoint3D)arg1;	// IMP=0x001000000001b4eb
- (void)_updateHIDEventBaseWithLocation:(struct CAPoint3D)arg1 touching:(_Bool)arg2;	// IMP=0x001000000001b2f0
- (void)_initializeHIDEventBaseWithLocation:(struct CAPoint3D)arg1;	// IMP=0x001000000001afe8
- (struct CAPoint3D)_normalizedLocationFromReferenceLocation:(struct CAPoint3D)arg1;	// IMP=0x001000000001aeae
- (void)_sendHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000001ad9e
- (void)_configureHIDServiceIfNeeded;	// IMP=0x001000000001a82b
- (void)notification:(long long)arg1 withProperty:(id)arg2 forService:(id)arg3;	// IMP=0x001000000001a707
- (_Bool)setOutputEvent:(id)arg1 forService:(id)arg2;	// IMP=0x001000000001a6ff
- (id)copyEventMatching:(id)arg1 forService:(id)arg2;	// IMP=0x001000000001a6f7
- (id)propertyForKey:(id)arg1 forService:(id)arg2;	// IMP=0x001000000001a6e1
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 forService:(id)arg3;	// IMP=0x001000000001a673
- (void)dealloc;	// IMP=0x001000000001a541
- (void)lift;	// IMP=0x001000000001a4f3
- (void)liftAtLocation:(struct CAPoint3D)arg1;	// IMP=0x001000000001a3f4
- (void)_moveToLocation:(struct CAPoint3D)arg1;	// IMP=0x001000000001a33c
- (void)moveToLocation:(struct CAPoint3D)arg1;	// IMP=0x001000000001a32a
- (void)beginAtPoint:(struct CAPoint3D)arg1;	// IMP=0x001000000001a2ce
- (id)initWithScreen:(id)arg1;	// IMP=0x001000000001a263

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

