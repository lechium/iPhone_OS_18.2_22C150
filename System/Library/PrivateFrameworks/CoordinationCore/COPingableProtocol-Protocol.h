//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@protocol COPingableProtocol <NSObject>
@property(nonatomic) double maximumPingInterval;
@property(nonatomic) double minimumPingInterval;
- (void)pingWithCallback:(void (^)(COMeshRequest *, COMeshResponse *, NSError *))arg1;
@end

