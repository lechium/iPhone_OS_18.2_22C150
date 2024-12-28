//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServerDelegate-Protocol.h>

@class NSError;
@protocol HAP2PairedAccessoryServer;

@protocol HAP2PairedAccessoryServerDelegate <HAP2AccessoryServerDelegate>

@optional
- (void)accessoryServer:(id <HAP2PairedAccessoryServer>)arg1 didFailToUpdateAccessoriesWithError:(NSError *)arg2;
- (void)accessoryServerDidUpdateAccessories:(id <HAP2PairedAccessoryServer>)arg1;
- (void)accessoryServerDidBecomeUnpaired:(id <HAP2PairedAccessoryServer>)arg1;
@end
