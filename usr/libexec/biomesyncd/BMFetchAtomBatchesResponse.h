//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface BMFetchAtomBatchesResponse
{
    _Bool _moreComing;	// 40 = 0x28
    NSArray *_unseenPeers;	// 48 = 0x30
    NSDictionary *_atomBatches;	// 56 = 0x38
    unsigned long long _atomBatchBytes;	// 64 = 0x40
    NSDictionary *_deletedLocations;	// 72 = 0x48
    unsigned long long _batchSequenceNumber;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000002107c
@property(nonatomic) unsigned long long batchSequenceNumber; // @synthesize batchSequenceNumber=_batchSequenceNumber;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(retain, nonatomic) NSDictionary *deletedLocations; // @synthesize deletedLocations=_deletedLocations;
@property(nonatomic) unsigned long long atomBatchBytes; // @synthesize atomBatchBytes=_atomBatchBytes;
@property(retain, nonatomic) NSDictionary *atomBatches; // @synthesize atomBatches=_atomBatches;
@property(retain, nonatomic) NSArray *unseenPeers; // @synthesize unseenPeers=_unseenPeers;
- (id)dictionaryRepresentation;	// IMP=0x0010000000020c68
- (id)initFromDictionary:(id)arg1;	// IMP=0x0010000000020946

@end
