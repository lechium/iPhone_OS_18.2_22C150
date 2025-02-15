//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServices/NSObject-Protocol.h>

@class BLSAssertionIdentifier, NSError;

@protocol BLSXPCAssertionServiceClientInterface <NSObject>
- (oneway void)assertionDidCancel:(BLSAssertionIdentifier *)arg1 withError:(NSError *)arg2;
- (oneway void)assertionWillCancel:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertionResumed:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertionPaused:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertion:(BLSAssertionIdentifier *)arg1 failedToAcquireWithError:(NSError *)arg2;
- (oneway void)assertionAcquired:(BLSAssertionIdentifier *)arg1;
@end

