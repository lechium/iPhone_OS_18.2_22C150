//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21SiriInformationSearch39MockEmittableSiriAnalyticsMessageStream : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *emittedMessages;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000eee10
- (id)init;	// IMP=0x00000000000eedc0
- (void)barrierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee8f0
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 assetIdentifier:(id)arg2 messageMetadata:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ee840
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000ee820
- (void)resolvePartialMessage:(id)arg1;	// IMP=0x00000000000ee800
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000ee7a0
- (void)emitMessage:(id)arg1;	// IMP=0x00000000000ee6a0

@end
