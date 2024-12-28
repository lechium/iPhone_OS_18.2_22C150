//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAP2SerializedOperationQueue;
@protocol HAP2AccessoryServerEncoding, HAP2AccessoryServerMetadata;

@protocol HAP2AccessoryServerEncodingFactory <NSObject>
- (id <HAP2AccessoryServerEncoding>)createEncodingWithOperationQueue:(HAP2SerializedOperationQueue *)arg1 accessoryServerMetadata:(id <HAP2AccessoryServerMetadata>)arg2 encodingFeatures:(unsigned long long)arg3;
@end
