//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GTCaptureRequestBatch : NSObject
{
    unsigned long long _requestID;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000d4f2
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d487
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d400
- (id)initWithRequestID:(unsigned long long)arg1;	// IMP=0x000000000000d3c3
- (id)init;	// IMP=0x000000000000d364

@end
