//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol SASInterfaceProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType coreAnalyticsCallback;
@property(copy, nonatomic) CDUnknownBlockType eventCallback;
@property(copy, nonatomic) CDUnknownBlockType resetRequestCallback;
@property(copy, nonatomic) CDUnknownBlockType streamCallback;
- (void)addVersion:(NSString *)arg1;
- (_Bool)injectProperty:(NSString *)arg1 value:(id)arg2;
- (_Bool)handleInputStream:(NSData *)arg1;
- (id)initWithStreamSize:(unsigned long long)arg1 platformId:(unsigned long long)arg2 streamCallback:(void (^)(NSData *))arg3;

@optional
@property(copy, nonatomic) CDUnknownBlockType configurationCallback;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

@property(copy, nonatomic) CDUnknownBlockType pencilEventCallback;
// Preceding property had unknown attributes: ?
// Original attribute string: T@?,?,C,N

- (id)getProperty:(NSString *)arg1;
- (id)initWithStreamSize:(unsigned long long)arg1 streamCallback:(void (^)(NSData *))arg2;
@end

