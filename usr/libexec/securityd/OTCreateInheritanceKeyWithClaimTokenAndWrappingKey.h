//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOperation, NSUUID, OTInheritanceKey, OTOperationDependencies;

@interface OTCreateInheritanceKeyWithClaimTokenAndWrappingKey
{
    NSData *_claimTokenData;	// 16 = 0x10
    NSData *_wrappingKeyData;	// 24 = 0x18
    OTInheritanceKey *_ik;	// 32 = 0x20
    OTOperationDependencies *_deps;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    OTInheritanceKey *_oldIK;	// 56 = 0x38
    NSOperation *_finishOp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000bd237
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTInheritanceKey *oldIK; // @synthesize oldIK=_oldIK;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) OTInheritanceKey *ik; // @synthesize ik=_ik;
@property(retain) NSData *wrappingKeyData; // @synthesize wrappingKeyData=_wrappingKeyData;
@property(retain) NSData *claimTokenData; // @synthesize claimTokenData=_claimTokenData;
- (void)proceedWithKeys:(id)arg1 salt:(id)arg2;	// IMP=0x00100000000bcd0c
- (void)groupStart;	// IMP=0x00100000000bcb19
- (id)initWithUUID:(id)arg1 claimTokenData:(id)arg2 wrappingKeyData:(id)arg3 dependencies:(id)arg4;	// IMP=0x00100000000bca00

@end
