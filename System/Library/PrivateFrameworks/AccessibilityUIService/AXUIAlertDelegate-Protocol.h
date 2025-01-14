//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIService/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol AXUIAlertStyleProvider;

@protocol AXUIAlertDelegate <NSObject>

@optional
- (void)alertWithIdentifierWasActivated:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)alertWithIdentifierWasActivated:(NSString *)arg1;
- (void)alertWithIdentifierDidDisappear:(NSString *)arg1;
- (void)alertWithIdentifierDidAppear:(NSString *)arg1;
- (id <AXUIAlertStyleProvider>)styleProviderForAlertWithIdentifier:(NSString *)arg1;
- (double)desiredWindowLevelForAlertWithIdentifier:(NSString *)arg1;
- (double)delayForDequeuingAlertWithIdentifier:(NSString *)arg1;
- (void)alertWithIdentifierWasEnqueued:(NSString *)arg1;
@end

