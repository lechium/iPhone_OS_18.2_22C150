//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPDXPCEventListener <NSObject>

@optional
- (void)eventReceived:(const char *)arg1 eventInfo:(NSDictionary *)arg2;
- (void)eventReceived:(const char *)arg1 eventValue:(unsigned long long)arg2;
@end
