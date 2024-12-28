//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@protocol SAAutomaticallyInvalidatable;

@protocol SBSystemApertureContextAccepting <NSObject>

@optional
@property(nonatomic) unsigned long long obstructionEdge;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) _Bool elementProviderPrefersSuppression;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(readonly, nonatomic, getter=isAlerting) _Bool alerting;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisAlerting

@property(nonatomic, getter=isAffiliatedWithSessionMonitor) _Bool affiliatedWithSessionMonitor;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,GisAffiliatedWithSessionMonitor

- (id <SAAutomaticallyInvalidatable>)requestAlertingAssertionImplicitlyDismissable:(_Bool)arg1;
@end
