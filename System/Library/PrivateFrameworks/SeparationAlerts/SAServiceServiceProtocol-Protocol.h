//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeparationAlerts/NSObject-Protocol.h>

@protocol SAServiceClientProtocol, TAEventProtocol;

@protocol SAServiceServiceProtocol <NSObject>
- (void)removeClient:(id <SAServiceClientProtocol>)arg1;
- (void)addClient:(id <SAServiceClientProtocol>)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
@end
