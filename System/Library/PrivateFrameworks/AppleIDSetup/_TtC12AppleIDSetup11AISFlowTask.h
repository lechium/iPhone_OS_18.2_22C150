//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC12AppleIDSetup11AISFlowTask : NSObject
{
    MISSING_TYPE *cachedContinuation;	// 0 = 0x0
    MISSING_TYPE *cachedTask;	// 0 = 0x0
    MISSING_TYPE *completed;	// 1163157343 = 0x45545f5f
}

- (void).cxx_destruct;	// IMP=0x000000000009bf80
- (id)init;	// IMP=0x000000000009c050
- (void)dealloc;	// IMP=0x000000000009bef0
- (void)waitUntilLoadedWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x000000000009b890
- (void)complete;	// IMP=0x000000000009b570
@property(nonatomic) _Bool completed; // @synthesize completed;

@end
