//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12TextToSpeech15TTSSpeechTracer : NSObject
{
    MISSING_TYPE *$__lazy_storage_$_pid;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_procName;	// 16 = 0x10
    MISSING_TYPE *operationQueue;	// 32 = 0x20
    MISSING_TYPE *encoder;	// 40 = 0x28
    MISSING_TYPE *eventQueue;	// 48 = 0x30
    MISSING_TYPE *eventBufferSize;	// 56 = 0x38
}

+ (id)shared;	// IMP=0x004000000010e060
- (void).cxx_destruct;	// IMP=0x000000000010f580
- (void)emitWithEvent:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000010e810
- (id)makeSpeechJobIdentifier;	// IMP=0x000000000010e630
- (id)init;	// IMP=0x000000000010e510

@end
