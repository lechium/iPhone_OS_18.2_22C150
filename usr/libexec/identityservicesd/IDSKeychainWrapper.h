//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSKeychainWrapper : NSObject
{
}

+ (long long)idsKeychainWrapperDataProtectionClassFromIMDataProtectionClass:(unsigned int)arg1;	// IMP=0x004000000006e5d6
+ (unsigned int)imDataProtectionClassFromDataProtectionClass:(long long)arg1;	// IMP=0x001000000006e5cd
+ (id)descriptionForDataProtectionClass:(long long)arg1;	// IMP=0x001000000006e5a3
+ (id)shortDescriptionForDataProtectionClass:(long long)arg1;	// IMP=0x001000000006e579
+ (_Bool)isInteractionNotAllowedError:(id)arg1;	// IMP=0x001000000006e562
+ (_Bool)isUpgradePendingError:(id)arg1;	// IMP=0x001000000006e54b
+ (_Bool)isItemNotFoundError:(id)arg1;	// IMP=0x001000000006e534
+ (_Bool)_isKeychainError:(id)arg1 withOSStatus:(int)arg2;	// IMP=0x001000000006e40a
- (id)_keychainAccountFromBaseIdentifier:(id)arg1;	// IMP=0x004000000006ecde
- (_Bool)removeDataForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2 error:(id *)arg3;	// IMP=0x001000000006ec3c
- (void)saveData:(id)arg1 forIdentifier:(id)arg2 dataProtectionClass:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006ea91
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 allowBackup:(_Bool)arg4 dataProtectionClass:(long long)arg5 error:(id *)arg6;	// IMP=0x001000000006e85a
- (_Bool)saveData:(id)arg1 forIdentifier:(id)arg2 allowSync:(_Bool)arg3 dataProtectionClass:(long long)arg4 error:(id *)arg5;	// IMP=0x001000000006e836
- (id)dataForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006e5f2
- (id)dataForIdentifier:(id)arg1;	// IMP=0x001000000006e5de

@end
