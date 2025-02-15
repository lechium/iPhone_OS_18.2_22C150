//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CCSet, CKDistributedTimestampStateVector;

__attribute__((visibility("hidden")))
@interface CCFetchMergeableDeltasRequest
{
    CCSet *_set;	// 40 = 0x28
    CKDistributedTimestampStateVector *_stateVector;	// 48 = 0x30
    unsigned long long _atomBatchVersion;	// 56 = 0x38
}

+ (id)fetchMergableDeltasRequestFromPeerToPeerMessage:(id)arg1 set:(id)arg2 stateVector:(id)arg3 atomBatchVersion:(unsigned long long)arg4;	// IMP=0x0060000000018f41
- (void).cxx_destruct;	// IMP=0x000000000001969c
@property(nonatomic) unsigned long long atomBatchVersion; // @synthesize atomBatchVersion=_atomBatchVersion;
@property(retain, nonatomic) CKDistributedTimestampStateVector *stateVector; // @synthesize stateVector=_stateVector;
@property(retain, nonatomic) CCSet *set; // @synthesize set=_set;
- (id)dictionaryRepresentation;	// IMP=0x000000000001930b
- (id)initFromDictionary:(id)arg1;	// IMP=0x0000000000019079

@end

