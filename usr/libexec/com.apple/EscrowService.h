//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBEscrowOperationLogger;

@interface EscrowService : NSObject
{
    SBEscrowOperationLogger *_operationsLogger;	// 8 = 0x8
}

+ (_Bool)isFatalError:(id)arg1;	// IMP=0x0020000000045dc7
+ (id)createEscrowBlobWithCertificate:(id)arg1 escrowRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000045a91
+ (id)doubleEnrollmentRecordFromPrimaryRecord:(id)arg1;	// IMP=0x00100000000456a5
+ (id)certificateRequest:(id)arg1 duplicate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000041347
- (void).cxx_destruct;	// IMP=0x002000000004bf8d
@property(readonly, nonatomic) SBEscrowOperationLogger *operationsLogger; // @synthesize operationsLogger=_operationsLogger;
- (void)logRecoveryResults:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004be0a
- (void)verifyCertificateWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b97c
- (void)getCountrySMSCodesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b790
- (void)listSMSTargetsWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b5a4
- (void)changeSMSTargetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004b2f0
- (void)startSMSChallengeWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004afda
- (void)updateRecordMetadataWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004ab38
- (void)_deleteRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a793
- (void)deleteRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049dac
- (void)ttrForPCSDataMatchFailure:(id)arg1;	// IMP=0x00100000000496cd
- (void)_performDoubleRecoveryStingrayWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000048d86
- (void)_performDoubleRecoveryICDPWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000048351
- (void)_performPostEnrollSilentRecoveryWithRequest:(id)arg1;	// IMP=0x0010000000047fb6
- (void)recoverRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000479a4
- (void)_recoverActualRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046e40
- (void)setPasswordMetadataWithRequest:(id)arg1 response:(id)arg2 ses:(id)arg3;	// IMP=0x0010000000046b12
- (void)_srpInitHelper:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000046733
- (void)_recoverWithVersion:(int)arg1 req:(id)arg2 duplicate:(_Bool)arg3 sesWrapper:(id)arg4 srpInitResponse:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000045ef8
- (_Bool)processPrerecord:(id)arg1 outerRequest:(id)arg2 escrowRequest:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000045130
- (void)storeRecordWithCertDataRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000447ca
- (_Bool)_invalidateEscrowCache:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000044640
- (void)_storeRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044017
- (void)storeRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043523
- (id)fetchCachedCertificateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000042c9e
- (_Bool)cacheStoredCertificate:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000042aab
- (id)keychainBaseQueryWithEnvironment:(id)arg1 andBaseURL:(id)arg2;	// IMP=0x0010000000042943
- (void)fetchCertificatesAndDuplicateRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000042025
- (void);	// IMP=0x0010000000041f61
- (void)_fetchCertificatesWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000041ae5
- (void)getAccountInfoWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000410c6
- (id)initWithOperationsLogger:(id)arg1;	// IMP=0x0010000000041048
- (id)_getBypassToken;	// IMP=0x0010000000040ea7
- (void)_removeBypassToken;	// IMP=0x0010000000040d8b
- (void)_saveBypassToken:(id)arg1;	// IMP=0x0010000000040c3c

@end

