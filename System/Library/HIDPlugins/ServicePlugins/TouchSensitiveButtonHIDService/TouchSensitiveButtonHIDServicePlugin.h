//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HIDDevice, HIDUserDevice, NSString, TouchSensitiveButtonHIDService;
@protocol OS_os_log;

@interface TouchSensitiveButtonHIDServicePlugin : NSObject
{
    unsigned int _service;	// 8 = 0x8
    HIDDevice *_hidDevice;	// 16 = 0x10
    HIDUserDevice *_userDevice;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    TouchSensitiveButtonHIDService *_hidService;	// 40 = 0x28
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0010000000001161
- (void).cxx_destruct;	// IMP=0x0000000000001f13
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000000001c90
- (void)cancel;	// IMP=0x0000000000001c31
- (void)activate;	// IMP=0x0000000000001bd2
- (void)setCancelHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b59
- (void)setEventDispatcher:(id)arg1;	// IMP=0x0000000000001af4
- (id)eventMatching:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000000001ac1
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;	// IMP=0x0000000000001a39
- (id)propertyForKey:(id)arg1 client:(id)arg2;	// IMP=0x00000000000019a9
- (_Bool)createUserDevice;	// IMP=0x0000000000001745
- (void)dealloc;	// IMP=0x00000000000016db
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000001214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
