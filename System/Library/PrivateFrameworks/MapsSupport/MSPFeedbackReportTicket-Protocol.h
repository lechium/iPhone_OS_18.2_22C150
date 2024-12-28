//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/NSObject-Protocol.h>

@class GEOMapServiceTraits, NSObject;
@protocol OS_dispatch_queue;

@protocol MSPFeedbackReportTicket <NSObject>
@property(readonly, nonatomic) long long userInfoType;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 handler:(void (^)(GEORPFeedbackResponse *, NSData *, NSError *))arg2 networkActivity:(void (^)(_Bool))arg3;
- (void)submitWithHandler:(void (^)(GEORPFeedbackResponse *, NSData *, NSError *))arg1 networkActivity:(void (^)(_Bool))arg2;
@end
