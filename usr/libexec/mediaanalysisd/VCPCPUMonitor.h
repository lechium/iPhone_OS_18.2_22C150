//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VCPCPUMonitor : NSObject
{
    NSMutableDictionary *_requests;	// 8 = 0x8
    int _requestID;	// 16 = 0x10
}

+ (id)sharedCPUMonitor;	// IMP=0x0040000000018367
- (void).cxx_destruct;	// IMP=0x0020000000018f0c
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000018913
- (int)disableWithTimeoutSeconds:(int)arg1;	// IMP=0x001000000001849f
- (void)dealloc;	// IMP=0x00100000000183bc
- (id)init;	// IMP=0x00100000000182dc

@end

