//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface XCTSerializedTransportWrapper : NSObject
{
    NSObject<OS_xpc_object> *_serializedTransport;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000006e10
- (void).cxx_destruct;	// IMP=0x0020000000007007
@property(readonly) NSObject<OS_xpc_object> *serializedTransport; // @synthesize serializedTransport=_serializedTransport;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006f40
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000006e18
- (id)initWithSerializedTransport:(id)arg1;	// IMP=0x0010000000006dbb

@end

