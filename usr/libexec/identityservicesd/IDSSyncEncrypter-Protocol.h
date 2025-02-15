//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSCryptionContext, NSData, NSDictionary;
@protocol IDSEncryptionSyncQueue;

@protocol IDSSyncEncrypter <NSObject>

@optional
- (NSData *)encryptData:(NSData *)arg1 encryptionContext:(IDSCryptionContext *)arg2 forceSizeOptimizations:(_Bool)arg3 resetState:(_Bool)arg4 withEncryptedAttributes:(NSDictionary *)arg5 usedIdentifier:(id *)arg6 onQueue:(id <IDSEncryptionSyncQueue>)arg7 metadata:(id *)arg8 error:(id *)arg9;
- (NSData *)legacyEncryptData:(NSData *)arg1 withEncryptedAttributes:(NSDictionary *)arg2 onQueue:(id <IDSEncryptionSyncQueue>)arg3 error:(id *)arg4;
@end

