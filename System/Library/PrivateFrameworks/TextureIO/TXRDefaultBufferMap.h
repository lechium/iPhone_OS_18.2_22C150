//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TXRDefaultBuffer;

__attribute__((visibility("hidden")))
@interface TXRDefaultBufferMap : NSObject
{
    void *_bytes;	// 8 = 0x8
    TXRDefaultBuffer *_buffer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000000f8d
@property(readonly, nonatomic) void *bytes;
- (id)initForBuffer:(id)arg1 withBytes:(void *)arg2;	// IMP=0x0000000000000f0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

