//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareAddURLRequest : CKDURLRequest
{
    CDUnknownBlockType _anonymousShareSavedBlock;	// 8 = 0x8
    NSDictionary *_encryptedAnonymousSharesToAdd;	// 16 = 0x10
    NSMutableDictionary *_encryptedAnonymousShareHashToAddByRequestID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000349ac4
@property(retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToAddByRequestID; // @synthesize encryptedAnonymousShareHashToAddByRequestID=_encryptedAnonymousShareHashToAddByRequestID;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd; // @synthesize encryptedAnonymousSharesToAdd=_encryptedAnonymousSharesToAdd;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareSavedBlock; // @synthesize anonymousShareSavedBlock=_anonymousShareSavedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000349913
- (id)generateRequestOperations;	// IMP=0x0000000000349521
- (id)requestOperationClasses;	// IMP=0x00000000003494b5
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000003493cd
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToAdd:(id)arg2;	// IMP=0x0000000000349334
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x000000000034932c

@end
