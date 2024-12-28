//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSCopying-Protocol.h>
#import <CoordinationCore/NSObject-Protocol.h>

@class COExecutionContext, NSString, NSUUID;
@protocol CODiscoveryRecordProtocol, COTransportProtocol;

@protocol CODiscoveryRecordProtocol <NSObject, NSCopying>
@property(readonly, nonatomic) NSUUID *HomeKitIdentifier;
@property(readonly, copy, nonatomic) NSString *IDSIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)requiresInquiry;
- (_Bool)producesElectionCapableTransport;
- (_Bool)hasSameBackingDeviceAs:(id <CODiscoveryRecordProtocol>)arg1;
- (id <COTransportProtocol>)newTransportWithExecutionContext:(COExecutionContext *)arg1;
@end
