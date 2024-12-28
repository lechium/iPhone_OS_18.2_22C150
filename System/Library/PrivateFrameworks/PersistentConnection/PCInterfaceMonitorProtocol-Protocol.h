//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSString;

@protocol PCInterfaceMonitorProtocol <NSObject>
@property(readonly, nonatomic) long long interfaceConstraint;
@property(readonly, nonatomic) _Bool isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) _Bool isRadioHot;
@property(readonly, nonatomic) _Bool isBadLinkQuality;
@property(readonly, nonatomic) _Bool isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) _Bool isInternetReachable;
@property(readonly, nonatomic) _Bool isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) _Bool isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;

@optional
@property(readonly, nonatomic) NSString *networkCode;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
// Preceding property had unknown attributes: ?
// Original attribute string: T^{__CFString=},?,R,N

@property(readonly, nonatomic) unsigned long long interface5GMode;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) _Bool isLTEWithCDRX;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) int currentRAT;
// Preceding property had unknown attributes: ?
// Original attribute string: Ti,?,R,N

@end
