//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject
{
    struct NetworkLoadMetrics _metrics;	// 8 = 0x8
    struct RefPtr<WTF::RefCountedSerialFunctionDispatcher, WTF::RawPtrTraits<WTF::RefCountedSerialFunctionDispatcher>, WTF::DefaultRefDerefTraits<WTF::RefCountedSerialFunctionDispatcher>> _targetDispatcher;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x0000000002dbd520
- (void).cxx_destruct;	// IMP=0x0000000002dbd4b0
- (_Bool)multipath;	// IMP=0x0000000002dbd4a0
- (_Bool)constrained;	// IMP=0x0000000002dbd490
- (_Bool)expensive;	// IMP=0x0000000002dbd480
- (_Bool)cellular;	// IMP=0x0000000002dbd470
@property(readonly) int _privacyStance; // @dynamic _privacyStance;
@property(readonly, getter=isReusedConnection) _Bool reusedConnection; // @dynamic reusedConnection;
@property(readonly, copy) NSString *networkProtocolName; // @dynamic networkProtocolName;
@property(readonly, copy) NSDate *responseEndDate; // @dynamic responseEndDate;
@property(readonly, copy) NSDate *responseStartDate; // @dynamic responseStartDate;
@property(readonly, copy) NSDate *requestStartDate; // @dynamic requestStartDate;
@property(readonly, copy) NSDate *connectEndDate; // @dynamic connectEndDate;
@property(readonly, copy) NSDate *secureConnectionStartDate; // @dynamic secureConnectionStartDate;
@property(readonly, copy) NSDate *connectStartDate; // @dynamic connectStartDate;
@property(readonly, copy) NSDate *domainLookupEndDate; // @dynamic domainLookupEndDate;
@property(readonly, copy) NSDate *domainLookupStartDate; // @dynamic domainLookupStartDate;
@property(readonly, copy) NSDate *fetchStartDate; // @dynamic fetchStartDate;
- (void)dealloc;	// IMP=0x0000000002dbcf10
- (id)_initWithMetrics:(void *)arg1 onTarget:(struct RefCountedSerialFunctionDispatcher *)arg2;	// IMP=0x0000000002dbce00

// Remaining properties
@property(readonly, getter=isCellular) _Bool cellular; // @dynamic cellular;
@property(readonly, getter=isConstrained) _Bool constrained; // @dynamic constrained;
@property(readonly, getter=isExpensive) _Bool expensive; // @dynamic expensive;
@property(readonly, getter=isMultipath) _Bool multipath; // @dynamic multipath;

@end
