//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, _PASBloomFilter;

__attribute__((visibility("hidden")))
@interface BCSFilterShardItem
{
    _PASBloomFilter *_bloomFilter;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000020f7a
- (void).cxx_destruct;	// IMP=0x0000000000021365
@property(readonly, nonatomic) _PASBloomFilter *bloomFilter; // @synthesize bloomFilter=_bloomFilter;
- (id)containsItemMatching:(id)arg1;	// IMP=0x00000000000210a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020e8b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020e5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000020def
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy) NSString *description;
- (id)initWithBloomFilter:(id)arg1 bloomFilterString:(id)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 type:(long long)arg5 expirationDate:(id)arg6;	// IMP=0x0000000000020ca1
- (id)initWithBloomFilterString:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;	// IMP=0x0000000000020bb3
- (id)initWithBusinessEmailShardItem:(id)arg1;	// IMP=0x0000000000038a7e
- (id)initWithBusinessCallerShardItem:(id)arg1;	// IMP=0x00000000000388e4
- (id)initWithChatSuggestShardItem:(id)arg1;	// IMP=0x000000000003874a
- (id)initWithBusinessLinkShardItem:(id)arg1;	// IMP=0x00000000000385b0
- (id)initWithURL:(id)arg1 type:(long long)arg2;	// IMP=0x000000000006228b
- (id)initWithRecord:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000061f93
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000061aa0

// Remaining properties
@property(readonly, nonatomic) NSString *base64EncodedString;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long shardCount;
@property(readonly, nonatomic) long long startIndex;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end

