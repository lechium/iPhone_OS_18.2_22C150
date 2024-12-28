//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLDispatchSilo, CLLocationManager, NSData, NSString;

@interface CLFullAccuracySession : NSObject
{
    CLDispatchSilo *_silo;	// 8 = 0x8
    void *_locationdConnection;	// 16 = 0x10
    CDUnknownBlockType _clientCallback;	// 24 = 0x18
    _Bool _shouldBeRunning;	// 32 = 0x20
    NSData *storageToken;	// 40 = 0x28
    NSString *identityToken;	// 48 = 0x30
    CLLocationManager *manager;	// 56 = 0x38
    CDUnknownBlockType weakClient;	// 64 = 0x40
    NSString *_purposeKey;	// 72 = 0x48
}

+ (id)fullAccuracySessionWithLocationManager:(id)arg1 purposeKey:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000dc106
- (void).cxx_destruct;	// IMP=0x00000000000dde1e
@property(readonly, copy, nonatomic) NSString *purposeKey; // @synthesize purposeKey=_purposeKey;
@property _Bool shouldBeRunning; // @synthesize shouldBeRunning=_shouldBeRunning;
@property(nonatomic) __weak CDUnknownBlockType weakClient; // @synthesize weakClient;
@property(retain, nonatomic) CLLocationManager *manager; // @synthesize manager;
@property(retain, nonatomic) NSString *identityToken; // @synthesize identityToken;
@property(retain, nonatomic) NSData *storageToken; // @synthesize storageToken;
- (void)invalidate;	// IMP=0x00000000000ddbd2
- (void)dealloc;	// IMP=0x00000000000dd7d9
- (void)destroyConnection;	// IMP=0x00000000000dd3b4
- (void)tearDown;	// IMP=0x00000000000dd326
- (void)handleMessageDiagnostics:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x00000000000dd120
- (void)handleMessage:(shared_ptr_bdcc6d0f)arg1;	// IMP=0x00000000000dcef1
- (void)createConnection;	// IMP=0x00000000000dc80f
- (void)manageConnection;	// IMP=0x00000000000dc676
- (void)updateIdentityToken:(id)arg1 withStorageToken:(id)arg2;	// IMP=0x00000000000dc49f
- (id)initWithLocationManager:(id)arg1 purposeKey:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dc179

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
