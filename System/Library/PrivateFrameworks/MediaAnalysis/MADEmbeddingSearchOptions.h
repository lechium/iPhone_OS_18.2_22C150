//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface MADEmbeddingSearchOptions : NSObject
{
    _Bool _fullScan;	// 8 = 0x8
    _Bool _includePayload;	// 9 = 0x9
    int _resultLimit;	// 12 = 0xc
    NSArray *_assetUUIDs;	// 16 = 0x10
    NSNumber *_numberOfProbes;	// 24 = 0x18
    NSNumber *_batchSize;	// 32 = 0x20
    NSNumber *_numConcurrentReaders;	// 40 = 0x28
}

+ (id)defaultOptions;	// IMP=0x00100000002a29de
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002a2995
- (void).cxx_destruct;	// IMP=0x00000000002a2f1a
@property(retain, nonatomic) NSNumber *numConcurrentReaders; // @synthesize numConcurrentReaders=_numConcurrentReaders;
@property(retain, nonatomic) NSNumber *batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSNumber *numberOfProbes; // @synthesize numberOfProbes=_numberOfProbes;
@property(nonatomic) _Bool includePayload; // @synthesize includePayload=_includePayload;
@property(nonatomic) _Bool fullScan; // @synthesize fullScan=_fullScan;
@property(nonatomic) int resultLimit; // @synthesize resultLimit=_resultLimit;
@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
- (id)description;	// IMP=0x00000000002a2cf5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a2c17
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a29f0
- (id)init;	// IMP=0x00000000002a299d

@end
