//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SOSCKCircleStorage
{
}

- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00400000002588c8
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002588c0
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002588b8
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002588b0
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x00100000002588a8
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002588a0
- (id)getAccount;	// IMP=0x001000000025888e
- (long long)getTransportType;	// IMP=0x0010000000258883
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000025881b
- (id)init;	// IMP=0x00100000002587d7

@end
