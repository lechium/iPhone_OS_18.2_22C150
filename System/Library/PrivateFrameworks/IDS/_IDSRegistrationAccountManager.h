//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface _IDSRegistrationAccountManager : NSObject
{
    NSMutableArray *_knownDevices;	// 8 = 0x8
    NSMutableArray *_knownRegistrations;	// 16 = 0x10
    NSMutableDictionary *_accountIDToAccounts;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fd84f
@property(retain, nonatomic) NSMutableDictionary *accountIDToAccounts; // @synthesize accountIDToAccounts=_accountIDToAccounts;
@property(retain, nonatomic) NSMutableArray *knownRegistrations; // @synthesize knownRegistrations=_knownRegistrations;
@property(retain, nonatomic) NSMutableArray *knownDevices; // @synthesize knownDevices=_knownDevices;
- (void)removeAllRecords;	// IMP=0x00000000000fd7c1
- (id)allAccountIDs;	// IMP=0x00000000000fd771
- (id)accountIDToRegistrationMapping;	// IMP=0x00000000000fd2fd
- (id)registeredDeviceInfoForAccountID:(id)arg1;	// IMP=0x00000000000fd045
- (id)_findOrCreateDeviceForDictionary:(id)arg1;	// IMP=0x00000000000fcea7
- (void)_deleteUnusedRegistrationData;	// IMP=0x00000000000fc997
- (id)_findOrCreateRegistrationInfoForDictionary:(id)arg1;	// IMP=0x00000000000fc722
- (void)updateAccount:(id)arg1 withRegistration:(id)arg2;	// IMP=0x00000000000fc37c
- (id)init;	// IMP=0x00000000000fc2bb

@end

