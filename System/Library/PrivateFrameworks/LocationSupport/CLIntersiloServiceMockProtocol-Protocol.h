//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloServiceProtocol-Protocol.h>

@class CLIntersiloServiceMockPayload, NSString;

@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>
- (CLIntersiloServiceMockPayload *)syncgetPayloadForKey:(NSString *)arg1;
- (CLIntersiloServiceMockPayload *)syncgetPayloadForSelector:(SEL)arg1;
- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forSelector:(SEL)arg2;
@end
