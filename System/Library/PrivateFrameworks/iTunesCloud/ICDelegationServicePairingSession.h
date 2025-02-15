//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICDelegationServiceSecuritySettings, NSData, NSMutableArray, NSMutableData;
@protocol ICDelegationServicePairingSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationServicePairingSession : NSObject
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    NSMutableArray *_existingPairingCompletionHandlers;	// 24 = 0x18
    NSData *_inputKey;	// 32 = 0x20
    NSMutableData *_inputNonce;	// 40 = 0x28
    NSData *_outputKey;	// 48 = 0x30
    NSMutableData *_outputNonce;	// 56 = 0x38
    struct PairingSessionPrivate *_pairingSession;	// 64 = 0x40
    long long _state;	// 72 = 0x48
    id <ICDelegationServicePairingSessionDelegate> _delegate;	// 80 = 0x50
    long long _role;	// 88 = 0x58
    ICDelegationServiceSecuritySettings *_securitySettings;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000013fa2c
@property(readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings; // @synthesize securitySettings=_securitySettings;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) __weak id <ICDelegationServicePairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013f8a3
- (void)_receivedData:(id)arg1;	// IMP=0x000000000013f62b
- (_Bool)_deriveEncryptionKeysReturningError:(id *)arg1;	// IMP=0x000000000013f0f2
- (void)_handlePairingSessionCompletionWithError:(id)arg1;	// IMP=0x000000000013eeaa
- (id)_encryptedDataForData:(id)arg1;	// IMP=0x000000000013ed3a
- (void)getEncryptedDataForData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013ec83
- (void)getDecryptedDataForEncryptedData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000013ebcc
- (void)receievedData:(id)arg1;	// IMP=0x000000000013eb3f
- (void)prepareEncryptedSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000013eab2
- (void)dealloc;	// IMP=0x000000000013ea73
- (id)initWithRole:(long long)arg1 securitySettings:(id)arg2;	// IMP=0x000000000013e9bb

@end

