//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class NSError, NSString;

@protocol MSVQRConnectionReportProtocol <NSObject>
@property(readonly, nonatomic) NSString *formattedReport;
- (void)endEvent:(NSString *)arg1 withError:(NSError *)arg2;
- (void)endEvent:(NSString *)arg1;
- (void)startEvent:(NSString *)arg1 withParentEvent:(NSString *)arg2;
- (void)startEvent:(NSString *)arg1;
@end

