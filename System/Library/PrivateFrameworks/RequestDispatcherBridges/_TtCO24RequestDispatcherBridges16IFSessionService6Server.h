//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCO24RequestDispatcherBridges16IFSessionService6Server : NSObject
{
    MISSING_TYPE *jsonDecoder;	// 8 = 0x8
    MISSING_TYPE *clientProxy;	// 16 = 0x10
    MISSING_TYPE *logger;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000000be80
- (id)init;	// IMP=0x000000000000bf10
- (void)dealloc;	// IMP=0x000000000000be00
- (void)getCurrentSessionIdentifierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c660
- (void)sendWithMessageData:(id)arg1 with:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c5c0

@end
