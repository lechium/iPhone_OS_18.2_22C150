//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPBaseEventStreamComposer-Protocol.h>

@class NSData, NSNumber;

@protocol RCPVendorEventStreamComposer <RCPBaseEventStreamComposer>
- (void)vendorEventWithPage:(NSNumber *)arg1 withUsage:(NSNumber *)arg2 withVersion:(unsigned char)arg3 withData:(NSData *)arg4;
- (void)vendorEventWithPage:(NSNumber *)arg1 withUsage:(NSNumber *)arg2 withVersion:(unsigned char)arg3;
@end

