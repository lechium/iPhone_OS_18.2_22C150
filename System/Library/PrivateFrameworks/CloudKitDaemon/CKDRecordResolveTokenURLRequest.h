//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDProtocolTranslator, NSArray, NSMutableDictionary, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest
{
    _Bool _shouldFetchRootRecord;	// 8 = 0x8
    NSSet *_rootRecordDesiredKeySet;	// 16 = 0x10
    CDUnknownBlockType _tokenResolveBlock;	// 24 = 0x18
    NSArray *_lookupInfos;	// 32 = 0x20
    NSMutableDictionary *_lookupInfosByRequestID;	// 40 = 0x28
    CKDProtocolTranslator *_privateDBTranslator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014c3bf
@property(retain, nonatomic) CKDProtocolTranslator *privateDBTranslator; // @synthesize privateDBTranslator=_privateDBTranslator;
@property(retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID; // @synthesize lookupInfosByRequestID=_lookupInfosByRequestID;
@property(retain, nonatomic) NSArray *lookupInfos; // @synthesize lookupInfos=_lookupInfos;
@property(copy, nonatomic) CDUnknownBlockType tokenResolveBlock; // @synthesize tokenResolveBlock=_tokenResolveBlock;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSSet *rootRecordDesiredKeySet; // @synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000014c19e
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000014a230
- (id)generateRequestOperations;	// IMP=0x0000000000149e4b
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x0000000000149e43
- (_Bool)sendRequestAnonymously;	// IMP=0x0000000000149da2
- (long long)databaseScope;	// IMP=0x0000000000149d97
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x0000000000149d8f
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x0000000000149d82
- (id)requestOperationClasses;	// IMP=0x0000000000149d16
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000149c2e
- (id)initWithOperation:(id)arg1 shortTokenLookupInfos:(id)arg2;	// IMP=0x0000000000149b95

@end
