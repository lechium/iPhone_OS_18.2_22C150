//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SDAutoUnlockPeer : NSObject
{
    NSString *_deviceID;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
}

+ (id)stringFromState:(unsigned long long)arg1;	// IMP=0x00400000000c83ac
- (void).cxx_destruct;	// IMP=0x00200000000c83f8
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)handleConfirmationFailed;	// IMP=0x00100000000c8398
- (void)handleRemoteRegistrationRequested;	// IMP=0x00100000000c8381
- (void)handleBioLockout;	// IMP=0x00100000000c836d
- (void)handleDeviceUnlocked;	// IMP=0x00100000000c819d
- (void)handleRegistrationFailedKeyLocked;	// IMP=0x00100000000c8186
- (void)handleRegistrationCompletedSuccessfully:(_Bool)arg1;	// IMP=0x00100000000c816f
- (void)handleRegistrationBegan;	// IMP=0x00100000000c80a4
- (void)handlePairedSuccessfully;	// IMP=0x00100000000c7fd9
@property(readonly, nonatomic, getter=isKeyBagLocked) _Bool keyBagLocked;
@property(readonly, nonatomic) _Bool canPerformUnlocks;
@property(readonly, nonatomic) _Bool shouldRegister;
- (id)description;	// IMP=0x00100000000c7eb0
- (id)initWithDeviceID:(id)arg1;	// IMP=0x00100000000c7e2b

@end

