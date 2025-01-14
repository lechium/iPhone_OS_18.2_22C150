//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIHomeAffordanceNotifying-Protocol.h>

@class NSMutableSet, NSString, _UIHomeAffordanceObservationRecord;

@protocol _UIHomeAffordanceNotifyingInternal <_UIHomeAffordanceNotifying>
@property(readonly, copy, nonatomic) NSMutableSet *_registeredObserverRecords;
@property(readonly, nonatomic) _Bool _hasInvalidated;
- (void)_reset;
- (NSString *)succinctDescription;
- (void)_unregisterHomeAffordanceObserverForRecord:(_UIHomeAffordanceObservationRecord *)arg1;
@end

