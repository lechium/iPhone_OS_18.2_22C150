//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSGroupSessionDataCryptor.h>

@class NSArray, NSString, NSUUID;

@interface IDSGroupSessionDataCryptor (CopresenceCore)
- (id)decryptData:(id)arg1 keyID:(id)arg2 seqNum:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0020000000003603
- (id)encryptData:(id)arg1 seqNum:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00200000000035f1
@property(readonly, nonatomic) NSArray *decryptionKeyIDSet;
@property(readonly, nonatomic) NSUUID *encryptionKeyID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
