//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface AKApplicationMetadataRequestProvider
{
    MISSING_TYPE *clientID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0040000000130920
- (id)init;	// IMP=0x00100000001308a0
- (id)initWithContext:(id)arg1 url:(id)arg2;	// IMP=0x00100000001307d0
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3 accountManager:(id)arg4;	// IMP=0x0010000000130760
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3;	// IMP=0x00100000001306f0
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x0010000000130690
- (id)initWithUrlBagKey:(id)arg1;	// IMP=0x0010000000130640
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000130570
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000130220
- (unsigned long long)requestBodyType;	// IMP=0x00100000001300b0
- (unsigned long long)expectedResponseType;	// IMP=0x00100000001300a0

@end

