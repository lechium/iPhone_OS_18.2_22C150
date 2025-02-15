//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PKFieldProperties, PKFieldPropertiesProbe;
@protocol PDFieldDetectorManagerDelegate;

@interface PDFieldDetectorManager : NSObject
{
    _Atomic _Bool _started;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <PDFieldDetectorManagerDelegate> _delegate;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    PKFieldProperties *_fieldProperties;	// 32 = 0x20
    PKFieldPropertiesProbe *_fieldProbe;	// 40 = 0x28
    _Bool _persistentFieldDetectEnabled;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001d2335
- (void)receivedSecureFieldExitEvent;	// IMP=0x00100000001d1f22
- (void)receivedSecureFieldEntranceEventWithProperties:(id)arg1;	// IMP=0x00100000001d1869
- (void)dealloc;	// IMP=0x00100000001d1516
- (id)init;	// IMP=0x00100000001d148a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

