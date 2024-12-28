//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DCPresentmentRequest, DCPresentmentSelection, MISSING_TYPE;

@interface _TtC7idcredd23PresentmentSessionProxy : NSObject
{
    MISSING_TYPE *jetsamTransaction;	// 8 = 0x8
    MISSING_TYPE *connection;	// 16 = 0x10
    MISSING_TYPE *dataContainer;	// 24 = 0x18
    MISSING_TYPE *partitions;	// 32 = 0x20
    MISSING_TYPE *flow;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0040000000040010
- (id)init;	// IMP=0x00100000000421f0
- (void)buildErrorResponseWithStatus:(unsigned long long)arg1 completion:(void (^)(NSData *, NSError *))arg2;	// IMP=0x0010000000041b10
- (void)buildCredentialResponseForSelection:(DCPresentmentSelection *)arg1 completion:(void (^)(DCCredentialResponse *, NSError *))arg2;	// IMP=0x00100000000413f0
- (void)buildResponseForSelection:(DCPresentmentSelection *)arg1 completion:(void (^)(NSData *, NSError *))arg2;	// IMP=0x0010000000040d60
- (void)interpretRequest:(DCPresentmentRequest *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x0010000000040820
- (void)generateTransportKeyForSpecification:(unsigned long long)arg1 completion:(void (^)(NSData *, NSError *))arg2;	// IMP=0x0010000000040120
- (void)configureWithPartitions:(id)arg1 presentmentType:(unsigned long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040070
- (void)dealloc;	// IMP=0x001000000003fff0

@end
