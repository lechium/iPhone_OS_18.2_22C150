//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOSAccount;

@interface SOSCircleStorageTransport : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000026b7f0
@property(retain, nonatomic) SOSAccount *account; // @synthesize account;
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000026b7b8
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000026b794
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000026b78c
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000026b784
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x001000000026b77c
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000026b774
- (long long)getTransportType;	// IMP=0x001000000026b76c
- (long long)circleGetTypeID;	// IMP=0x001000000026b764
- (id)getAccount;	// IMP=0x001000000026b752
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000026b6ea
- (id)init;	// IMP=0x001000000026b6bb

@end
