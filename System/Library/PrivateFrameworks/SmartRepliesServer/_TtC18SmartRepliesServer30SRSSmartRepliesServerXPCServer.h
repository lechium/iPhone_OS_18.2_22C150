//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC18SmartRepliesServer30SRSSmartRepliesServerXPCServer : NSObject
{
    MISSING_TYPE *xpcListener;	// 8 = 0x8
    MISSING_TYPE *serverRequestHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000007252
- (void)predictForMessage:(NSString *)arg1 conversationTurns:(NSArray *)arg2 language:(NSString *)arg3 plistPath:(NSString *)arg4 espressoModelPath:(NSString *)arg5 vocabPath:(NSString *)arg6 heads:(NSArray *)arg7 completion:(void (^)(NSDictionary *, NSError *))arg8;	// IMP=0x0000000000006d8c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000006b0f
- (id)init;	// IMP=0x0000000000006187

@end

